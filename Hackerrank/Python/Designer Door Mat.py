try:
    n=int(input("Enter the size of the mat:"))       #M x N (N=3M)  M shud be odd
except:
    print("ERROR!Enter numeric input!")

m=3*n
width=m
p=int(n/2)
x=0
for i in range(1,p+1):
    print(((2*i-1)*('.|.')).center(width,'-'))
    x=i+1

print("WELCOME".center(width,'-'))
for i in range(p,0,-1):
    print(((2*i-1)*('.|.')).center(width,'-'))
