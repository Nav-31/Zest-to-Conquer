def MinMaxSum(ar):
    ar.sort()
    MinSum=sum(ar[:4])
    MaxSum=sum(ar[1:])
    return MinSum, MaxSum

ar=list(map(int,input().split()))

print(MinMaxSum(ar))
