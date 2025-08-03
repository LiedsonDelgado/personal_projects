#exerc 2
def createTupleTable(tam):
    funcionarios = ()
    num = 100
    cat = 65

    for i in range(tam):
        nome = str(input("Nome do funcionario: "))
        funcionarios += ((num,nome,chr(cat)),)
        num += 10
        cat += 1

    return funcionarios

n = int(input("Quantos funcionarios a tabela tera: "))
table = createTupleTable(n)

#exerc 3
print("\nNUMERO | NOME | CATEGORIA")

for num,nome,cat in table:
    print(f"{num}   {nome}   {cat}")