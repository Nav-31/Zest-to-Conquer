try:
    n=int(input("Enter the no. of Participants:"))
    ar=set(map(int,input().split()))               #Enter the score in d same line vth spaces
except:
    print("ERROR! Enter numeric input only!")
    quit()
a=list(ar)
a.sort()
print("Runner-Up Score:",a[len(a)-2])
