menu = {1:{"Descricao":"cafe e bolo de arroz","Preco":1.3},
        2:{"Decricao":"Dois cafes e meia torrada","Preco":2.2},
        3:{"Decricao":"Meia de leite e tosta com manteiga","Preco":3.0},
        4:{"Decricao":"Galao com tosta com manteiga","Preco":3.5}}

print("--MENU DA CAFETERIA--")
for i in menu:
    print(f"{i}-Menu {i}: {menu[i]}")
print("0-Sair\n")

exe = True

while exe:
    opc = int(input("-Escolha um opcao: "))
    match opc:
        case 0:
            print(">Encerrando...")
            exe = False

        case 1:
            preco = menu[1]["Preco"]
            quant = int(input("-Quantidade a encomendar: "))
            total = preco*quant
            print(f">O total a pagar sera de {total} €")

        case 2:
            preco = menu[2]["Preco"]
            quant = int(input("-Quantidade a encomendar: "))
            total = preco*quant
            print(f">O total a pagar sera de {total} €")

        case 3:
            preco = menu[3]["Preco"]
            quant = int(input("-Quantidade a encomendar: "))
            total = preco*quant
            print(f">O total a pagar sera de {total} €")

        case 4:
            preco = menu[4]["Preco"]
            quant = int(input("-Quantidade a encomendar: "))
            total = preco*quant
            print(f">O total a pagar sera de {total} €")

        case _:
            print(">Opcao invalida, tente novamente!")
