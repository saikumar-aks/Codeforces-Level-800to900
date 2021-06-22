n , h = map(int, input().split())
c=0
li=list(map(int,input().split()))
for i in li:
    if i <= h:
        c+=1
    else:
        c+=2
print(c)
