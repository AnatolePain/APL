import java.util.*;
import java.io.*;

public class Lecteur {

	private Map<String,int[]> dictionaire = new HashMap<>();

	public Lecteur(){

		int[] rgb = new int[3];
		String ligne;

		try {

  			BufferedReader lecture = new BufferedReader(
                           			new FileReader("rgb.txt"));

	  		try {
	   			while((ligne = lecture.readLine()) != null) {

	  			  System.out.println(" ======= ");
	     		  String[] s = ligne.trim().split("\\s+", 4);
	     		  for(int i = 0; i < s.length-1 ; i++ ){
	   			  	System.out.println(s[i].trim());
	   			  	rgb[i] = Integer.parseInt(s[i]);
	     		  }
	   			  	System.out.println(s[s.length-1].trim());
	   			  	dictionaire.put(s[s.length-1], rgb);
	   			  	
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


	public Map<String,int[]> getDictionnaire(){
		return this.dictionaire;
	}



}