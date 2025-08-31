import numpy as np

a = np.array([[2,5,6],[5,6,7]])
print(f"Matriz A:\n{a}\n")

b = np.array([[2,3],[4,5],[2,5]])
print(f"Matriz B:\n{b}\n")

c = a*b.T

print(f"Matriz AxB:\n{c}")