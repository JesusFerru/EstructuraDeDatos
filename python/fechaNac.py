#fecha_nacimiento = input("Ingresa tu fecha de nacimiento en formato dd/mm/aaaa: ")
#Split separa los caracteres según el que se indique

opt = "n"
while opt == "n":

    n = int(input("ingrese n: "))
    if n>=5:
        print(True)
    else:
        print(False)
    opt = input("Quiere salir del programa: ")



# dia, mes, anio = fecha_nacimiento.split("/")

# print("Día:", dia)
# print("Mes:", mes)
# print("Año:", anio)
