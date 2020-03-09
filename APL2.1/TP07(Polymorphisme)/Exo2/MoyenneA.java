import java.lang.*;

public class MoyenneA{

	float nbValeur;
	float totale;

	public void add(byte b){
		this.totale = this.totale + Float.parseFloat(b+"");
		this.nbValeur++;
	}

	public void add(short s){
		this.totale = this.totale + Float.parseFloat(s+"");
		this.nbValeur++;
	}

	public void add(int t){
		this.totale = this.totale + Float.parseFloat(t+"");
		this.nbValeur++;
	}

	public void add(long l){
		this.totale = this.totale + Float.parseFloat(l+"");
		this.nbValeur++;
	}

	public void add(float f){
		this.totale = this.totale + f;
		this.nbValeur++;
	}

	public void add(double b){
		this.totale = this.totale + Float.parseFloat(b+"");
		this.nbValeur++;
	}

	public float getAverage(){

		if( nbValeur != 0){
			return this.totale/this.nbValeur;
		}else{
			return 0;
		}
	}


}