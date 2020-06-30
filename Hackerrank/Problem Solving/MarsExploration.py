s=input("Enter the msg:")
ref='SOS'
c=0
for i in range(len(s)):
    if(s[i]!=ref[i%3]):
        c+=1
print(c)
