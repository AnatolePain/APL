import javax.swing.*;
import java.awt.*;
import java.util.*; 	

public class Couleurs extends JFrame {


	private Souris observateur;
	private ListModel<Object> index;
	private JPanel panneauCouleur;
	private Lecteur l;

	public Couleurs(){

	    this.setSize(600, 400);
	    this.setLocation(400, 300);
	    this.setTitle("Couleurs");
	    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		GridLayout gestionnaire = new GridLayout(0, 2);
		this.setLayout(gestionnaire);
		this.panneauCouleur = new JPanel();

		//Lecteur
 		this.l = new Lecteur();
 		Set<String> idKey = l.getDictionnaire().keySet();
 		Object[] idString = idKey.toArray();

 		//JList
		JList<Object> menu = new JList<>(idString);
		menu.setFont(new Font("", Font.PLAIN, 20));
		menu.addListSelectionListener(new Souris(this));
		this.index = menu.getModel();

		//ScrollPane
		JScrollPane barDeroulante = new JScrollPane(menu);
		barDeroulante.setVerticalScrollBar(new JScrollBar());

 		this.add(barDeroulante);
 		this.add(panneauCouleur);

	}


	public void changeCouleur(int num){
		Color rgb = l.getDictionnaire().get(this.index.getElementAt(num));
		this.panneauCouleur.setBackground(rgb);
	}


}