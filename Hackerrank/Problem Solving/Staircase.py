w=int(input("Enter the size of the Staircase:"))

for i in range(1,w+1):
    x=i*('#')
    print(x.rjust(w))
