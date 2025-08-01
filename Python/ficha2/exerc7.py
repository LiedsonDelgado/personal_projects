def addElemLista(p_n):
    f_lista = []

    for i in range(p_n):
        valor = int(input("Introduza o elemento: "))
        f_lista.append(valor)
        print(">Valor adicionado com sucesso!")

    return f_lista

def removeRepetidos(p_lista):
    newList = []

    for i in p_lista:
        if i not in newList:
            newList.append(i)

    return newList

n = int(input("Quantaos elementos a lista tera: "))
list = addElemLista(n)
finalList = removeRepetidos(list)

print(f">Lista Final: {finalList}")