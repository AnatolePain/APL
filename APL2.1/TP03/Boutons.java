import javax.swing.*;
import java.awt.*;
 
public class Boutons {
  public static void main(String[] args) {

    // un objet pour servir de fenetre
    JFrame fenetre = new JFrame();

    // on configure la fenetre
    fenetre.setSize(500, 300);
    //fenetre.setLocation(0, 0);
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    // un composant pour afficher du texte
    JLabel etiquette = new JLabel("Bonjour !");

    // on configure l'etiquette
    etiquette.setHorizontalAlignment(JLabel.RIGHT);
    etiquette.setVerticalAlignment(JLabel.TOP);

    // un composant boutons
    JButton bouton01 = new JButton(" bouton 1");
    JButton bouton02 = new JButton(" bouton 2");
    JButton bouton03 = new JButton(" bouton 3");
    JButton bouton04 = new JButton(" bouton 4");
    JButton bouton05 = new JButton(" bouton 5");

    // on configure le boutons
      bouton01.setSize(40,40);
      bouton01.setLocation(0, 0);

      bouton02.setSize(40,40);
      bouton02.setLocation(50, 0);

      bouton03.setSize(40,40);
      bouton03.setLocation(100, 0);

      bouton04.setSize(40,40);
      bouton04.setLocation(150, 0);

      bouton05.setSize(40,40);
      bouton05.setLocation(100, 150);

    // on ajoute le composant dans la fenetre, au milieu
    fenetre.add(etiquette, BorderLayout.CENTER);
    fenetre.add(bouton01, BorderLayout.CENTER);
    fenetre.add(bouton02, BorderLayout.CENTER);
    fenetre.add(bouton03, BorderLayout.CENTER);
    fenetre.add(bouton04, BorderLayout.CENTER);
    fenetre.add(bouton05, BorderLayout.CENTER);
    

    // et on montre le resultat
    fenetre.setVisible(true);

  }
}