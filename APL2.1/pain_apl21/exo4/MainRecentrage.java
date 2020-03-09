import javax.swing.*;
import java.awt.*;

public class MainRecentrage{

	public static void main(String[] args) {
		
		JFrame fenetre = new JFrame();
	    fenetre.setSize(400, 400);
	    fenetre.setLocation(100, 100);
	    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	    Recentrage rond = new Recentrage();

	    fenetre.add(rond);
	    fenetre.setVisible(true);

	}
}