import java.lang.Thread;
import java.util.*;
import java.lang.*;

public class Traces {

	public static void main(String[] args) {

		Set<Thread> threadSet = Thread.getAllStackTraces().keySet();
		Map<Thread, StackTraceElement[]> traces = Thread.getAllStackTraces();

		for(Thread th : threadSet){
			System.out.println(th.getName() + " :");
			for(int i = 0 ; i < traces.get(th).length ; i++){
				System.out.println("  " + traces.get(th)[i].toString());
			}
				System.out.println();
		}

	}
}