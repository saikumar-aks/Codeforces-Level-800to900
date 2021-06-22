n= int(input())
c=0
while n!=0:
    p , q = map(int , input().strip().split())
    if abs(p-q) >=2:
        c+=1
    n-=1
print(c)
