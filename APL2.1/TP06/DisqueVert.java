import javax.swing.JComponent;
import java.awt.*;
 
public class DisqueVert extends JComponent {
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
    // maintenant on dessine ce que l'on veut
    //secondPinceau.setColor(this.getForeground());
    Color vert = new Color(0,255,0);
    secondPinceau.setColor(vert);
    secondPinceau.fillOval(100,100,25,25);
    //secondPinceau.drawString("Bonjour !", 10, 20);
  }
}