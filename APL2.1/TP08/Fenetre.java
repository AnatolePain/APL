import javax.swing.*;
import java.awt.*;

public class Fenetre extends JFrame {


	public Fenetre(){

	    this.setSize(500, 300);
	    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JPanel panneaux = new JPanel();
		this.add(panneaux,BorderLayout.CENTER);

	    FlowLayout layout1 = new FlowLayout(FlowLayout.CENTER);
	    panneaux.setLayout(layout1);

	    JButton bCyan = new JButton("Cyan");
	    panneaux.add(bCyan);
	    JButton bMagenta = new JButton("Magenta");
	    panneaux.add(bMagenta);
	    JButton bJaune = new JButton("Jaune");
	    panneaux.add(bJaune);

	    Modele stockageDonne = new Modele();						//A INVERSER: FAUX
	    ChangeColor observateur = new ChangeColor(stockageDonne,panneaux);

	    bCyan.addActionListener(observateur);
		bMagenta.addActionListener(observateur);
		bJaune.addActionListener(observateur);

	}

}