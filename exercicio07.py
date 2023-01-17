ordem = int(input("Qual a ordem da matriz: "))
linha = ordem
coluna = ordem

mat: [[int]] = [[0 for x in range(coluna)] for x in range(linha)]

for i in range (0, linha):
    for j in range (0, coluna):
        mat [i][j] = int(input(f"Elemento [{i}, {j}]: "))

vet_diagonal : [int] = [0 for x in range (ordem)]
for i in range (0, linha):
    for j in range (0, coluna):
      if (i == j):  
        vet_diagonal[i] = mat[i][j]

print("Diagonal Principal: ")
for i in range(0, ordem):
    print(f"{vet_diagonal[i]}", end=" ")

qunatidade_negativa = 0
for i in range (0, linha):
    for j in range (0, coluna):
        if mat[i][j] < 0:
            qunatidade_negativa = qunatidade_negativa + 1
print(" ")
print(f"Quantidade de Negativos: {qunatidade_negativa}")

