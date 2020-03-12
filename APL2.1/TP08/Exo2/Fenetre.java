import javax.swing.*;
import java.awt.*;

public class Fenetre extends JFrame {


	public Fenetre(){

	    this.setSize(500, 500);
	    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	    Dessin dessin01 = new Dessin();
	    this.add(dessin01);
	    this.setVisible(true);

	}

}