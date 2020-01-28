public class Compteur {
  // attribut
  private int compte;
  // méthode
  public void plusUn() {
    this.compte++;
  }
  // autre méthode
  public String toString() {
    return Integer.toBinaryString(this.compte);
  }

  public void binaryCinqNeuf(){
    for (int i = 0 ;i < 4 ;i++) {
      this.plusUn();
    }

    for (int i = 0; i < 5; i++ ) {
      this.plusUn();
      System.out.println(this.toString());
    }


  }

    
}