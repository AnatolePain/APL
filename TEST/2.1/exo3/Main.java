import javax.swing.*;
import java.awt.*;

public class Main{

	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();
	    fenetre.setSize(400, 400);
	    fenetre.setLocation(100, 100);
	    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	    Container c = fenetre.getContentPane();
	    c.setBackground(Color.GRAY);

	    Progression progres = new Progression();
	    progres.setProgress(75);
	    fenetre.add(progres);
	    fenetre.setVisible(true);

	}
}