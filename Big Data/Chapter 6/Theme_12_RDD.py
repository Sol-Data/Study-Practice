spark.range(10).rdd


# COMMAND ----------

spark.range(10).toDF("id").rdd.map(lambda row: row[0])


# COMMAND ----------

spark.range(10).rdd.toDF()


# COMMAND ----------

myCollection = "Spark The Definitive Guide : Big Data Processing Made Simple"\
  .split(" ")
words = spark.sparkContext.parallelize(myCollection, 2)

print("Number of Partitions: "+str(words.getNumPartitions()))
print("Action: First element: "+str(words.first()))

# COMMAND ----------

words.setName("myWords")
words.name() # myWords


# COMMAND ----------

def startsWithS(individual):
  return individual.startswith("S")


# COMMAND ----------

words.filter(lambda word: startsWithS(word)).collect()


# COMMAND ----------

words2 = words.map(lambda word: (word, word[0], word.startswith("S")))


# COMMAND ----------

words2.filter(lambda word: word[2]).take(5)


# COMMAND ----------

words.flatMap(lambda word: list(word)).take(5)


# COMMAND ----------

words.sortBy(lambda word: len(word) * -1).take(2)


# COMMAND ----------

fiftyFiftySplit = words.randomSplit([0.5, 0.5])


# COMMAND ----------

spark.sparkContext.parallelize(range(1, 21)).reduce(lambda x, y: x + y) # 210


# COMMAND ----------

def wordLengthReducer(leftWord, rightWord):
  if len(leftWord) > len(rightWord):
    return leftWord
  else:
    return rightWord

words.reduce(wordLengthReducer)


# COMMAND ----------
words.count()

confidence = 0.95
timeoutMilliseconds = 400
words.countApprox(timeoutMilliseconds, confidence)

# COMMAND ----------
words.countApproxDistinct(0.05)
words.countByValue()

# COMMAND ----------
words.first()

spark.sparkContext.parallelize(range(1,20)).max()
spark.sparkContext.parallelize(range(1,20)).min()

# COMMAND ----------
words.take(5)
words.takeOrdered(5)
words.top(5)

withReplacement = True
numberToTake = 6
randomSeed = 100
words.takeSample(withReplacement, numberToTake, randomSeed)

# COMMAND ----------
words.saveAsTextFile("F:/spark/word.txt")
codec = "org.apache.hadoop.io.compress.GzipCodec"
words.saveAsTextFile("F:/spark/word2.txt", codec)

examplePairRDD = sc.parallelize([(1, 3), (1, 5), (2, 4), (3, 3), (4, 8), (4, 2), (3, 1)])
examplePairRDD

# COMMAND ----------
words.cache()
words.getStorageLevel()

# COMMAND ----------

words.mapPartitions(lambda part: [1]).sum() # 2


# COMMAND ----------

def indexedFunc(partitionIndex, withinPartIterator):
  return ["partition: {} => {}".format(partitionIndex,
    x) for x in withinPartIterator]
words.mapPartitionsWithIndex(indexedFunc).collect()

# COMMAND ----------

def f(iterator):
    for x in iterator:
         print(x)
sc.parallelize([1, 2, 3, 4, 5]).foreachPartition(f)


# COMMAND ----------

spark.sparkContext.parallelize(["Hello", "World"], 2).glom().collect()
# [['Hello'], ['World']]


# COMMAND ----------

