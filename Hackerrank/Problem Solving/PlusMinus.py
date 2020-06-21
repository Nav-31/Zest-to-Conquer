
def ratio(t,ar):
    n=0;p=0;z=0
    for  i in range(t):
        if(ar[i]<0):
            n+=1
        elif(ar[i]>0):
            p+=1
        else:
            z+=1
    print("The ratio of +ve,-ve and zeros are as follows:")
    print('%.6f'%(p/t))
    print('%.6f'%(n/t))
    print('%.6f'%(z/t))



try:
    t=int(input("Enter the no of elememts:"))
    ar=list(map(int,input().split()))
except:
    print("ERROR!Enter numeric input only!")
    quit()
ratio(t,ar)

