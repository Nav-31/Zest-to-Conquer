import textwrap
s=input("Enter the string:")
n=int(input("Enter the width:"))
print(textwrap.fill(s,n))           #returns a single string bt printed at specified width 
print(textwrap.wrap(s,n))           #returns a list of o/p lines of width w

