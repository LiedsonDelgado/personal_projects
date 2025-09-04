import numpy as np

v = np.random.randn(20)

maior = v[0]
menor = v[0]

for i in range(len(v)):
    if v[i]>v[0]:
        maior = v[i]
    else:
        menor = v[i]

print(maior)
print(menor)