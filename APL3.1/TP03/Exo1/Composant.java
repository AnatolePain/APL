import javax.swing.JComponent;
import java.awt.Polygon;
import java.awt.Graphics;
import java.awt.Color;
import java.util.*;
 
public class Composant extends JComponent {

  private int l;  //largeur 
  private int mX; //marge x

  private int mY; //marge y
  private int h;  //hauteur

  private int i;  //inclinaison

  private int nbParallel;

  private int luminance;

  private List<Polygon> parallelogrammesL = new LinkedList<Polygon>();
  private List<Color> couleurL = new LinkedList<Color>();

 
  public Composant() {

    super();

    //---TAILLE-----

    this.l = 50; //largeur 
    this.mX = 20; //marge x
    this.mY = 50; //marge y
    this.h = 120; //hauteur
    this.i = 75;  //inclinaison
    this.nbParallel = 10; //nb parallélogrammes

    //----------------

    for(int i = 0 ; i < this.nbParallel ; i++){

      int coef = i*(this.l+this.mX);//a partir d'où je commence à déssiner
      int[] xPointsNew = {this.mX+coef, (this.mX + this.i)+coef, (this.mX + this.i + this.l)+coef , (this.mX + this.l)+coef};
      int[] yPointsNew = {this.mY + this.h,this.mY ,this.mY ,this.mY + this.h};


      Random rand = new Random();
      int r = rand.nextInt(250);
      int v = rand.nextInt(250);
      int b = rand.nextInt(250);


      this.couleurL.add(new Color(r,v,b));
      this.parallelogrammesL.add(new Polygon(xPointsNew, yPointsNew, 4));
    }

  }

  public int getMargeY(){
    return this.mY;
  }

  public int getHauteur(){
    return this.h;
  }

  public int getLargeur(){
    return this.l;
  }

  public int getMargeX(){
    return this.mX;
  }

  public List<Polygon> getListPolygon(){
    return this.parallelogrammesL;
  }

  public List<Color> getListCouleur(){
    return this.couleurL;
  }

  @Override
  protected void paintComponent(Graphics pinceau) {

    Graphics secondPinceau = pinceau.create();
    if (this.isOpaque()) {
      secondPinceau.setColor(this.getBackground());
      secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
    }

    Iterator<Polygon> i1 = parallelogrammesL.iterator();
    Iterator<Color> i2 = couleurL.iterator();

    while(i1.hasNext() && i2.hasNext()){
      secondPinceau.setColor(i2.next());
      secondPinceau.fillPolygon(i1.next());
    }

  }
}