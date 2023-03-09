#백준 온라인 저지 1100 하얀칸



count = 0 #하얀칸 위의 말의 개수를 세는 변수
white = 0 #0/1 토글 첫번재 줄은 짝수번 문자가 흰, 두 번재 줄은 홀수번 문자가 흰


for _ in range(8): # _가 0부터 7까지 돈다는 뜻!
    line = input()
    for i in range(8):
        if line[i] == 'F' and i%2 == white:
            count += 1

    white = (white+1)%2

print(count)
