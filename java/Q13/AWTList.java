import java.awt.*; 
import java.awt.event.*;
public class AWTList  
{  
     AWTList(){  
        Frame f= new Frame();
        List l1=new List(5);  
        l1.setBounds(150,100,100,100);  
        l1.add("Java");  
        l1.add("Python");  
        l1.add("Haskell");  
        l1.add("Dart");  
        l1.add("Ruby");
        l1.add("Rust");  
        l1.add("Golang");
        l1.add("PHP");
        f.add(l1); 
        TextField t1=new TextField();  
        t1.setBounds(80,50,200,25); 
        f.add(t1);
        Button b1=new Button("Add");
        b1.setBounds(285,48,50,28);
        b1.addActionListener(new ActionListener(){  
          public void actionPerformed(ActionEvent e){
                  String listitem=t1.getText();   
                  l1.add(listitem);  
              }  
          });  
        f.add(b1);
        Button b2=new Button("Remove Selected");
        b2.setBounds(80,220,110,30);
        b2.addActionListener(new ActionListener(){  
          public void actionPerformed(ActionEvent e){
                  int selected=l1.getSelectedIndex();
                  if(selected>=0)
                    l1.remove(selected);
              }  
          });  
        f.add(b2);
        Button b3=new Button("Remove All");
        b3.setBounds(210,220,110,30);
        b3.addActionListener(new ActionListener(){  
          public void actionPerformed(ActionEvent e){
                  l1.removeAll();  
              }  
          });  
        f.add(b3);
        f.setSize(400,300);  
        f.setLayout(null);  
        f.setVisible(true);  
     }  
    public static void main(String args[])  
    {  
       new AWTList();  
    }  
}