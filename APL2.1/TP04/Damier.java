import javax.swing.*;
import java.awt.*;

public class Damier{

    public static void main(String[] args) {

        int a;
        int totaleCases;
        int taille = args.length;
        System.out.println("taille = " + taille);


        if(args.length == 1){
            a = Integer.parseInt(args[0]);
            totaleCases = a*a;
            System.out.println("TEST 01");
            System.out.println("argument 1 = " + a + " totalesCases = " + totaleCases);
        }else{
            System.out.println("erreur nombre d'argument");
        }

        JFrame fenetre = new JFrame();
        fenetre.setSize(500, 300);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        //int a = Integer.parseInt("15");
        GridLayout gestionnaire = new GridLayout(a,a);
        fenetre.setLayout(gestionnaire);

        Color blanc = new Color(255,255,255);
        Color bleu  = new Color(0,0,255);
        
        /*for(int i = 0; i < totaleCases; i++){

            fenetre.add(new JButton(""+i));
        }*/



    }
}