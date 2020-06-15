try:
    n = int(input("Enter the no. of students:"))
    
except:
    print("ERROR! Enter numeric input only")
    quit()

record=[]
for i in range(n):
    r=list(input().split())         #Enter the name and 3 scores separated by spaces
    record.append(r)                #eg: Navya 25 24 21

p=[]
for i in range(n):
    avg=0
    for j in range(1,4):
        avg=avg+float(record[i][j])
    avg= (avg/3)
    p.append(avg)


database={}
for i in range(n):
    database[record[i][0]]=p[i]

print(database)
i=input("Display d avg of:")
x=float(database[i])
print('%.2f'%x)                     #setting precision to 2 decimal places
