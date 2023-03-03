import java.util.Scanner;

public class java_exercicio01 {

    public static void main(String[] args) throws Exception   
    {
       Scanner sc = new Scanner(System.in);

       double base, altura, area, perimetro, diagonal;
       
       System.out.print("Base do reangulo: ");
       base = sc.nextDouble();
       System.out.print("Altura do retangulo: ");
       altura = sc.nextDouble();

       perimetro = (base * 2) + (altura * 2);
       area = base * altura;
       diagonal = Math.sqrt(Math.pow(base,2) + Math.pow(altura,2));

       System.out.println("Area = " + String.format("%.4f", area ));
       System.out.println("Perimetro = " + String.format("%.4f", perimetro ));
       System.out.println("Diagonal = " + String.format("%.4f", diagonal ));


       sc.close();
    }
}
