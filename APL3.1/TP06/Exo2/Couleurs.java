import javax.swing.*;
import java.awt.*;
import java.util.*; 	

public class Couleurs extends JFrame {


	private int numImage;
	private JLabel image;
	private ChangeImage observateur;
	private  int nbImage = 5;



	public Couleurs(){

		//on configure la fenetre
	    this.setSize(600, 1050);
	    this.setLocation(400, 300);
	    this.setTitle("Couleurs");
	    this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		GridLayout gestionnaire = new GridLayout(0, 2);
		this.setLayout(gestionnaire);

		JButton test = new JButton("test");
 		Lecteur l = new Lecteur();
 		//Map<String,int[]> rgbDictionnaire = l.getDictionnaire();
 		Set<String> idKey = l.getDictionnaire().keySet();
 		Object[] idString = idKey.toArray();
		JList<Object> menu = new JList<>(idString);
		menu.setFont(new Font("", Font.PLAIN, 20));
		menu.addListSelectionListener(new ChangeImage());

 		this.add(menu);
 		this.add(test);

	}


	public void modifImage(int getX){


		// this.remove(image);
	 //    this.droiteOuGauche(getX);
	 //    String nomImage = ""+numImage+".jpg";
	 //    System.out.println("numImage = "+ nomImage);
	 //    image = new JLabel(new ImageIcon(nomImage));
	 //    image.addMouseListener(observateur);
	 //    image.setHorizontalAlignment(JLabel.CENTER);
	 //    this.add(image, BorderLayout.CENTER); 
	 //    image.revalidate();

	}


	public void droiteOuGauche(int x){

		// if(x < 250){
		// 	numImage--;
		// }else if(x > 250){
		// 	numImage++;
		// }

		// if(numImage == nbImage){
	 //    	numImage = 1;
	 //    }else if (numImage == 0){
	 //    	numImage = 4;
	 //    }

	}


}