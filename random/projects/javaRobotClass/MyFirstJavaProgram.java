import java.io.IOException;
import java.awt.Robot;
import java.awt.event.KeyEvent;

public class MyFirstJavaProgram {

   public static void main(String []args) {
        
       try {
            Process P = Runtime.getRuntime().exec(new String[] {"open", "/Applications/Old School RuneScape.app/"});
       } catch (IOException e) {
            e.printStackTrace();
       }
   }  
}
