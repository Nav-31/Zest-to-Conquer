def mutate_string(st, pos,ch):
    l=list(st)
    l[pos]=ch
    l="".join(l)
    return l
    
s = input("Enter a word:")
i, c = input().split()              #Enter pos n char
s_new = mutate_string(s, int(i), c)
print(s_new)
