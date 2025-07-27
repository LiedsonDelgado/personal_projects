def addElemToList(p_n):
    f_list = []
    for i in range(p_n):
        f_value = int(input("Insira um valor: "))
        f_list.append(f_value)
        print(">Valor adicionado com sucesso!")
    return f_list

def greaterValue(p_list):
    greater = p_list[0]

    for i in range(len(p_list)): #len(p_list) retorna o tamanho da lista
        greater = p_list[0]
        if greater < p_list[i]:
            greater = p_list[i]
    return greater

def smallerValue(p_list):
    smaller = p_list[0]

    for i in range(len(p_list)):
        if smaller > p_list[i]:
            smaller = p_list[i]
    return smaller

n = int(input("Quantos elementos a lista ira conter: "))
list = addElemToList(n)
g = greaterValue(list)
s = smallerValue(list)

print(f"Maior valor e o {g}")
print(f"Menor valor e o {s}")