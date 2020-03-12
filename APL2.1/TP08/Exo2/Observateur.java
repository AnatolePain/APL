import javax.swing.*;
import java.awt.*;

public class Observateur extends JFrame implements WindowListener {

	Graphics secondPinceau = pinceau.create();

	public Observateur(Graphics g){
		secondPinceau = g;
	}


	@Override
	public void WindowsActivated(WindowEvent evenement){
		secondPinceau.fillOval(50, 50, 150, 150);
	}

	@Override
	public void Deactivated(WindowEvent evenement){
		secondPinceau.fillOval(50, 50, 150, 150);
	}

}