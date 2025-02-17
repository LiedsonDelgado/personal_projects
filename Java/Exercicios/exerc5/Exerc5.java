package exerc5;

import java.util.Scanner;

public class Exerc5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

            float salario = 0.00f; //valor do salario recebido
                float salario_min = 0.00f; //valor do salario minimo
                    float n_sal_min; //N salarios minimos
            
                    System.out.print("-VALOR SALARIO: ");
                        salario = sc.nextFloat();

                    System.out.print("-VALOR SALARIO MINIMO: ");
                        salario_min = sc.nextFloat();

                            n_sal_min = (int) (salario / salario_min);
                                System.out.println(">O USUARIO RECEBE: " +n_sal_min +" SALARIOS MINIMOS");

        sc.close();
    }
}
