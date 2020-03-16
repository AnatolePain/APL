import javax.swing.*;
import java.awt.*;

public class Fenetre extends JFrame {


	public Fenetre(){

	    this.setSize(600, 100);
	    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	    Container c = this.getContentPane();
	    c.setBackground(Color.GRAY);

	    Dessin dessin01 = new Dessin();
	    Observateur obs = new Observateur(dessin01);
	    this.add(dessin01);
	    this.setVisible(true);

	}

}