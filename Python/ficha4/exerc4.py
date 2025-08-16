def conta_vogais(file_name):
    file = open(f"E:/Personal Projects/Python/ficha4/exerc4-files/{file_name}","r")
    file_content = str(file.read())

    cont_a = 0
    cont_e = 0
    cont_i = 0
    cont_o = 0
    cont_u = 0

    for i in file_content:
        if i == "a" or i == "A":
            cont_a += 1
        if i == "e" or i == "E":
            cont_e += 1
        if i == "i" or i == "I":
            cont_i += 1
        if i == "o" or i == "O":
            cont_o += 1
        if i == "u" or i == "U":
            cont_u += 1

    vogais_contadas = {"a":cont_a,"e":cont_e,"i":cont_i,"o":cont_o,"u":cont_u}

    return vogais_contadas

res = conta_vogais("ficheiro1.txt")

print(f"Output: {res}")