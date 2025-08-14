def junta_ordenados(tupla1,tupla2):
    tuplaFinal = ()
    lista = []

    for i in range(len(tupla1)):
        lista.append(tupla1[i])

    for i in range(len(tupla2)):
        lista.append(tupla2[i])

    lista.sort()

    for i in range(len(lista)):
        tuplaFinal += (lista[i],)

    return tuplaFinal

a = junta_ordenados((2,34,200,210),(1,23))
print(a)