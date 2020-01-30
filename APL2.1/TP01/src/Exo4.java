import java.util.Arrays;

public class Exo4 {

	public static void main(String[] args) {
		int[] tab = new int[args.length];
		int[] tab2 = new int[args.length];
		
		for(int i = 0; i < args.length ; i++){
			int n = Integer.parseInt(args[i]);
			tab[i] = n;
		}
		
		for(int i = 0; i < args.length ; i++){
			System.out.print(tab[i] + " ");
		}
		
		Arrays.sort(tab);
		System.out.println("");
		
		for(int i = 0; i < args.length ; i++){
			System.out.print(tab[i]+ " ");
		}

	}

}
