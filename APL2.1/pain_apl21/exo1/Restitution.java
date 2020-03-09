import java.util.*;

public class Restitution{

	public static void main(String[] args) {

		if(args.length < 3){
            System.out.println("Usage : java Composition <Strings> <Strings> <Strings>");
           	System.exit(1); 
        }

        /*String[args.length] tabString = null;
 
        for(int i = 0; i < args.length; i++){
        	tabString[i] = args[i];
        }*/

        Arrays ar = new Arrays();
       	ar.copyOf(args,3);
       	System.out.println(ar.toString());
	}

}