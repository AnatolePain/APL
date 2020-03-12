import java.lang.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class ChangeForme implements ActionListener{

	private JPanel pan;

	public ChangeForme(Modele m, JPanel j){
		this.pan = j;
	}

	@Override
	public void actionPerformed(ActionEvent e){

		String clickBouton = e.getActionCommand();

		if(clickBouton == "Cyan"){
			this.pan.setBackground(Color.CYAN);
		}else if(clickBouton == "Magenta"){
			this.pan.setBackground(Color.MAGENTA);
		}else if(clickBouton == "Jaune"){
			this.pan.setBackground(Color.YELLOW);
		}else{
			System.out.println("Erreur class ChangeColor, methode ActionPerformed");
			System.exit(1);
		}
	}
}