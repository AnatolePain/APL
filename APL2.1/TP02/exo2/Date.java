public class Date {
  // attribut
  private int jj;
  private int mm;
  private int aaaa;

  // autre méthode
  public Date lendemains() {


    Date dateUp = new Date(this.jj, this.mm, this.aaaa);

    int typeMois = -1;
    int maxMois = -1;

    //Verifie quel type de mois l'on est: 29 , 30 ou 31
    if(dateUp.mm == 2){
      typeMois = 2;
    }else if(dateUp.mm <= 7){
      typeMois = dateUp.mm%2;
    }else if(dateUp.mm > 7){
      typeMois = (dateUp.mm -7)%2;
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
      case 2:
        maxMois = 29;
        break;
      default:
        System.out.println("erreur dans le switch case : class Date");
        break;
    }

    if(dateUp.jj == maxMois){
      dateUp.mm++;
      dateUp.jj = 1;
    }else{
      dateUp.jj++;    //journée normale
    }


    /*cf photo 31 janvier 16h47 */


    if(dateUp.mm == 13){
      dateUp.aaaa++;
      dateUp.jj = 1;
      dateUp.mm = 1;
    }

    return dateUp;
  }

  public String toString() {

    /*
    String sJour;
    String sMois;
    String sAnnee;
    if(this.jour < 10) {
      sJour = "0" + String.valueOf(this.jour);
    } else {
      sJour = String.valueOf(this.jour);
    }

    if(this.mois < 10) {
      sMois = "0" + String.valueOf(this.mois);
    } else {
      sMois = String.valueOf(this.mois);
    }

    if(this.annee < 10) {
      sAnnee = "000" + String.valueOf(this.annee);
    } else if(this.annee < 100) {
      sAnnee = "00" + String.valueOf(this.annee);
    } else if(this.annee < 1000) {
      sAnnee = "0" + String.valueOf(this.annee);
    } else {
      sAnnee = String.valueOf(this.annee);
    }

    return sAnnee + "-" + sMois + "-" + sJour;
  }




    */


    return String.format("%02d-%02d-%04d", this.jj,this.mm,this.aaaa);

  }

  public Date(int jour, int mois, int annee) {
    this.jj = jour;
    this.mm = mois;
    this.aaaa = annee;
  }

  public Date() {
   this.jj = 1;
   this.mm = 1;
   this.aaaa = 2000;
  }


}