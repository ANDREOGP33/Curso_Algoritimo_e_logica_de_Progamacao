primeirov = float(input("Digite o primeiro valor: "))
segundov = float(input("Digite o segundo valor : "))
terceirov = float(input("Digite o tercerio valor: "))

if (primeirov < segundov) and (primeirov < terceirov):
   menor = primeirov
elif  (segundov < primeirov) and (segundov < terceirov):
    menor = segundov
else:
    menor = terceirov

print(f"Menor valor digitado é : {menor}")