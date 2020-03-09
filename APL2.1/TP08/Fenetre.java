import javax.swing.*;
import java.awt.*;

public class Fenetre extends JFrame {


	public Fenetre(){

	    JFrame fenetre = new JFrame();
	    fenetre.setSize(500, 300);
	    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	    FlowLayout layout1 = new FlowLayout(Flolayout.CENTER);
	    fenetre.setLayout(layout1);

	    JButton bCyan = new JButton("Cyan");
	    fenetre.add(bCyan);
	    JButton bMagenta = new JButton("Magneta");
	    fenetre.add(bMagenta);
	    JButton bJaune = new JButton("Jaune");
	    fenetre.add(bJaune);

	    JPannel pan = new JPannel();
	    fenetre.add(pan,BorderLayout.CENTER);

	    Modele stockageDonne = new Modele();						//A INVERSER FAUX
	    ChangeColor controller = new ChangeColor(stockageDonne);

	    bCyan.addActionListener(controller);
		bMagenta.addActionListener(controller);
		bJaunne.addActionListener(controller);

		Color color = new Color(,192,192);
		pan.setBackground();





	}

}