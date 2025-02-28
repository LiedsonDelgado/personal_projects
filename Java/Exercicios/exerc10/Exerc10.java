package exerc10;

import java.util.Scanner;

public class Exerc10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

            int n; //Numero digitado pelo Usuario, de quantas vezes o texto digito sera mostrado
            String name; //Nome digitado pelo Usuario (incluindo espaco em branco ate a quebra de linho [<-ENTER])
            int i; //contador do ciclo (for(i=0;CONDICAO;POS-CONDICAO))
                
                System.out.print("-DIGITE O SEU NOME: ");
                    name = sc.nextLine();
                System.out.print("-QUANTAS VEZES VC DESEJA QUE SEU NOME SEJA ESCRITO NA TELA: ");
                    n = sc.nextInt();

                    for(i=0;i<n;i++){
                        System.out.println(+(i+1) +" -> " +name);
                            sc.close();
        }
    }
}
