import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner sc = new Scanner(System.in);

        int n, soma;
        soma = 0;
        double media;

        System.out.print("Quantos numeros voce vai digitar? ");
        n = sc.nextInt();
        int[] vet = new int[n];

        for (int i = 0; i < n; i++)
        {
            System.out.print("Digite um numero: ");
            vet[i] = sc.nextInt();
        }

        System.out.print("VALORES: ");
        for (int i = 0; i < n; i++)
        {
            System.out.print(vet[i] + " ");
        }

        for (int i = 0; i < n; i++)
        {
            soma = soma + vet[i];
        }
        System.out.println("SOMA: " + soma);

        media = soma / n;
        System.out.println("MEDIA; " + media);

        sc.close();
    }
}
