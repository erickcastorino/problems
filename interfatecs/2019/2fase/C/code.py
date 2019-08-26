def str_check(String):
    tests=[False,False,False]
    for i in range(len(String)):
        x=ord(String[i])
        if not(x!=' ' and(97<=x<=122)or(65<=x<=90)or (48<=x<=57)):
            return False
        if(i!=0):
            if (ord(String[i-1])-x==-1):
                return False
        if(97<=x<=122):
            tests[0]=True
        
        if(65<=x<=90):
            tests[1]=True
            
        if(48<=x<=57):
            tests[2]=True
    if tests==[True,True,True]:
        return True
    else:
        return False

String= input()
x= False
if(6<=len(String)<=15):
    x=str_check(String)
if(x==False): print('False.')
else:print('True.')
