public class Fidelisation{

	public static void main(String[] args) {

		Carte carte01 = new Carte(3001);
		CarteGlouton carte02 = new CarteGlouton(3002);

		System.out.println(carte01.toString());
		System.out.println(carte02.toString());

		System.out.println("Nombre actuel de Credit "+ carte01.voir());
		System.out.println("Nombre actuel de Credit "+ carte02.voir());

		carte01.crediter();
		carte02.crediter();

		System.out.println("\n--------------Crediter------------");
		System.out.println(carte01.toString());
		System.out.println(carte02.toString());

		carte01.vider();
		carte02.vider();

		System.out.println("\n--------------vider------------");
		System.out.println(carte01.toString());
		System.out.println(carte02.toString());
	}

}