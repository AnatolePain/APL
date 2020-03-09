import javax.swing.*;
import java.awt.*;

public class Repartition{

	public static void main(String[] args) {

		if(args.length != 1){
            System.out.println("Usage : java Composition <int>");
           	System.exit(1); 
        }
	

		JFrame fenetre = new JFrame();
	    fenetre.setSize(200, 200);
	    fenetre.setLocation(100, 100);
	    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


	    JPanel panneauxGauche = new JPanel();
	    JPanel panneauxDroit = new JPanel();

		GridLayout grille = new GridLayout(Integer.parseInt(args[0]),1);

		/*FlowLayout gestionnaireG = new FlowLayout(FlowLayout.LEFT);
		FlowLayout gestionnaireD = new FlowLayout(FlowLayout.RIGHT);*/

		panneauxGauche.setLayout(grille);
		panneauxDroit.setLayout(grille);

		for(int i = 0; i < args.length; i++){
			panneauxDroit.add(new JButton("X"));
			panneauxGauche.add(new JButton("X"));
		}

		fenetre.add(panneauxDroit, BorderLayout.EAST);
		fenetre.add(panneauxGauche, BorderLayout.WEST);

		fenetre.setVisible(true);
	}

}