n = int(input("Quantos numeros voce vai digitar: "))
vet = [0 for x in range (n)]
m = n

for n in range(0, m):
    vet[n] = float(input("Digite um Valor: "))

soma = 0
print("valores Digitados:", end=" ")
for n in range(0, m):
    print(f" {vet[n]}", end=" ")
    soma = soma + vet[n]

print()
print(f"Soma dos Valores Digitados: {soma}")

media = soma / m
print(f"Soma dos Valoresa Gigitados: {media}")