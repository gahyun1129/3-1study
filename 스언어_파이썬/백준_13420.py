testCase = int(input())
while testCase:
    line = list(map(str, input().split()))
    if line[1] == '*':
        if int(line[4]) == int(line[0]) * int(line[2]):
            print("correct")
        else:
            print("wrong answer")
    if line[1] == '/':
        if int(line[4]) == int(line[0]) / int(line[2]):
            print("correct")
        else:
            print("wrong answer")
    if line[1] == '+':
        if int(line[4]) == int(line[0]) + int(line[2]):
            print("correct")
        else:
            print("wrong answer")
    if line[1] == '-':
        if int(line[4]) == int(line[0]) - int(line[2]):
            print("correct")
        else:
            print("wrong answer")
    testCase -= 1
