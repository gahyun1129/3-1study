N = int(input())
lst = []
while N:
    music = list(map(str, input().split()))
    lst += [(music[0], int(music[1]))]
    


    
    N -= 1

print(lst[0])
