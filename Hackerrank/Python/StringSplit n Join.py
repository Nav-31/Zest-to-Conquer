def split_and_join(s):
    s=s.split()
    s="-".join(s)
    return s
line = input("Enter a sentence:")
print(split_and_join(line))
