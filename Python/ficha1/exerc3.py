# exerc3

a = int(input("Introduza um numero: "))
b = int(input("Introduza outro numero: "))
c = int(input("Introduza mais um numero: "))

if a > b and a > c:
    print("O maior numero e %d"%a)
elif b > a and b > c:
    print("O maior numero e %d" % b)
else:
    print("O maior numero e %d" % c)