n1 = int(input("Digite o primeiro numero: "))
n2 = int(input("Digite o segundo numero: "))

soma = 0
if n1 > n2:
 for m in range(n2, n1):
    if m % 2 != 0:
        soma = soma + m
  
else:
 for n in range(n1, n2):
    if n % 2 != 0:  
           soma = soma + n

print(f"Soma dos impares: {soma}")