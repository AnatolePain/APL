import javax.swing.*;
import java.awt.*;
 
public class Saisie {
  public static void main(String[] args) {

    // un objet pour servir de fenetre
    JFrame fenetre = new JFrame();

    // on configure la fenetre
    fenetre.setSize(500, 300);
    //fenetre.setLocation(0, 0);
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    JTextArea zoneDeTexte = new JTextArea("Sirocco. En vous inspirant de l'exemple donné, écrivez un programme qui ouvre une fenêtre de 500 pixels de large, 300 pixels de haut, collée dans le coin supérieur gauche de l'écran. Cette fenêtre devra contenir le texte «Sirocco» dans son coin inférieur droit. ");
    JTextField champDeTexte = new JTextField(" Écrivez un programme qui ouvre une fenêtre contenant cinq boutons. Testez ce programme et observez ce qui se passe quand on redimensionne la fenêtre. Choisissez ensuite un texte très long (20 caractères environ) pour l'un des boutons. Comment la disposition en est-elle affectée ? Faites le test avec chaque bouton successivement.");
    Color vert = new Color(0,255,0);
    Color Noir = new Color(0,0,0);

    zoneDeTexte.setForeground(vert);
    zoneDeTexte.setBackground(Noir);

    // on ajoute le composant dans la fenetre, au milieu
    fenetre.add(zoneDeTexte, BorderLayout.CENTER);
    fenetre.add(champDeTexte, BorderLayout.SOUTH);

    // et on montre le resultat
    fenetre.setVisible(true);

  }
}