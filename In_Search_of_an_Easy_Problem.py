n=int(input())
c=0
li=list(map(int, input().split()))
for i in li:
    if i==1:
      c+=1
if (c > 0):
    print("HARD")
else:
    print("EASY")
