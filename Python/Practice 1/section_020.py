#section_020.py

text = '나는 문자열이다. \n줄바꿈하려면 특수문자열을 써야하고, \n특수문자열을 사용하면 \t탭도 가능하다.'
print(text)
print()

multiText = '''
그런데 여러 줄 문자열을 사용하면
여기 보이는 그대로 출력된다.
줄바꿈이나 탭이나 공백도 그대로이다.
   큰따옴표 세 개(""")를 사용해도
   같은 결과를 얻을 수 있다.
   물론 다양한 특수문자(~!@#$%^&*()도
   그대로 출력된다.
'''
print(multiText)