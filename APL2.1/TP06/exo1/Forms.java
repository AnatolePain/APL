import javax.swing.*;
import java.awt.*;
 
public class Forms {
  public static void main(String[] args) {

    JFrame fenetre = new JFrame();
    fenetre.setSize(400, 400);
    fenetre.setLocation(100, 100);
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


    //Bonjour bjrComposant = new Bonjour();
    //BordBleu rect = new BordBleu();
    //DisqueVert disqueVert1 = new DisqueVert();
    Composant formes = new Composant();

    fenetre.add(formes);


    fenetre.setVisible(true);
  }
}