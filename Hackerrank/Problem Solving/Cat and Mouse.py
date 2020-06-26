def catnMouse(tc):  
    for i in range(tc):
        c1,c2,m=map(int,input().split())
        if(abs(c1-m)<abs(c2-m)):
            print("Cat A")
        elif(abs(c1-m)>abs(c2-m)):
            print("Cat B")
        else:
            print("Mouse C")

tc=int(input("Enter the no. of testcases:"))
catnMouse(tc)
