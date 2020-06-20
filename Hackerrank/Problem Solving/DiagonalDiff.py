
def diff(n,ar):
        s1=0;s2=0          
        for i in range(n):
                s1=s1+ar[i][i]
                s2=s2+ar[i][n-1-i]

        d=abs(s1-s2)
        return d
        
n=int(input("Enter the size of matrix:"))
ar=[]
for i in range(n):                      
        a=map(int,input().split())                      #Enter 3 numbers per line
        p=list(a)
        ar.append(p)

print(diff(n,ar))

