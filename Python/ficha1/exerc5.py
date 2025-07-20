# exerc5

numfinal = ""

while True:
    digito = int(input("Introduza um digito: "))

    if digito == -1:
        print("Encerrando...")
        break

    numfinal += str(digito)
    print(">O numero final formado foi %s\n"%numfinal)