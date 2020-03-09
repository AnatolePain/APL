import java.awt.*;

public class Modele {

	private String couleur;

	@Override
	public String toString(){
		return couleur;
	}

	public Color couleurCyan(){
		couleur = "CYAN";
		return Color.CYAN;
	}

	public Color couleurMagenta(){
		couleur = "CYAN";
		return Color.MAGENTA;
	}

	public Color couleurJaune(){
		couleur = "YELLOW";
		return Color.YELLOW;
	}

}