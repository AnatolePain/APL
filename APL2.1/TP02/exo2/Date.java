public class Date {
  // attribut
  private int jj;
  private int mm;
  private int aaaa;

  // autre méthode
  public String toStringUp() {

  	int mois29 = 29;
  	int mois30 = 30;
  	int mois31 = 31;

  	if(mm < )




  	return String.format("%02d-%02d-%04d", this.jj,this.mm,this.aaaa);
  }

  public String toString() {
    return String.format("%02d-%02d-%04d", this.jj,this.mm,this.aaaa);
  }

  public Date(int jour, int mois, int annee) {
    this.jj = jour;
  	this.mm = mois;
  	this.aaaa = annee;
  }

  public Date() {
    this.jj = 0;
  	this.mm = 0;
  	this.aaaa = 0;
  }


}