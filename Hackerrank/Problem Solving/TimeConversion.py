def timeConversion(time):
    x=time[-2]
    t=time.split(":")
    hr=int(t[0])
    if(x=='A'):
        if(hr==12):
            hr='00'
    else:
        if(hr!=12):
            hr=(hr+12)
            
    q=str(hr)
    t[0]=q.zfill(2)
    time=':'.join(t)
    return (time[:-2])

try:
    time=input("Enter time in 12hr format:")
except:
    print("ERROR! Enter Numeric input only!")
    quit()

print(timeConversion(time))
