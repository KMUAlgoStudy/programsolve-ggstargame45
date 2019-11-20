import math

n= int(input())
adder = [i*i for i in range(int(math.sqrt(n)),0,-1)]
theNumber = n
index = 0
rCount = 0

def go(num,index,count):
    global rCount
    if(index<len(adder)-1):
        go(num,index+1,count)
        num-=adder[index]
        count+=1
        if(num>0):
            if(count<rCount):
                if(num>adder[index]):
                    go(num,index,count)
                go(num,index+1,count)
        elif(num==0):
            if(count<rCount):
                rCount = count
    else:
        if(num+count<rCount):
            rCount = num+count

while(theNumber!=0):
    if(theNumber>=adder[index]):
        rCount+=1
        theNumber-=adder[index]
    else:
        index+=1

print(rCount)

go(n,0,0)

print(rCount)
