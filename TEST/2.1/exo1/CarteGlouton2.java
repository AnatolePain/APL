public class CarteGlouton2 extends Carte{


	public CarteGlouton2(int n){
		super(n);
		for(int i = 0; i < 10; i++){
			this.crediter();
		}
	}

	@Override
	public void vider(){
		/*nothing*/
	}


	public static void main(String[] args) {
		
		CarteGlouton2 carte = new CarteGlouton2(1551);

		System.out.println(carte.toString());

		carte.crediter();

		System.out.println(carte.toString());

		carte.vider();

		System.out.println(carte.toString());
	}

}