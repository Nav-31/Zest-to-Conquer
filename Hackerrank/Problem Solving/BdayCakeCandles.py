n=int(input())
ar=list(map(int,input().split()))
m=max(ar)
p=0
for i in range(len(ar)):
    if(ar[i]==m):
        p+=1
print(p)
