def in_arr(x, p):
    for i in range(len(x)):
        if(x[i] == p): return i

filas = [list() for i in range(5)]
ordem = ["VERMELHO", "LARANJA", "AMARELO", "VERDE", "AZUL"]
while(1):
    ent = input()
    try :
        if(ent == EOF): break
    except:                                         
        if(ent == "beep"):
            for i in range(5):
                if(len(filas[i]) > 0):
                    print(filas[i].pop(0))
                    break 
        else:
            ent = ent.split(" ")
            filas[in_arr(ordem, ent[1])].append(ent[0])
