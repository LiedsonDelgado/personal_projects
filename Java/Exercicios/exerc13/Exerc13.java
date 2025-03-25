package exerc13;

import java.util.Scanner;

public class Exerc13 {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

            String names[] = new String[5];
            int ages[] = new int[5];
                int i;
                int aux = 0; //talvez tentar criar um vetor com tamanho maior que o necessario
                             //tentar mover todos os elementos do vetor para direita

                    System.out.println("<<VEJA QUAL DOS USUARIOS EH O MAIS VELHO>>");     
                        for(i=0;i<5;i++){
                            if(i<5){
   
                                System.out.print("-SEU NOME: ");
                                    names[i] = sc.nextLine();

                                System.out.print("-SUA IDADE: ");
                                    ages[i] = sc.nextInt();
                                        sc.nextLine();

                                System.out.println("---------------------------------------------");

                                if(ages[i]<ages[aux]){
                    i = aux;
                    System.out.println("A " +(i-1) +"ª PESSOA MAIS VELHA EH " +names[i-1] +" COM " +ages[i-1] +" ANOS ");
                }
            }else{
                sc.close();
            }
        }
            for(i=4;i>0;i--){
                if(ages[i]<ages[-1]){
                    System.out.println("A " +(i-1) +"ª PESSOA MAIS VELHA EH " +names[i-1] +" COM " +ages[i-1] +" ANOS ");
                }else{
                    System.out.println("A " +i +"ª PESSOA MAIS VELHA EH " +names[i] +" COM " +ages[i] +" ANOS ");
                }
            }
    }
}
