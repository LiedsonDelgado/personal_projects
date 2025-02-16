package exerc4;

import java.util.Scanner;

public class Exerc4 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

            int cod[] = new int[2];
            int peca[] = new int[2];
            int quant_peca[] = new int[2];
            float valor[] = new float[2];

            int porcentagem;
            int i;

            float calc_porc = 0.00f;
            float valorTotal = 0.00f;

                System.out.print("-PORCENTAGEM(%) IPI: ");
                porcentagem = sc.nextInt();
                    calc_porc = (porcentagem/100f)+1;

            for (i=0;i<2;i++) {            
                System.out.print("-CODIGO DA PECA " +(i+1) +" :");
                    cod[i] = sc.nextInt();

                System.out.print("-VALOR DA PECA " +(i+1) +" :");
                    valor[i] = sc.nextFloat();

                System.out.print("-QUANTIDADE DA PECA " +(i+1) +" :");
                    quant_peca[i] = sc.nextInt();
                        valorTotal += (valor[i] * quant_peca[i]) * (calc_porc);

                        System.out.print("\n");
                            System.out.println("------------------------------------");
            }
            sc.close();
                System.out.println(">>O VALOR TOTAL A SER PAGO: " +valorTotal +"CVE");
    }
    
}