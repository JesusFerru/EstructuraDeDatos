#Ejercicio 4, regla de horner

#Funcion con el algoritmo de la Regla de Horner
def horner(vector, x):
    result = vector[-1]
    for i in range(len(vector)-2, -1, -1):
        result = result * x + vector[i]
        i -= 1
    return result

n = int(input("Cantidad de terminos del polinomio: "))

# Leer los valores de los terminos n y los almacena en el arreglo "terminos"
terminos = []
for i in range(n):
    termino = int(input(f"Término de grado {n-i-1}: "))
    terminos.append(termino)

# Leer el valor de x desde el usuario
x = int(input("\nIngrese el valor de x: "))

print("EL resultado es: "+ str(horner(terminos, x)))