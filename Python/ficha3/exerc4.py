def explode(p_num):
    lista = []
    tupla = ()

    if isinstance(p_num,float):
        error_msg = ">ValueError: explode: argumento não inteiro"
        return error_msg

    while p_num != 0:
        num = int(p_num % 10)
        p_num = int(p_num / 10)

        lista.append(num)

    lista.reverse()

    for i in range(len(lista)):
        tupla += (lista[i],)

    return tupla

a = explode(34500)
print(a)