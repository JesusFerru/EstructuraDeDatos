# Pedir al usuario la fecha de nacimiento
fecha_nacimiento = input("Ingrese su fecha de nacimiento en formato dd/mm/aaaa: ")

# Convertir la fecha en una lista de tres elementos separados por "/"
dia, mes, anio = fecha_nacimiento.split("/")

# Convertir el mes en su forma literal
meses = ['enero', 'febrero', 'marzo', 'abril', 'mayo', 'junio',
         'julio', 'agosto', 'septiembre', 'octubre', 'noviembre', 'diciembre']
mes_literal = meses[int(mes)-1]

# Imprimir la fecha de nacimiento con el día, mes (en forma literal) y año
print("Usted nació el día", dia, "de", mes_literal, "de", anio)
