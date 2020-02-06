import javax.swing.*;
import java.awt.*;
 
public class Choix {

	public static void main(String[] args) {
		
        JFrame fenetre = new JFrame();
        fenetre.setSize(500, 300);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JRadioButton bouton01 = new JRadioButton("Gryffondor");
        JRadioButton bouton02 = new JRadioButton("Serdaigle");
        JRadioButton bouton03 = new JRadioButton("Serpentard");
        JRadioButton bouton04 = new JRadioButton("Poufsouffle");

        ButtonGroup poudlardChoix = new ButtonGroup();
        poudlardChoix.add(bouton01);
        poudlardChoix.add(bouton02);
        poudlardChoix.add(bouton03);
        poudlardChoix.add(bouton04);

        Dimension dimBouton= new Dimension(100, 70);

        dimBouton.setPreferredSize(bouton01);
        dimBouton.setPreferredSize(bouton02);
        dimBouton.setPreferredSize(bouton03);
        dimBouton.setPreferredSize(bouton04);

        fenetre.add(bouton01, BorderLayout.NORTH);
        fenetre.add(bouton02, BorderLayout.CENTER);
        fenetre.add(bouton03, BorderLayout.CENTER);
        fenetre.add(bouton04, BorderLayout.SOUTH);

        fenetre.setVisible(true);

    }


}