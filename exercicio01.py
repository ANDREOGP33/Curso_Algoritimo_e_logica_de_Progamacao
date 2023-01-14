base = float(input("Base do retangulo: "))
altura = float(input("Altura do retangulo: "))

area = (base * altura)
perimetro = (base * 2) + (altura * 2)
diagonal = ( base ** 2 + altura **2 ) ** (1/2)

print("\n----------------\n")
print(f"Area:  {area}")
print(f"Perimetro: {perimetro}")
print(f"diagonal: {diagonal:.6}")