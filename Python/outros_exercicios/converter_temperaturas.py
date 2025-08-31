import modulos.temp.temperature_converter

# converte para celsius
f = input("Temperatura em Fahrenheit: ")
res_c = modulos.temp.temperature_converter.to_celsius(f)
print(f">Temperatura em Celsius: {res_c}\n")

# converte para fahrenheit
c = input("Temperatura em Celsius: ")
res_f = modulos.temp.temperature_converter.to_fahrenheit(c)
print(f">Temperatura em Fahrenheit: {res_f}")