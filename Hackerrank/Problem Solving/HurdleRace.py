tc,k=map(int,input().split())
heights=list(map(int,input().split()))
x=max(heights)
if(x>k):
    print(x-k)
else:
    print('0')
