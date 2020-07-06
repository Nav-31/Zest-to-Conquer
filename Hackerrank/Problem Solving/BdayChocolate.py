def birthday(n, ar, d, m):
    c=0
    for i in range(n):
        sum=0
        if(i<=n-m):
            for j in range(i,i+m):  
                sum+=ar[j]
            if(sum==d):
                c+=1
    return c

try:
    n=int(input("Enter the no of squares in chocolate bar:"))
    ar=list(map(int,input().split()))
    d,m=map(int,input().split())
except:
    print("ERROR! Enter numeric input only!")
    quit()

print(birthday(n,ar,d,m))
