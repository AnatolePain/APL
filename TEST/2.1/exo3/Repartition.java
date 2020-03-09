public class Repartition{

	public static void main(String[] args) {

		if(args.length =! 1){
            System.out.println("Usage : java Composition <int>");
           	System.exit(1); 
        }
	

		JFrame fenetre = new JFrame();
	    fenetre.setSize(200, 200);
	    fenetre.setLocation(100, 100);
	    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);


	    JPanel panneauxGauche = new JPanel();
	    JPanel panneauxDroit = new JPanel();
		GridLayout gestionnaire = new GridLayout(args[0],1);
		panneauxGauche.setLayout(gestionnaire);
		panneauxDroit.setLayout(gestionnaire);
	
		fenetre.add(panneauxDroit, BorderLayout.WEST);
		fenetre.add(panneauxDroit, BorderLayout.EAST);

		fenetre.setVisible(true);
	}

}