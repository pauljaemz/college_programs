import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class KeyEvents extends Applet implements KeyListener
{
    String key="";
    String event="";
    String action="";
    public void init()
    {
        addKeyListener(this);
        requestFocus();
    }
    public void paint(Graphics g)
    {
        g.setFont(new Font("Arial",Font.BOLD,18));
        if(key!="")
          g.drawString("Key ".concat(key),100,50);
        g.setFont(new Font("Arial",Font.ITALIC,18));
        g.drawString(event,100,75);
        g.drawString(action,100,100);
        action="";
    }
    public void keyTyped(KeyEvent ke)
    {
        key=Character.toString(ke.getKeyChar());
        event="keyTyped event triggered.";
        repaint();
    }
    public void keyReleased(KeyEvent ke)
    {
        event="keyReleased event triggered.";
        if(ke.isActionKey())
          action="isActionKey() is true.";
        repaint();
    }
    public void keyPressed(KeyEvent ke)
    {
        key=ke.getKeyText(ke.getKeyCode());
        event="keyPressed event triggered.";
        if(ke.isActionKey())
          action="isActionKey() is true.";
        repaint();
    }
}