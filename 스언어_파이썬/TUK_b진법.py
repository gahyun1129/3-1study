def toDec(b, N, lst):
    #b진수 10진수로 계산하기
    i = 0
    result = 0
    while N:
        result += (b**(N-1)) * lst[i]
        N -= 1
        i += 1
    return result

def decToB(b, num):
    lst = ""
    count = 0
    while num > 0:
        lst = str(num%b) + " " + lst
        num = num//b
        count += 1
    return count, lst
            

b, N, M = map(int, input().split())
lst1 = list(map(int, input().split()))
lst2 = list(map(int, input().split()))

# print(toDec(b, N, lst1) * toDec(b, M, lst2))

count, result = decToB(b, (toDec(b, N, lst1) * toDec(b, M, lst2)))
print(count)
print(result)
