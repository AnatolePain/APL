public class Noeud {

	private float etiquette;
  	private Noeud gauche;
  	private Noeud droit

  	public Noeud adjouter(float valeur){
  		if(valeur < etiquette ){

  			if(this.gauche != null ){
				return this.gauche;
  			}
			return this;
  		}else if(valeur > etiquette){
  			if(this.droite != null ){
				return this.droite;
  			}
			return this;
  		}else{
  			etiquette = valeur;
  		}
  	}

	public Noeud supprimer(float valeur) {
  		if (valeur < this.etiquette) {

   			if (this.gauche != null) {
     			this.gauche = this.gauche.supprimer(valeur);
    		}
    		return this;
  		} else if (valeur > this.etiquette) {

    		if (this.droite != null) {
     			this.droite = this.droite.supprimer(valeur);
    		}
    		return this;
  		}else{

    		if (this.gauche == null) {
      			return this.droite;
    		} else {
      			if (this.droite != null) {
        			this.gauche.greffer(this.droite);
      			}
      			return this.gauche;
    		}
    	}
  	}

//si les valeur est plus petite et 
}