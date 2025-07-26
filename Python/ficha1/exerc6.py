#exerc 6

mat = int(input("Nota Matematica: "))
prog = int(input("Nota Programacao: "))
fisica = int(input("Nota em Fisica: "))

if (mat >= 16 and prog >= 16 and fisica >= 10) or (prog >= 16 and fisica >= 16 and mat >= 10) or (mat >= 16 and fisica >= 16 and prog >= 10):
    print("Aprovado com distincao!\n")
elif mat >= 10 and prog >= 10 and fisica >= 10:
    print("Aprovado!\n")
else:
    print("Reprovado!\n")