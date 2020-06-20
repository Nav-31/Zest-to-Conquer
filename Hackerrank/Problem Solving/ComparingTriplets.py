def compare(a,b):
        p=0
        q=0
        for i in range(3):
                if(a[i]>b[i]):
                        p+=1
                elif(a[i]<b[i]):
                        q+=1
        l=[p,q]
        return l
        
ar=map(int,input().split())
a=list(ar)
br=map(int,input().split())
b=list(br)
print(compare(a,b))


