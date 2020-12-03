import javax.swing.*;
import java.awt.*;
 
public class Main {
    
  public static void main(String[] args) {

    Composant formes = new Composant();

    JFrame fenetre = new JFrame();
    // (formes.getLargeur()+formes.getMargeX())*nbP
    fenetre.setSize(800, formes.getHauteur() + (formes.getMargeY()*2) + 50);
    fenetre.setResizable(false);
    fenetre.setLocation(100, 100);
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    Souris listener = new Souris(formes);
    fenetre.add(formes);
    fenetre.addMouseListener(listener);

    fenetre.setVisible(true);
  }

}