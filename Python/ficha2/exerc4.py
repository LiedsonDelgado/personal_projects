def addElemLista(p_n):
    f_list = []
    for i in range(p_n):
        valor = int(input("Introduza o valor na lista: "))
        f_list.append(valor)
        print(">Valor adicionado com sucesso!")

    return f_list

def parte(p_list,p_elem):
    f_finalList = []
    f_smallerList = []
    f_greaterList = []

    for i in range(len(p_list)):
        if p_list[i] < p_elem:
            f_smallerList.append(p_list[i])
            print(f">Valor maior que {p_elem} adicionado!")

        if p_list[i] >= p_elem:
            f_greaterList.append(p_list[i])
            print(f">Valor menor que {p_elem} adicionado!")

    f_finalList.append(f_smallerList)
    f_finalList.append(f_greaterList)

    return f_finalList

n = int(input("Quantos elementos a lista tera: "))
list = addElemLista(n)
elem = int(input("Um valor para dividir a lista: "))
finalResult = parte(list,elem)

print(f">Valores menores que {elem}: {finalResult[0]} ")
print(f">Valores maiores que {elem}: {finalResult[1]} ")