# exerc 7

soma = int(0)
n = int(input("Quantos numeros quer adicionar: "))
i = int(0)

# com ciclo while
while i<n:
    num = int(input("Insira o numero: "))
    soma += num
    i+=1

# com ciclo for
#for i in range(n):
#   num = int(input("Insira o numero: "))
#    soma += num

print(f"Resultado da soma: {soma}")