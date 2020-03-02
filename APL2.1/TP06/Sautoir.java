import javax.swing.JComponent;
import java.awt.*;
 
public class Sautoir extends JComponent {

  @Override
  protected void paintComponent(Graphics pinceau) {
    // obligatoire : on crée un nouveau pinceau pour pouvoir le modifier plus tard
    Graphics secondPinceau = pinceau.create();
    // obligatoire : si le composant n'est pas censé être transparent
    if (this.isOpaque()) {
      // obligatoire : on repeint toute la surface avec la couleur de fond
      secondPinceau.setColor(this.getBackground());
      secondPinceau.fillRect(0, 0, this.getWidth(), this.getHeight());
    }

    secondPinceau.setColor(Color.CYAN);
    int[] tabX = new int[4];
    int[] tabY = new int[4];
    int l = (int)(this.getWidth()/5);
    int h = (int)(this.getHeight()/5);

    for(int i = 0; i < 5; i++){

      for(int j = 0; j < 5; j++){

          for(int k = 0; k < 4; k++){

              if(k == 0 || k == 2){
                tabX[k] = j*l;
              }else{
                tabX[k] = (j*l)+l;
              }

              if(k == 0 || k == 1){
                tabY[k] = i*h;
              }else{
                tabY[k] = (i*h)+h;
              }
          }
        secondPinceau.fillPolygon(tabX,tabY,4);
      }
    }

  }
}