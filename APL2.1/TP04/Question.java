import javax.swing.*;
import java.awt.*;

public class Question{

	public static void main(String[] args) {



		JFrame fenetre = new JFrame();
    	fenetre.setSize(500, 300);
    	fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    	GridLayout gestionnaire = new GridLayout(2,1);
        fenetre.setLayout(gestionnaire);

        JPanel element = new JPanel();
        



	   	fenetre.setVisible(true);

	}
}