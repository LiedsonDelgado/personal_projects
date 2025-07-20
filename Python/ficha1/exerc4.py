# exerc4

n = int(input("Introduza um numero: "))
soma = int(0)
cont = int(1)

while cont <= n:
    soma += cont
    cont +=1

print("A soma de 1 ate %d e %d\n"%(n,soma))