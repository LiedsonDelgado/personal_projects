import numpy as np

def calcula_media_linha(matriz_2d):
    for i in range(len(matriz_2d)):
        soma_linha = 0
        media_linha = 0
        for j in range(len(matriz_2d[i])):
            soma_linha += matriz_2d[i][j]
            media_linha = soma_linha/len(matriz_2d[i])
        print(f"Media da linha {i}: {media_linha}")

m = np.array([[1,3,8],[4,3,2],[6,1,5],[9,0,1]])
calcula_media_linha(m)