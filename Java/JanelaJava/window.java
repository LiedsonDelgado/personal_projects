import java.awt.Color;
import javax.swing.JFrame;

public class window{
    public static void main(String[] arg){
        int i;

        for(i = 0;i < 4;i++){

    try{
        Thread.sleep(500); //Tread.sleep(####...) <== Miliseconds
            JFrame window = new JFrame();
                window.setSize(500,500); //(width,height);
                window.getContentPane().setBackground(new Color(0,200,0)); //new Color(#RED,#GREE,#BLUE) <== RGB
                window.setVisible(true);
                window.setTitle("JAVA WINDOW");

            }catch(InterruptedException e){
                System.out.println("End of the Sleep!");
            }    
        }
    }
}