//importacao de pacotes
package exerc1;

//bibliotecas
import java.util.Scanner;

public class Exerc1{
    public static void main(String[] args) {
    //variaveis com valor absoluto
       int ano = 365;
       int mes = 30;

    //variaveis para Input
       Scanner sc = new Scanner(System.in);
        int idade;
        int meses;
        int dias;
    //variavel que calcula o dias totais
        int dias_totais = 0;

            System.out.print("\n");
            System.out.println("INTRODUZA IDADE,MESES E DIAS E CALCULE O TOTAL DE DIAS QUE VC TEM");
                System.out.print("-IDADE:");
                    idade = sc.nextInt();
                System.out.print("-MESES:");
                    meses = sc.nextInt();
                System.out.print("-DIA(S):");
                    dias = sc.nextInt();

                    //calculo dos dias totais ex:(3anos),(2meses) e (15 dias) = 1170 dias
                        dias_totais = (idade*ano)+(meses*mes)+dias;

                        System.out.println("=>O TOTAL DE: " +idade+" ANOS" +","+meses+" MESES" +" e "+dias+" DIAS" +" = "+dias_totais+" DIAS TOTAIS");
    }
}