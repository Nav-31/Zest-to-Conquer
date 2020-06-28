def bonAppetit(k,bill,b):
    t=sum(bill)
    tot=t-bill[k]
    share=tot/2
    if(share==b):
        print('Bon Appetit')
    else:
        print(b-share)


n,k=map(int,input().split())
bill=list(map(int,input().split()))
b=int(input())
bonAppetit(k,bill,b)
