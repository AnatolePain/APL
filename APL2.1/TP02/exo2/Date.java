public class Date {
  // attribut
  private int jj;
  private int mm;
  private int aaaa;

  // autre méthode
  public String toStringUp() {

    int typeMois = -1;
    int maxMois = -1;

    //Verifie quel tupe de mois l'on est: 29 , 30 ou 31
    if(this.mm == 2){
      typeMois = 3;

    }else if(this.mm <= 7){
      typeMois = this.mm%2;

    }else if(this.mm > 7){
      this.mm -= 7;
      typeMois = this.mm%2;
      this.mm += 7;
    }else{
      System.out.println("erreur 01");
    }

    switch (typeMois) {
      case 1:
        maxMois = 31;
        break;
      case 0:
        maxMois = 30;
        break;
      case 3:
        maxMois = 29;
        break;
      default:
        System.out.println("erreur dans le switch case : class Date");
        break;
    }

    if(this.jj == maxMois){
      this.mm++;
      this.jj = 1;
    }else{
      this.jj++;    //journée normale
    }

    if(this.mm == 13){
      this.aaaa++;
      this.jj = 1;
      this.mm = 1;
    }

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