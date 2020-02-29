import javax.swing.JComponent;
import java.awt.*;
 
public class Composant extends JComponent {

  private Image pingouin;
  public Composant() {
    super();
    pingouin = Toolkit.getDefaultToolkit().getImage("cercles.png");
  }

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

    secondPinceau.drawImage(pingouin, 10, 20, this);
    // maintenant on dessine ce que l'on veut

    Color bleu = new Color(0,0,255);
    secondPinceau.setColor(bleu);
    secondPinceau.drawRect(100,100,50,50);

    Color vert = new Color(0,255,0);
    secondPinceau.setColor(vert);
    secondPinceau.fillOval(100,100,25,25);

    Color violet = new Color(255,0,255);
    secondPinceau.setFont(new Font("ghsfsyhdfsdh", Font.BOLD, 24));
    secondPinceau.setColor(violet);
    secondPinceau.drawString(">o<", 250, 100);
    //secondPinceau.drawString("Bonjour !", 10, 20);

    secondPinceau.drawImage(pingouin, 10, 20, this);

  }
}