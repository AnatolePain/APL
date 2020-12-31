import java.lang.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class Souris implements ListSelectionListener  {

	Couleurs couleur;

	public Souris(Couleurs c){
		this.couleur = c;
	}

	@Override
	public void valueChanged(ListSelectionEvent e){
		this.couleur.changeCouleur(e.getFirstIndex());
	}
}