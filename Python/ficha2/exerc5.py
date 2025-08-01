def elemento_matriz(p_matriz,linha,coluna):
    if linha<0 or linha>=len(p_matriz):
        print(f">Indice invalido: linha {linha}")
        return None
    elif coluna<0 or coluna>=len(p_matriz[linha]):
        print(f">Indice invalido: coluna {coluna}")
        return None
    else:
        print(f">Valor encontrado na matriz foi: {p_matriz[linha][coluna]}")

    return p_matriz[linha][coluna]

matriz = [[1,2,3],[4,5,6]]
m = elemento_matriz(matriz,4,1)