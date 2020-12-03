import java.awt.event.*;
import java.awt.Polygon;
import java.util.*;
import java.awt.Color;

public class Souris implements MouseListener{

	private Composant formes;
	private boolean seRegroupent = false;

	public Souris(Composant cp){
		this.formes = cp;
	}

	public void mouseClicked(MouseEvent e){ // un bouton cliqué

		List<Polygon> parallelogrammesL = this.formes.getListPolygon();
		List<Color> couleurL = this.formes.getListCouleur();

		Iterator<Polygon> i1 = parallelogrammesL.iterator();
		Iterator<Color> i2 = couleurL.iterator();

		while(i1.hasNext() && i2.hasNext()){

			Polygon parallelogramme = i1.next();
			Color couleur = i2.next();

            if(seRegroupent){
            	parallelogramme.translate(-(this.formes.getLargeur()+ this.formes.getMargeX()), 0);
            }

            if(parallelogramme.contains(e.getPoint()) && !seRegroupent ){
            	System.out.println("Luminance : " + (21*couleur.getRed() + 72*couleur.getGreen() + 7*couleur.getBlue()) );
				i1.remove();
				i2.remove();
				this.seRegroupent = true;
            }

        }

        if(seRegroupent){
			this.seRegroupent = false;
       		this.formes.repaint();
       	}




	}     
	public void mouseEntered(MouseEvent evenement){}          // debut du survol
	public void mouseExited(MouseEvent evenement){}           // fin du survol
	public void mousePressed(MouseEvent evenement){}          // un bouton appuyé
	public void mouseReleased(MouseEvent evenement){}         // un bouton relâché

}