public class Modele {


	private int valLongeur;
	private int nbRotation;

	public Modele(){
		valLongeur = 0;
	}

	public void longeur(int r){

		if(nbRotation > 10){
			valLongeur = 10;
		}else if(nbRotation < 0){
			valLongeur = 0;
		}else{
			valLongeur = nbRotation;
		}
	}

	public int returnVaLongeur(){
		return valLongeur;
	}

}