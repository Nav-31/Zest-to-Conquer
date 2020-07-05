try:
    n=int(input("Enter the no of pages:"))
    t=int(input("Turn to page:"))
except:
    print("ERROR! Enter numeric input only!")
    quit()
if((n-t)<t):
    if(n%2==0 and t==n-1):
        turn=1
    else:
        turn=int((n-t)/2)
else:
    turn=int(t/2)
print(turn)
