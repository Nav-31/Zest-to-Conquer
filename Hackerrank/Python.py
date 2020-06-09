try:
    n = int(input("Enter the no. of participants:"))
    arr = map(int, input().split())                         #Input the scores seperated by spaces
except:
    print("ERROR! Enter numeric input only")

l=list(arr)

l.sort(reverse=True)
x=max(l)
for i in range(n):
    if(l[i]==x):
        continue
    print("The Runner-up score is",l[i])
    quit()
