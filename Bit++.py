t=int(input())
count=0
while(t>0):
    t-=1
    stmnt=input()
    if stmnt == "++X" or stmnt == "X++":
        count+=1
    else:
        count-=1
print(count)
