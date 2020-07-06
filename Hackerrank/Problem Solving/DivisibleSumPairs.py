def divisibleSumPairs(n, k, ar):
    c=0
    for i in range(n):
        for j in range(i+1,n):
            if((ar[i]+ar[j])%k==0):
                c+=1
    return c
                
try:
    n,k=map(int,input().split())
    ar=list(map(int,input().split()))
except:
    print("ERROR! Enter Numeric input only!")
    quit()
print(divisibleSumPairs(n,k,ar))
