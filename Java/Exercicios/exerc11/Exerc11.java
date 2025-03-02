package exerc11;

import java.util.Scanner;

public class Exerc11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            int numbers[] = new int[10];
            int soma = 0;
                int i;

        System.out.println("<<INTRODUZA 10 NUMEROS>>");

            for(i=0;i<10;i++){
                
                if(i<10){
                    System.out.print("-INTRODUZA O " +(i+1) +"º NUMERO: ");
                        numbers[i] = sc.nextInt();

                    System.out.println("->O USUARIO INTRODUZIU O NUMERO: "+numbers[i]);
                        soma += numbers[i];
                }else{
                    sc.close();
                }
        }
            System.out.println(">>A SOMA DOS 10 NUMEROS EH: " +soma);
    }
}
