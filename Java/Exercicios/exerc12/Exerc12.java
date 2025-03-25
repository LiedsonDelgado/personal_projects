package exerc12;

import java.util.Scanner;

public class Exerc12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

            int idades[] = new int[20];
            int soma = 0;
            float media = 0.00f;
                int i;

                System.out.println("<<CALCULE A SOMA DE 20 IDADES E SUA MEDIA>>");
                    for(i=0;i<20;i++){
                        if(i<20){
                            System.out.print(+(i+1) +"º-SUA IDADE: ");
                                idades[i] = sc.nextInt();
                                    soma += idades[i];
                        }else{
                                sc.close();
                        }
        }
            media = (float) soma/20;
                System.out.println(">>A SOMA DE TODAS AS 20 idades = " +soma);
                System.out.println(">>A MEDIA DE TODAS AS 20 idades = " +media);
    }
}
