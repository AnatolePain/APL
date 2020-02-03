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

    // un composant boutons
    JButton bouton01 = new JButton(" bouton 1 bouton 1 bouton 1 bouton 1 bouton 1 bouton 1 bouton 1 bouton 1 bouton 1 bouton 1");
    JButton bouton02 = new JButton(" bouton 2");
    JButton bouton03 = new JButton(" bouton 3"
    );
    JButton bouton04 = new JButton(" bouton 4");
    JButton bouton05 = new JButton(" bouton 5  bouton 5 bouton 5 bouton 5 bouton 5 bouton 5 bouton 5 bouton 5 bouton 5 bouton 5 bouton 5 bouton 5");

    // on configure le boutons
    /*bouton05.setHorizontalAlignment(JButton.LEFT);
    bouton05.setVerticalAlignment(JButton.CENTER);*/

    // on ajoute le composant dans la fenetre, au milieu
    fenetre.add(bouton01, BorderLayout.NORTH);
    fenetre.add(bouton02, BorderLayout.SOUTH);
    fenetre.add(bouton03, BorderLayout.EAST);
    fenetre.add(bouton04, BorderLayout.WEST);
    fenetre.add(bouton05, BorderLayout.CENTER);

    // et on montre le resultat
    fenetre.setVisible(true);

  }
}