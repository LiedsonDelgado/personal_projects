package exerc9;

import java.util.Scanner;

public class Exerc9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            String name;
                int i;

                    System.out.print("DIGITE O SEU NOME: ");
                        name = sc.nextLine();

                            for(i=0;i<10;i++){
                                System.out.println(+(i+1) +"-NOME: " +name);
                                    sc.close();
                            }

    }
}
