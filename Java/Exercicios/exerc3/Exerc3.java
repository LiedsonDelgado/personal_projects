package exerc3;

import java.util.Scanner;

public class Exerc3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            float salario = 0.00f;
            float salarioIGNCV = 0.00f;
                float taxaIGNCV = 0.01f;

            System.out.println("CALCULE O SEU SALARIO MENOS A TAXA IGNCV(1%)"); //-1% aplicado a Taxa IGNCV(IMPOSTOS aplicados pelo GOVERNO CABO VERDIANO)
                System.out.print("SEU SALARIO: ");
                    salario = sc.nextInt();
                        salarioIGNCV = salario - (salario*taxaIGNCV);
                            System.out.println("O SEU SALARIO (-1%) SERA DE: " +salarioIGNCV +"CVE");
                    sc.close();
    }
}