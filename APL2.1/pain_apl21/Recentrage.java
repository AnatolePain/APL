import javax.swing.*;
import java.awt.*;

public class Recentrage extends JComponent {

	@Override
  	protected void paintComponent(Graphics pinceau) {

	    Graphics secondPinceau = pinceau.create();
	    if (this.isOpaque()) {
	      secondPinceau.setColor(this.getBackground());
	      secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
	    }

	    Color violet = new Color(150,0,150);
	    secondPinceau.setColor(violet);
	    secondPinceau.fillOval(0,0,this.getWidth(),this.getHeight());
  	}
}