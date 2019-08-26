def num_seg(num):
    x=0
    for i in range(1,num//2+1):
        if(num%i==0):
            x+=i
    return x
string= input()
string=string.split(' ')
string=(int(string[0]),int(string[1]))
x=string[1]
for i in range(string[0]):
    x=num_seg(x)
if(x==string[1]):
    print('sim')
else:
    print('nao')
