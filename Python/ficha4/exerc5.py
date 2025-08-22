def junta_ficheiro_ordenados(fich1,fich2,fich3):
    f1 = open(f"E:/Personal Projects/Python/ficha4/exerc5-files/{fich1}","r")
    f2 = open(f"E:/Personal Projects/Python/ficha4/exerc5-files/{fich2}", "r")
    f3 = open(f"E:/Personal Projects/Python/ficha4/exerc5-files/{fich3}", "w")

    # para o ficheiro 1
    f1_list = []

    # recolhe todos os numeros do ficheiro 1 pela ordem que estao e os adiciona numa lista
    f1_ln1 = int(f1.readline())
    f1_list.append(f1_ln1)
    f1_ln2 = int(f1.readline())
    f1_list.append(f1_ln2)
    f1_ln3 = int(f1.readline())
    f1_list.append(f1_ln3)
    f1_ln4 = float(f1.readline())
    f1_list.append(f1_ln4)
    f1_ln5 = int(f1.readline())
    f1_list.append(f1_ln5)
    f1_ln6 = int(f1.readline())
    f1_list.append(f1_ln6)
    f1_ln7 = int(f1.readline())
    f1_list.append(f1_ln7)
    f1.close()

    print(f">Valores lidos do ficheiro 1: {f1_list}")

    # para o ficheiro 2
    f2_list = []

    # recolhe todos os numeros do ficheiro 2 pela ordem que estao e os adiciona numa lista
    f2_ln1 = int(f2.readline())
    f2_list.append(f2_ln1)
    f2_ln2 = int(f2.readline())
    f2_list.append(f2_ln2)
    f2_ln3 = int(f2.readline())
    f2_list.append(f2_ln3)
    f2_ln4 = float(f2.readline())
    f2_list.append(f2_ln4)
    f2.close()

    print(f">Valores lidos do ficheiro 2: {f2_list}")

    # para o ficheiro 3
    f3_list = []

    for i in f1_list:
        f3_list.append(i)

    for i in f2_list:
        f3_list.append(i)

    # algoritmo de ordenacao(bubblesort simples)
    n = len(f3_list)
    for i in range(n-1):
        for j in range(n-i-1):
            if f3_list[j]>f3_list[j+1]:
                f3_list[j],f3_list[j+1] = f3_list[j+1],f3_list[j]

    print(f">Valores lidos(ficheiro 1 e ficheiro 2) ordenados: {f3_list}")

    for i in range(len(f3_list)):
        f3.write(f"{f3_list[i]}\n")

    f3.close()
    print("=>O ficheiro 3 foi atualizado!")


junta_ficheiro_ordenados("fich1.txt","fich2.txt","fich3.txt")
