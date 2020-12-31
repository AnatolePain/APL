import java.util.*;
import java.io.*;
import java.awt.*;

public class Lecteur {

	private Map<String,Color> dictionaire = new HashMap<>();

	public Lecteur(){

		int[] rgb = new int[3];
		String ligne;

		try {

  			BufferedReader lecture = new BufferedReader(new FileReader("rgb.txt"));

	  		try {

	   			while((ligne = lecture.readLine()) != null) {

	     		  String[] s = ligne.trim().split("\\s+", 4);

	     		  for(int i = 0; i < s.length-1 ; i++ ){
	   			  	rgb[i] = Integer.parseInt(s[i]);
	     		  }

	     		  Color color = new Color(rgb[0],rgb[1],rgb[2]);
	   			  dictionaire.put(s[s.length-1], color);	

	    		}
	    		
 			} catch(IOException e) {
   	 			System.err.println("Erreur de lecture dans rgb.txt !");
  			}
  			
  			try {
    			lecture.close();
  			} catch(IOException e) {
    			System.err.println("Erreur de fermeture de rgb.txt !");
  			}

		} catch(FileNotFoundException e) {
  			System.err.println("Erreur d'ouverture de rgb.txt !");
		}

	}


	public Map<String,Color> getDictionnaire(){
		return this.dictionaire;
	}



}