import javax.swing.*;
import java.awt.*;
 
public class Choix {

	public static void main(String[] args) {
		
        JFrame fenetre = new JFrame();
        fenetre.setSize(500, 300);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        GridLayout gestionnaire = new GridLayout(4, 1);
        fenetre.setLayout(gestionnaire);


        JRadioButton bouton01 = new JRadioButton("Gryffondor");
        JRadioButton bouton02 = new JRadioButton("Serdaigle");
        JRadioButton bouton03 = new JRadioButton("Serpentard");
        JRadioButton bouton04 = new JRadioButton("Poufsouffle");

        ButtonGroup poudlardChoix = new ButtonGroup();
        poudlardChoix.add(bouton01);
        poudlardChoix.add(bouton02);
        poudlardChoix.add(bouton03);
        poudlardChoix.add(bouton04);

        fenetre.add(bouton01);
        fenetre.add(bouton02);
        fenetre.add(bouton03);
        fenetre.add(bouton04);

        fenetre.setVisible(true);

    }


}