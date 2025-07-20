# exerc2

a = int(input("Introduza um numero: "))
b = int(input("Introduza outro numero: "))

if a > b:
    print("-%d e maior que %d: "%(a,b))
elif a < b:
    print("-%d e menor que %d: "%(a,b))
else:
    print("-Ambos %d e %d sao iguais: "%(a,b))