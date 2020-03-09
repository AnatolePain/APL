import java.lang.*;

public class Serie{

	private char lettreDepart;
	private int longueur;

	public Serie(char ld,int l){
		this.lettreDepart = ld;
		this.longueur = l;
	}

	public String toString(){
		for(int i = 0; i < longueur ; i++){
			return ""+valueOf(charAt(this.lettreDepart + (char)i));
		}
	}

	public int length(){
		return longueur;
	}

	/*public String next(){
		return longueur;
	}*/




}