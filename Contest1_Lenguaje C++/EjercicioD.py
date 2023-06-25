def solve(oracion):
    arreglo = oracion.split()
    if(oracion.__len__() >0):
        lI = arreglo[0][0]
    for palabra in arreglo:
        if(palabra[0].upper() != lI.upper()):
            return False
    return True


palabra = input()
while(palabra!='*'):
    if(solve(palabra)):
        print('Y')
    else:
        print('N')
    palabra = input()