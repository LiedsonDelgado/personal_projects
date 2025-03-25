package exerc14;

import java.util.Scanner;

public class Exerc14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            int idades[] = new int[20];
                int i;

                    for(i=0;i<20;i++){
                        if(i<20){
                        System.out.print("-SUA IDADE: ");
                            idades[i] = sc.nextInt();

                            if(idades[i] >= 18){
                                System.out.println("VOCE EH MAIOR DE IDADE POR TER " +idades[i] +" ANO(S)");
                            }else{
                                System.out.println("VOCE EH MENOR DE IDADE POR TER " +idades[i] +" ANO(S)");
                            }
                    }else{
                        sc.close();
                    }
                }
    }
}
