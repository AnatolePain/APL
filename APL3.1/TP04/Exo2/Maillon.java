public class Maillon<E> {

	private E contenu;
	private Maillon<E> previous; 

	public Maillon(E e){
		this.contenu = e;
	}

	public void addPrevious(Maillon<E> m){
		this.previous = m;
	}

	public Maillon<E> getPrevious(){
		return this.previous;
	}

	public E getValue(){
		return this.contenu;
	}

}