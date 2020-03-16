import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Dessin extends JComponent {


	@Override
  	protected void paintComponent(Graphics pinceau) {

	    Graphics secondPinceau = pinceau.create();
	    if (this.isOpaque()) {
	      secondPinceau.setColor(this.getBackground());
	      secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
	    }

	    int lcarré = (int)((double)this.getWidth()/10.0); //a modifier (Romain)
	    System.out.println("lcarré = " + lcarré);

	    secondPinceau.setColor(Color.LIGHT_GRAY);
	   	for(int i = 0; i < 10; i++){
	   		secondPinceau.fillOval(i*lcarré,0,lcarré, lcarré);
	   	}

	   	secondPinceau.setColor(Color.YELLOW);
	   	for(int i = 0; i < modele01.returnVaLongeur(nbRotation); i++){
	   		secondPinceau.fillOval(i*lcarré,0,lcarré, lcarré);
	   	}

  	}

  	public void changeCouleur(boolean b){
  		boolean bool = b;
  		if(bool = b){
  			secondPinceau.setColor(Color.YELLOW);
  		}else{
  			secondPinceau.setColor(Color.LIGHT_GRAY);
  		}
  	}

}