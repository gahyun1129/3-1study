# 회문 판정 함수
def reverse(N):
    result = 0
    # result = result*10 + N%10; N=N/10
    # result = (result*10 + N%10)*10 + N%10; N=N/10
    # ...
    while N:
        result = result*10 + N%10
        N = N//10 # 꼭 //로 해서 정수 나눗셈 해야 함.        
    return result

# 소수 판정 함수
def isPrime(N):
    for divisor in range(2, int(N**0.5)+1): # range(a, b)는 a부터 b-1까지 포함함. 그래서 +1 해야 함.
        if N % divisor == 0:
            return False
    return True

N = int(input())

# print(reverse(N))

while True:
    if(N==reverse(N) and isPrime(N)):
        # 회문 검사가 빠르므로 먼저 검사함.
        # 소수 먼저 검사하면 시간이 너무 오래 걸림.
        print(N)
        break
    N += 1
