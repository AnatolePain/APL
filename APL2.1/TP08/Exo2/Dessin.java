import javax.swing.*;
import java.awt.*;

public class Dessin extends JComponent {


	@Override
  	protected void paintComponent(Graphics pinceau) {

	    Graphics secondPinceau = pinceau.create();
	    if (this.isOpaque()) {
	      secondPinceau.setColor(this.getBackground());
	      secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
	    }

	    secondPinceau.setColor(Color.MAGENTA);
	    Observateur ob = new Observateur(secondPinceau);

  	}
}