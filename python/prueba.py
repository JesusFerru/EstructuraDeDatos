def horner(coeficientes, x):
    n = len(coeficientes)
    resultado = coeficientes[n-1]
    for i in range(n-2, -1, -1):
        resultado = resultado*x + coeficientes[i]
    return resultado

#Ejemplo de uso
coeficientes = [1, 2, 3,4, 5]
x = 2
resultado = horner(coeficientes, x)
print(resultado)