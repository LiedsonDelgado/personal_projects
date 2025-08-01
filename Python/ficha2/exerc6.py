def leitura(p_n):
    f_lista = [0]*p_n
    for i in range(p_n):
        valor = float(input(f"Elementos {i + 1} da Lista: "))
        f_lista.append(valor)

    f_lista.sort(reverse=False)
    return f_lista

def escrita (p_lista,p_cont):

    for i in range(len(p_lista)):
        if p_cont[i]!=0:
            print(f">Elemento {p_lista[i]} ocorre {p_cont[i]} vez(es) na lista!")

    return

def cont(p_lista,p_elem):
    f_cont = [0]*len(p_lista)
    cont = int(0)

    for i in range(len(p_lista)):
        if p_lista[i] == p_elem:
            cont += 1
            f_cont[i] = cont

    return f_cont

n = int(input("Quantos elementos a lista tera: "))
lista = leitura(n)
elem = float(input("Qual elemento deseja contar sua ocorrencia na lista: "))
cont = cont(lista,elem)
escrita(lista,cont)
