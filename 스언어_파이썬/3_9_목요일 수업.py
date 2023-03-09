Python 3.11.2 (tags/v3.11.2:878ead1, Feb  7 2023, 16:38:35) [MSC v.1934 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
# 3월 9일 목요일
colors = ['red', 'green', 'golf']
type(colors)
<class 'list'>
colors
['red', 'green', 'golf']
colors.append('blue')
colors
['red', 'green', 'golf', 'blue']
colors.insert(1, 'black;)
              
SyntaxError: incomplete input
colors.insert(1, 'black')
              
colors
              
['red', 'black', 'green', 'golf', 'blue']
colors += ['red']
              
colors
              
['red', 'black', 'green', 'golf', 'blue', 'red']
colors += 'red'
              
colors
              
['red', 'black', 'green', 'golf', 'blue', 'red', 'r', 'e', 'd']
colors.index('red')
              
0
colors.index('red', 1, 5)
              
Traceback (most recent call last):
  File "<pyshell#14>", line 1, in <module>
    colors.index('red', 1, 5)
ValueError: 'red' is not in list
colors.index('red', 1)
              
5
colors.count('red')
              
2
colors.pop()
              
'd'
colors
              
['red', 'black', 'green', 'golf', 'blue', 'red', 'r', 'e']
colors.reverse()
              
colors
              
['e', 'r', 'red', 'blue', 'golf', 'green', 'black', 'red']
colors.pop(1)
              
'r'
colors.remove('red')
              
colors
              
['e', 'blue', 'golf', 'green', 'black', 'red']
colors.remove('yellow')
              
Traceback (most recent call last):
  File "<pyshell#24>", line 1, in <module>
    colors.remove('yellow')
ValueError: list.remove(x): x not in list
colors.remove('red')
              
colors
              
['e', 'blue', 'golf', 'green', 'black']
colors += [3]
              
colors
              
['e', 'blue', 'golf', 'green', 'black', 3]
colors.sort()
              
Traceback (most recent call last):
  File "<pyshell#29>", line 1, in <module>
    colors.sort()
TypeError: '<' not supported between instances of 'int' and 'str'
colors.pop()
              
3
colors.sort()
              
color
              
Traceback (most recent call last):
  File "<pyshell#32>", line 1, in <module>
    color
NameError: name 'color' is not defined. Did you mean: 'colors'?
colors
              
['black', 'blue', 'e', 'golf', 'green']





def mysort(x):
    return x[-1]

# 문자열 중에서 마지막 문자를 반환함. 제일 마지막!

colors.sort(key=mysort)
colors
['blue', 'e', 'golf', 'black', 'green']
# blue의 e, e, golf의 f, black의 k... 등 각 단어의 가장 마지막 문자를 기준으로 정렬함.
colors.sort(key=mysort, reverse=True)
colors
['green', 'black', 'golf', 'blue', 'e']
# 내림차순으로 정렬 가능. reverse=True


#set은 중복 없음, 인덱스 없음!

a={1,2,3}
b={2, 3, 4, 4, 4, 5, 6}
a
{1, 2, 3}
b
{2, 3, 4, 5, 6}
a.union(b)
{1, 2, 3, 4, 5, 6}
a | b
{1, 2, 3, 4, 5, 6}
a + b
Traceback (most recent call last):
  File "<pyshell#60>", line 1, in <module>
    a + b
TypeError: unsupported operand type(s) for +: 'set' and 'set'
a.intersection(b)
{2, 3}
a - b
{1}
a & b
{2, 3}
# 교집합
a - b
{1}
#차집합
a = { 'ds', 3}
a
{'ds', 3}
>>> 
>>> 
>>> # 튜플은 리스트랑 유사함
>>> # 튜플은 () 괄호로 묶음. 튜플 안의 원소 변경 불가. 읽기만 가능.
>>> # 인덱스 연산 가능함. 순서 정해져있음.
>>> 
>>> t = (1, 2, 3)
>>> type(t)
<class 'tuple'>
>>> t[0]
1
>>> t[2]
3
>>> [t:2]
SyntaxError: invalid syntax
>>> t[:2]
(1, 2)
>>> a, b = 1, 2
>>> #튜플로 알아서 만들어서 a=1, b=2가 됨
>>> a, b = b, a
>>> a
2
>>> b
1
>>> # swap!
>>> 
>>> t = 'a', 'b', 'c'
>>> t
('a', 'b', 'c')
>>> type(t)
<class 'tuple'>
>>> k = 'a', 'c'
>>> type(k)
<class 'tuple'>
