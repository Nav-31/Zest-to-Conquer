def breakingRecords(n,ar):
    u=0;d=0
    mx=ar[0]
    mn=ar[0]
    for i in range(1,n):
        if(ar[i]>mx):
            mx=ar[i]
            u+=1
        elif(ar[i]<mn):
            mn=ar[i]
            d+=1
    return u,d

try:
    n=int(input("Enter the no. of matches:"))
    scores=list(map(int,input().split()))
except:
    print('ERROR! Enter numeric input only:')
    quit()

print(breakingRecords(n,scores))
