nome = input("Digite o seu nome: ")
idade = int(input("Digite sua idade: "))

def escreverDados(p_nome,p_idade):
    print(f"Nome: {p_nome}")
    print(f"Idade: {p_idade} anos")

    if idade > 18:
        print(f"Vc eh maior de idade a {idade-18} ano(s)")
    else:
        print("Vc eh menor de idade ainda")

escreverDados(nome,idade)
