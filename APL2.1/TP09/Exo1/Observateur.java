import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Observateur implements MouseWheelListener {

	private Modele modele01 = new Modele();
	private Dessin des;
	private int nbRotation;



	public Observateur(Dessin g){
		this.des = g;
	}


	@Override
	public void mouseWheelMoved(MouseWheelEvent evenement){
		nbRotation = evenement.getWheelRotation();
		des.changeCouleur(true);
	}


}