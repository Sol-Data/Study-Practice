person = spark.createDataFrame([
    (0, "Bill Chambers", 0, [100]),
    (1, "Matei Zaharia", 1, [500, 250, 100]),
    (2, "Michael Armbrust", 1, [250, 100])])\
  .toDF("id", "name", "graduate_program", "spark_status")
graduateProgram = spark.createDataFrame([
    (0, "Masters", "School of Information", "UC Berkeley"),
    (2, "Masters", "EECS", "UC Berkeley"),
    (1, "Ph.D.", "EECS", "UC Berkeley")])\
  .toDF("id", "degree", "department", "school")
sparkStatus = spark.createDataFrame([
    (500, "Vice President"),
    (250, "PMC Member"),
    (100, "Contributor")])\
  .toDF("id", "status")


# COMMAND ----------

joinExpression = person["graduate_program"] == graduateProgram['id']


# COMMAND ----------

wrongJoinExpression = person["name"] == graduateProgram["school"]


# COMMAND ----------

joinType = "inner"


# COMMAND ----------

gradProgram2 = graduateProgram.union(spark.createDataFrame([
    (0, "Masters", "Duplicated Row", "Duplicated School")]))

gradProgram2.createOrReplaceTempView("gradProgram2")


# COMMAND ----------

from pyspark.sql.functions import expr

person.withColumnRenamed("id", "personId")\
  .join(sparkStatus, expr("array_contains(spark_status, id)")).show()


# COMMAND ----------

# 조인 사용 시 문제점
# 종복 컬럼명 처리

gradProgramDupe = graduateProgram.withColumnRenamed("id", "graduate_program")

joinExpr = gradProgramDupe["graduate_program"] == person["graduate_program"]

person.join(gradProgramDupe, joinExpr).show()

person.join(gradProgramDupe, joinExpr).select("graduate_program").show()

#다른 조인 표현식 사용
person.join(gradProgramDupe, "graduate_program").select("graduate_program").show()

# 조인 후 컬럼 제거
person.join(gradProgramDupe, joinExpr).drop(person["graduate_program"]).select("graduate_program").show()

joinExpr = person["graduate_prgoram"] == graduateProgram["id"]

person.join(graduateProgram, joinExpr).drop(graduateProgram["id"]).show()


# 조인전 컬럼명 변경
gradProgram3 = graduateProgram.withColumnRenamed("id", "grad_id")

joinExpr = person["graduate_program"] == gradProgram3["grad_id"]

person.join(gradProgram3, joinExpr).show()

# 브로드캐스트 조인 실습
joinExpr = person["graduate_program"] == graduateProgram["id"]

person.join(graduateProgram, joinExpr).explain()

from pyspark.sql.functions import broadcast

person.join(broadcast(graduateProgram). joinExpr).explain()



