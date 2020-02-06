import javax.swing.*;
import java.awt.*;
 
public class Choix {

	public static void main(String[] args) {
		
	// un objet pour servir de fenetre
    JFrame fenetre = new JFrame();

    // on configure la fenetre
    fenetre.setSize(500, 300);
    //fenetre.setLocation(0, 0);
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

   	JRadioButton bouton01 = new JRadioButton("Gryffondor");
    JRadioButton bouton02 = new JRadioButton("Serdaigle");
    JRadioButton bouton03 = new JRadioButton("Serpentard");

    ButtonGroup poudlardChoix = new ButtonGroup();
    poudlardChoix.add(bouton01);
    poudlardChoix.add(bouton02);
   	poudlardChoix.add(bouton03);

    // on ajoute le composant dans la fenetre, au milieu
    fenetre.add(bouton01, BorderLayout.NORTH);
    fenetre.add(bouton02, BorderLayout.CENTER);
    fenetre.add(bouton03, BorderLayout.SOUTH);

    // et on montre le resultat

    fenetre.setVisible(true);

    }


}