import java.util.Scanner;
public class java_exercicio02 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

    int idade1, idade2;
    double media;
    String nome1, nome2;

    System.out.println("Dados da primeira pessoa: ");
    System.out.print("Nome: ");
    nome1 = sc.nextLine();
    System.out.print("Idade: ");
    idade1 = sc.nextInt();

    System.out.println("Dados da segunda pessoa: ");
    System.out.print("Nome: ");
    sc.nextLine();
    nome2 = sc.nextLine();
    System.out.print("Idade: ");
    idade2 = sc.nextInt();

    media = (double)(idade1 + idade2) / 2;

    System.out.println("A idade media entre " + nome1 + " e " + nome2 + " é de " + media + " anos");
    
    sc.close();
    }
}
