##Dado n variables booleanas x1,..., xn , deseamos imprimir todas las combinaciones  
##posibles de los valores lógicos que son tomadas. 
##Ej. Si n=2, hay cuatro posibilidades: V,V ; V,F; F,V; y F,F . 

n = int(input("Cantidad de variables booleanas: ")) # pedimos al usuario que ingrese el valor de n


#n = 2

# Generamos todas las combinaciones posibles de valores booleanos para n variables
listas = [] #Creamos un arreglo llamado lista
for i in range(2**n):  #3   4
    combination = []    # Creamos otro arreglo que almacenara cada uno de los booleanos
    for j in range(n): #1 2 
        combination.append((i >> j) & 1 == 1)  #.append añade un objeto combination al conjunto de datos de la lista
# 3 >> 1 
# 01 & 1 = 1 == 1 -> True

#  0  0
#  0  1
#  1  0 
#  1  1



#    + - / *
#   && ||  AND  OR 
#   & |  >>  << ~
#   0000
#   0001
#    a & b
#   a = 0010
#   b = 0011
    # = 0010
#    a | b
#   a = 0010
#   b = 0011
    # = 0011 
    #    a << 2
    #   b >> 3
#   a = 1011
#   b = 0011
    # = 1100
    # = 0000

    listas.append(combination)

# lista [
# False  False  combination[0]
# True   False  combination[1]
# False  True  combination[2]
# True   True  combination[3]
#  ]    

# Imprime todas las combinaciones posibles y contamos su frecuencia
frequenciesV = [0] * len(listas) # len(listas) = 4
frequenciesF = [0] * len(listas)
for i, combination in enumerate(listas):   
    for j, value in enumerate(combination):
      
        if value == True:
            frequenciesV[i] = frequenciesV[i]+1
        else :
            frequenciesF[i] = frequenciesF[i]+1


#Imprime las frecuencias de verdaderos
print("Frecuencias:")
for i, combination in enumerate(listas):
    print(str(i+1) + ". " + str(combination) + " => " + str(frequenciesV[i]) +" V y " + str(frequenciesF[i]) +" F" )
    

