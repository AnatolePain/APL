import javax.swing.*;
import java.awt.*;

public class Damier{

    public static void main(String[] args) {

        int a = 0;
        int totaleCases = 0;
        int taille = args.length;
        System.out.println("taille = " + taille);
        JPanel element = null;


        if(args.length == 1){
            a = Integer.parseInt(args[0]);
            totaleCases = a*a;
            System.out.println("argument1 = " + a + " totalesCases = " + totaleCases);
        }else{
            System.out.println("erreur nombre d'argument");
        }

        JFrame fenetre = new JFrame();
        fenetre.setSize(1000, 800);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        GridLayout gestionnaire = new GridLayout(a,a);
        fenetre.setLayout(gestionnaire);

        Color blanc = new Color(255,255,255);
        Color bleu  = new Color(0,0,255);

        
        for(int i = 0; i < a; i++){

            for(int j = 0; j < a; j++){


                element = new JPanel();
                if((j+i)%2 == 1){
                    element.setBackground(bleu);
                }else{
                    element.setBackground(blanc);
                }
                fenetre.add(element);
            }  
        }


        fenetre.setVisible(true);

    }
}