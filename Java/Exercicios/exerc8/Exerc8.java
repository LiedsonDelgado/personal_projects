package exerc8;

public class Exerc8 {
    public static void main(String[] args) {
        int soma = 0;
        int n = 0;
            int i;
                for(i=0;i<15;i++){
                    n += 1;
                    soma += n;
                        System.out.println(+(i+1) +"-Soma = " +soma);
        }
            System.out.println(">A Soma de todos os termos de 1 a 15 = " +soma);
    }
}
