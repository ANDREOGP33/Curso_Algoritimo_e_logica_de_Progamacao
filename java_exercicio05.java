import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner sc = new Scanner(System.in);

        int x, y, impar;

        System.out.println("Digite dois numeros: ");
        x = sc.nextInt();
        y = sc.nextInt();

        impar = 0;
        if (x < y)
        {
            for (int i = x; i < y; i++)
            {
                if (i % 2 > 0 )
                {
                    impar = impar + i;
                }
            }
        }
        else if (y < x)
        {
            for (int j = y; j < y; j++)
            {
                if (j % 2 > 0 )
                {
                    impar = impar + j;
                }
            }
        }
        
        System.out.println("Soma impares: " + impar) ;

        sc.close();
    }
}
