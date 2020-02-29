import javax.swing.*;

public class Grisaille {

	public static void main(String[] args) {

		JFrame fenetre = new JFrame();
		fenetre.setSize(400, 400);
    	fenetre.setLocation(100, 100);
    	fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    	JPanel fond = new JPanel();

    	Gris gris  = new Gris(150);
    	fond.setBackground(gris);

    	fenetre.add(fond);
    	fenetre.setVisible(true);
	}
}