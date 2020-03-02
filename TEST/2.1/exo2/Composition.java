import javax.swing.*;
import java.awt.*;

public class Composition{

	public static void main(String[] args) {

		if(args.length < 1){
            System.out.println("Usage : java Composition <Strings>");
           	System.exit(1); 
        }
		
		JFrame fenetre = new JFrame();
	    fenetre.setSize(400, 400);
	    fenetre.setLocation(100, 100);
	    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	    FlowLayout layoutFenetre = new FlowLayout(FlowLayout.CENTER);
	    fenetre.setLayout(layoutFenetre);

	    JPanel panneaux = new JPanel();
	    fenetre.add(panneaux);

	    GridLayout layoutPanneaux = new GridLayout(args.length,0);
	    panneaux.setLayout(layoutPanneaux);

	    for(int i = 0; i < args.length; i++){
	    	JLabel etiquette = new JLabel(args[i]);
	    	etiquette.setHorizontalAlignment(JLabel.CENTER);
	    	panneaux.add(etiquette);
	    }

	    fenetre.setVisible(true);
	}
}