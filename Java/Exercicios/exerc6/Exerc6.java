package exerc6;

import java.util.Scanner;

public class Exerc6 {
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
                int numero;
                    int sucessor;
                    int antecessor;

                        System.out.print("-INTRODUZA UM NUMERO: ");
                            numero = sc.nextInt();

                                sucessor = (numero+1);
                                antecessor = (numero-1);

                                    System.out.println(">O SUCESSOR DE "+numero +" EH " +sucessor);
                                    System.out.println(">O ANTECESSOR DE "+numero +" EH " +antecessor);
                                        System.out.println(">>OU SEJA "+antecessor +"<" +numero +"<" +sucessor);
            sc.close();
    }
}
