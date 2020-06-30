def uthopianTree(n):
    h=1
    for i in range(1,n+1):
        if(i%2!=0):
            h=h*2
        else:
            h=h+1
    return h

tc=int(input("Enter d no. of TestCases:"))
for i in range(tc):
    n=int(input())
    print(uthopianTree(n))
    
