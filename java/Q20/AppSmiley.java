import java.applet.Applet;
import java.awt.*;
 
public class AppSmiley extends Applet {
 
 public void paint(Graphics g) {
  
  g.setColor(Color.yellow);
  g.fillOval(20,20,150,150);   
  g.setColor(Color.black);
  g.fillOval(50,60,25,25); 
  g.fillOval(120,60,25,25);
  g.drawArc(55,95,78,50,0,-180);
 }
}