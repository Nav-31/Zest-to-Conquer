import math

def gradingStudents(grades):
    RoundedScore=[]
    for i in range(len(grades)):
        if(grades[i]<38):
            r=grades[i]
        elif(grades[i]%5>=3):
            r=grades[i]+(5-grades[i]%5)
        else:
            r=grades[i]
        RoundedScore.append(r)
    return(RoundedScore)

n=int(input("Enter the no of students:"))
grades=[]
for i in range(n):
    s=int(input())
    grades.append(s)
print(gradingStudents(grades))
