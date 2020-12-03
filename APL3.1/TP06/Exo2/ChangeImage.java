import java.lang.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class ChangeImage implements ListSelectionListener  {

	//Galerie gal;
	// public ChangeImage(Galerie g){
	// 	this.gal = g;
	// }

	@Override
	public void valueChanged(ListSelectionEvent e){
		System.out.println(e.getFirstIndex());
	}
}