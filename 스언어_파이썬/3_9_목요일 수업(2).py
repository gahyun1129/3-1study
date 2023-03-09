Python 3.11.2 (tags/v3.11.2:878ead1, Feb  7 2023, 16:38:35) [MSC v.1934 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
color = {'apple' : 'red', 'banana' : 'yellow'}
color
{'apple': 'red', 'banana': 'yellow'}
color['apple']
'red'
#순서는 없음.
# 시퀀스 객체 => 튜플, 세트, 리스트
color['cherry'] = 'red'
color
{'apple': 'red', 'banana': 'yellow', 'cherry': 'red'}
# value 중복 가능, key 중복 불가능!!!
color['apple'] = 'green'
# 해당 key 값의 value 변경.
color
{'apple': 'green', 'banana': 'yellow', 'cherry': 'red'}



for c in color:
    print(c)

    
apple
banana
cherry
# dict 내의 키값 가져오기!

for k in color.keys():
    print(k)

    
apple
banana
cherry
for c in color.items():
    print(c)

    
('apple', 'green')
('banana', 'yellow')
('cherry', 'red')
# 쌍을 전부 반환함.

for v in color.values():
    print(v)

    
green
yellow
red
# value만 반환해줌.
list(color.keys())
['apple', 'banana', 'cherry']
# 리스트로 만들기 가능함.

del color['cherry']
color
{'apple': 'green', 'banana': 'yellow'}
# 키 원소 하나만 지우기 .

color.clear()
color
{}
# 전부 다 지우기.

isRight = True
isRight
True
type(isRight)
<class 'bool'>
1 < 2
True
isSmall = 1 < 2
isSmall
True
bool(0)
False
bool(1)
True
bool("")
False
bool("hi")
True
bool([])
False
bool(none)
Traceback (most recent call last):
  File "<pyshell#53>", line 1, in <module>
    bool(none)
NameError: name 'none' is not defined. Did you mean: 'None'?
bool(None)
False
#비어있으면, 혹은 0이면 false, 1이거나 채워져있으면 true

a = [1,2,3]
a = b
Traceback (most recent call last):
  File "<pyshell#58>", line 1, in <module>
    a = b
NameError: name 'b' is not defined
>>> b = a
>>> a
[1, 2, 3]
>>> b
[1, 2, 3]
>>> b[0] =100
>>> b
[100, 2, 3]
>>> a
[100, 2, 3]
>>> # 같이 바뀜!!!!!!!
>>> # 복사하면 이렇게 됨...
>>> # 주소카피임. 밸류카피 X 래퍼런스카피 O
>>> id(a)
2717606131840
>>> id(b)
2717606131840
>>> # 주소가 같음.
>>> c = a[:]
>>> # 이렇게 복사해야 달라짐.
>>> id(c)
2717606131456
>>> id(a)
2717606131840
>>> id(b)
2717606131840
>>> 
>>> 
>>> #혹은 copy 모듈 import 하면 됨. 피피티 맨 마지막 장에 있음.!!
