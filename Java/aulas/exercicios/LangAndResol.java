package aulas.exercicios;

import java.awt.Dimension;
import java.awt.Toolkit;
import java.util.Locale;

public class LangAndResol {
    public static void main(String[] args) {
        Dimension resolution = Toolkit.getDefaultToolkit().getScreenSize();
            int width = resolution.width;
            int height = resolution.height;

         String language = Locale.getDefault().getDisplayLanguage();

                System.out.println("A sua resolucao de tela e: " +width +"x" +height);
                System.out.println("O idioma do seu sistema e: " +language);


    }
}
