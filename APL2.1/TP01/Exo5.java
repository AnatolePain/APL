public class Exo5 {

	public static void main(String[] args) {

		for(int i =0; i < Integer.parseInt(args[0]); i++){

			for (int j = 0; j < Integer.parseInt(args[0]);j++) {
				System.out.print("+-");
			}

			System.out.print("+");
			System.out.println();




			for (int j = 0; j < Integer.parseInt(args[0]);j++) {
				System.out.print("| ");
			}

			System.out.print("|");
			System.out.println();

		}
		for (int j = 0; j < Integer.parseInt(args[0]);j++) {
				System.out.print("+-");
			}

			System.out.print("+");
			System.out.println();
	}
}