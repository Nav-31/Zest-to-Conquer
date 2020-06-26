def angryProf(tc):
    for i in range(tc):
        s=0
        n,k=map(int,input().split())
        time=list(map(int,input().split()))
        for j in range(n):
            if(time[j]<=0):
                s+=1
        if(s>=k):
            print("NO")
        else:
            print("YES")


try:
    tc=int(input())
except:
    print("ERROR! Enter numeric input only!")
    quit()
angryProf(tc)
