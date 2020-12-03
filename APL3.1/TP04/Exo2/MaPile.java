public class MaPile<E> implements Pile<E> {

	private Maillon<E> head;

	public void push(E e){
		Maillon<E> saveHead = this.head;
		this.head = new Maillon<E>(e);
		this.head.addPrevious(saveHead);
	}

	public E pop(){
		Maillon<E> saveHead = this.head;
		this.head = saveHead.getPrevious();
		return saveHead.getValue();
	}

	public boolean empty(){
		if(head == null ){
			return true;
		}else{
			return false;
		}
	}


}