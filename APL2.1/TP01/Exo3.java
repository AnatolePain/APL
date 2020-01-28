
public class Exo3 {

	public static void main(String[] args) {
		int total = 0;
		for(int i = 0; i < args.length ; i++){
			int n = Integer.parseInt(args[i]);
			total += n;
		}
		System.out.println("Somme : " + total);

	}

}
