def cutTheSticks(ar):
    while(max(ar)!=min(ar)):
        print(len(ar))
        x=min(ar)
        for i in range(len(ar)):
            ar[i]=ar[i]-x
        while (0 in ar):
            ar.remove(0)
    print(len(ar))

try:
    n=int(input())
    ar=list(map(int,input().split()))
except:
    print("ERROR! Enter numeric input only!")
    quit()

cutTheSticks(ar)
