import java.util.*;
import java.lang.*;

public class Main{

	private static final char PLUS = 43;
	private static final char MOINS = 45;
	private static final char DIVISER = 67;
	private static final char FOIS = 120;

	public static void main(String[] args) {
		
		Deque<Integer> maPile = new ArrayDeque<Integer>();

		if( args.length < 2){
			System.out.println("erreur il manque des arguments ");
			System.exit(1);
		}

		int i = 0; 
		while( i < args.length ){

			char c = args[i].charAt(0);

			if( c == PLUS){
				int result = maPile.pop() + maPile.pop();
				maPile.push(result);
			}else if ( c == MOINS){
				int result = maPile.pop() - maPile.pop();
				maPile.push(result);
			}else if ( c ==  DIVISER){
				int result = maPile.pop() / maPile.pop();
				maPile.push(result);
			}else if ( c ==  FOIS){
				int result = maPile.pop() * maPile.pop();
				maPile.push(result);
			}else{
				maPile.push( Integer.parseInt(args[i]) );
			}

			i++;
		}

		System.out.println( "= " + maPile.peek() );
	}
}