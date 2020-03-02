import javax.swing.*;
import java.awt.*;

public class Progression extends JComponent {

	private int x = 15;
    private int y;
    private int lRectGris;
    private int h = 50;

 	private int tauxProgression = 0;
 	private int lRectCyan;

   	public Progression(){
    	super();
    }

    public String toString(){
    	return "Taux de progression = " + tauxProgression;
    }

    public void setProgress(int p){
    	tauxProgression = p;
    }

	@Override
  	protected void paintComponent(Graphics pinceau) {

	    Graphics secondPinceau = pinceau.create();
	    if (this.isOpaque()) {
	      secondPinceau.setColor(this.getBackground());
	      secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
	    }

   		y = this.getHeight() - ((this.getHeight()/2) + 25);
    	lRectGris = this.getWidth() - 30;
    	lRectCyan = (int)(lRectGris*((double)tauxProgression/100.0));

	    Color grisClaire = new Color(211,211,211);
	    secondPinceau.setColor(grisClaire);
	    secondPinceau.fillRect(x,y,lRectGris,h);

	    secondPinceau.setColor(Color.CYAN);
	    secondPinceau.fillRect(x,y,lRectCyan,h);
  	}
}