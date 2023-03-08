import java.util.Scanner;

public class java_exercicio04 {
    public static void main(String[] args) throws Exception 
    {
        Scanner sc = new Scanner(System.in);

        int x, y;
        x = 1;
        y = 2;

        System.out.println("Digite dois numeros: ");

            x = sc.nextInt();
            y = sc.nextInt();

            if (x > y)
            {
                System.out.println("DECRESCENTE!");
            }
            else if (y > x)
            {
                System.out.println("CRESCENTE!");
            }

        while (x != y)
        {
            System.out.println("Digite outros dois numeros: ");
            x = sc.nextInt();
            y = sc.nextInt();
            if (x > y)
            {
                System.out.println("DECRESCENTE!");
            }
            else if (y > x)
            {
                System.out.println("CRESCENTE!");
            }
        }    

        sc.close();
    }
}
