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
    lst = [0]
    count = 0
    while num:
        lst.insert(1, (num%4))
        num = num/b
        count += 1
    return lst
            

b, N, M = map(int, input().split())
lst1 = list(map(int, input().split()))
lst2 = list(map(int, input().split()))

print(toDec(b, N, lst1) * toDec(b, M, lst2))
#print(decToB(b, toDec(b, N, lst1)+toDec(b, M, lst2)))
