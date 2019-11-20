import sys

n,m = map(int,sys.stdin.readline().split())
numbers2 = list(map(int,sys.stdin.readline().split()))
count = 0
adder = 0

for p in range(n):
    adder = 0
    for q in range(p,n):
        adder+=numbers2[q]
        if(adder%m==0):
            count+=1

print(count)
