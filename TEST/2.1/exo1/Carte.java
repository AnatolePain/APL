public class Carte{

	private int numCarte;
	private int creditActuel = 0;
	private int creditTotale = 0;
	private final int CREDITMAX = 10;

	public Carte(int n){
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
		if(creditActuel < CREDITMAX){
			this.creditActuel++;
			this.creditTotale++;
		}
	}

	public void vider(){
		if(this.creditActuel == CREDITMAX){
			this.creditActuel = 0;
		}
	}

}