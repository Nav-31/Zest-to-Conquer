def countApplesAndOranges(s,t,a,b,m,n,ap,og):
    apples=0;oranges=0
    for i in range(m):
        if(ap[i]<0):
            continue
        elif(ap[i]+a>=s and ap[i]+a<=t):
            apples+=1
    for i in range(n):
        if(og[i]>0):
            continue
        elif(b+og[i]>=s and b+og[i]<=t):
            oranges+=1
        
    print(apples,oranges)


s,t=map(int,input().split())
a,b=map(int,input().split())
m,n=map(int,input().split())
ap=list(map(int,input().split()))
og=list(map(int,input().split()))
countApplesAndOranges(s,t,a,b,m,n,ap,og)

