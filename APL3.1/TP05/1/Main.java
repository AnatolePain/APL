import java.util.*;

public class Main {
	public static void main(String[] args) {
		
		Queue<Float> maFile = new ArrayDeque<Float>();

		for(float f : maFile ){
			maFile.add(f);
		}

		TriFusion<Float> ordreCroissant = new TriFusion<Float>();

		for( float f : maFile){
			System.out.println(f + ", ");
		}


	}
}