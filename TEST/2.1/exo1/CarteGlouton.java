public class CarteGlouton{

	private final int CREDITMAX = 10;
	private int numCarte;
	private int creditActuel = CREDITMAX;
	private int creditTotale = 0;

	public CarteGlouton(int n){
		this.numCarte = n;
	}

	public String toString(){
		return "Num: " + this.numCarte
				+" ,Credit actuel: " + this.creditActuel
				+" ,Credit totale: " + this.creditTotale;
	}

	public int voir(){
		return this.creditActuel;
	}

	public void crediter(){
			this.creditTotale++;
	}

	public void vider(){
			this.creditActuel = CREDITMAX;
	}

}