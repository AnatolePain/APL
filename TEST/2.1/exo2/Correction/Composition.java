import javax.swing.*;
import java.awt.*;

public class Composition{

	public static void main(String[] args) {

		if(args.length < 1){
            System.out.println("Usage : java Composition <Strings>");
           	System.exit(1); 
        }

        int nbr = args.length;

	    JFrame fenetre = new JFrame();
	    fenetre.setSize(100, 40*nbr);
	    fenetre.setLocation(0, 0);
	    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	    FlowLayout gestionnaire2 = new FlowLayout(FlowLayout.CENTER);
		fenetre.setLayout(gestionnaire2);

        JPanel panneaux = new JPanel();
        GridLayout gestionnaire = new GridLayout(nbr,1);
        panneaux.setLayout(gestionnaire);

		for(int i = 0; i < nbr; i++){
			JLabel etiquette = new JLabel(args[i]);
		    etiquette.setHorizontalAlignment(JLabel.CENTER);
		    panneaux.add(etiquette);
  		}
		
		fenetre.add(panneaux, BorderLayout.CENTER);

		fenetre.setVisible(true);
	}

}