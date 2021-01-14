import java.util.*;

public class TriFusion<E> {

	private Queue<E> sousDivision01 = new ArrayDeque<E>();
	private Queue<E> sousDivision02 = new ArrayDeque<E>();



	public void scinder(ArrayDeque<E> file){
		for(E e : this.sousDivision01){
			this.sousDivision01.add(e);
		}

		int milieu = file.size()/2;
		if (file.size() != 1 ){
			try{
				
				for (int i = 0 ; i < milieu; i++) {
					this.sousDivision01.add(file.remove());
				}
				new TriFusion(this.sousDivision01);

				for (int i = milieu ; i < file.size(); i++) {
					this.sousDivision02.add(file.remove());
				}
				new TriFusion(this.sousDivision02);

			}catch(NoSuchElementException e){
				System.out.println("Erreur sousFile01 vide");
				System.exit(0);
			}
		}

	}

	public void fusionner(){


	}

	public void trier(){



	}
}