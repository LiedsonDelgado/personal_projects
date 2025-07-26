#exerc 1

def addValoresLista(n):
    i = int(0)
    lista = list([])
    while i<n:
        valor = int(input("Valor a inserir: "))
        lista.append(valor)
        print(">Valor inserido com sucesso!")
        i+=1
    return lista

def encontrarValor(p_lista,p_valor):
    i = int(0)
    tam = len(p_lista)
    while i<tam:
        if p_lista[i] == p_valor:
            print(">O valor foi encontrado!\n")
            return True
        i+=1
    print(">O valor nao foi encontrado!\n")
    return False

n = int(input("Quantos elementos a lista ira conter: "))
lista = addValoresLista(n)
valor = int(input("Procure por um valor na lista: "))
encontrarValor(lista,valor)