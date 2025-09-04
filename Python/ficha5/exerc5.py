import numpy as np

m =  np.array([[1,3,8],[4,3,2],[6,1,5],[9,0,1]])

for i in range(len(m)):
    soma_lin = 0
    for j in range(len(m[i])):
        soma_lin += m[i][j]
    if soma_lin > 10:
        print(f"LINHAS: {m[i]}")

mTransp = m.T
for i in range(len(mTransp)):
    soma_col = 0
    for j in range(len(mTransp[i])):
        soma_col += mTransp[i][j]
    if soma_col > 10:
        print(f"COLUNAS: {mTransp[i]}")