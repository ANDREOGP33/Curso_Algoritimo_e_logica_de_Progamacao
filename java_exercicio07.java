import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, m, negativo;
        negativo = 0;

        System.out.print("Qual a ordem da matriz: ");
        n = sc.nextInt();
        m = n;
        
        int[][] mat = new int[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j ++)
            {
                System.out.print("Elemento["+i+", "+j+"]: ");
                mat[i][j] = sc.nextInt();
                if (mat[i][j] < 0)
                {
                    negativo = negativo + 1;
                }
            }
        }

        System.out.println("Diagonal principal: ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j ++)
            {
                if (i == j)
                {
                    System.out.print(mat[i][j] + " ");
                }
            }
        }

        System.out.println(" ");
        System.out.println("Quantidade de negativos");
        System.out.print(negativo);

        sc.close();
    }
}
