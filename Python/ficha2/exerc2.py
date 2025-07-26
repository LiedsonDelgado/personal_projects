def addElementos(p_n):
    f_lista = []
    for i in range(p_n):
        f_elem = str(input("Introduza um caracter(Alfanumerico): "))
        f_lista.append(f_elem)
        print(">Valor adicionado com sucesso!")

    return f_lista

def posicaoElemento(p_lista,p_elem,tam):
    print("[",end="")
    for i in range(tam):
        if p_elem == p_lista[i]:
            print(f"{i},",end="")
    print("]")

n = int(input("Quantos elementos tera a lista: "))
lista = addElementos(n)
elem = str(input("Caracter a procurar: "))
posicaoElemento(lista,elem,n)