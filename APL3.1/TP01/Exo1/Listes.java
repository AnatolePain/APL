import javax.swing.*;
import java.util.ArrayList;

public class Listes {

	public static void main(String[] args) {

		ArrayList<Integer> monArrayListI = new ArrayList<Integer>();
		ArrayList<Float> monArrayListF = new ArrayList<Float>();
		ArrayList<Number> monArrayListN = new ArrayList<Number>();

		monArrayListI.add(53);
		monArrayListI.add(64);
		monArrayListI.add(6745);

		monArrayListF.add(-1.5f);
		monArrayListF.add(-14.5f);
		monArrayListF.add(-2.147f);

		monArrayListN.add(0.54656546);
		monArrayListN.add(0.54656645345546);
		monArrayListN.add(6545646.546565423136);

		//------------------------------

		//monArrayListI.add(-1.5f);
		//monArrayListI.add(-14.5f);
		//monArrayListI.add(-2.147f);

		//monArrayListI.add(0.54656546);
		//monArrayListI.add(0.54656645345546);
		//monArrayListI.add(6545646.546565423136);

		//------------------------------

		//monArrayListF.add(53);
		//monArrayListF.add(64);
		//monArrayListF.add(6745);

		//monArrayListF.add(0.54656546);
		//monArrayListF.add(0.54656645345546);
		//monArrayListF.add(6545646.546565423136);

		//--------------------------------------

		monArrayListN.add(53);
		monArrayListN.add(64);
		monArrayListN.add(6745);

		monArrayListN.add(-1.5f);
		monArrayListN.add(-14.5f);
		monArrayListN.add(-2.147f);

		System.out.println();
		System.out.println("Integer:");
		for(int i = 0; i < monArrayListI.size() ; i++){
			System.out.println(monArrayListI.get(i));
		}

		System.out.println();
		System.out.println("Float");
		for(int i = 0; i < monArrayListF.size() ; i++){
			System.out.println(monArrayListF.get(i));
		}

		System.out.println();
		System.out.println("Number");		
		for(int i = 0; i < monArrayListN.size() ; i++){
			System.out.println(monArrayListN.get(i));
		} 
		
		System.out.println();
		System.out.println(" Conclusion: Il n'y a que dans la liste Number qu'on peut tout mettre (cf shéma) ");
		//-- Conclusion: Il n'y a que dans la liste Number qu'on peut tout mettre (cf shéma)

		System.out.println("\n b.");

		//-- Integer
		//monArrayListI.addAll(monArrayListF);
		//monArrayListI.addAll(monArrayListN);

		//-- Float
		//monArrayListF.addAll(monArrayListI);
		//monArrayListF.addAll(monArrayListN);
		monArrayListF.addAll(monArrayListF);


		//-- Number
		monArrayListN.addAll(monArrayListI);
		monArrayListN.addAll(monArrayListF);

		System.out.println();
		System.out.println("Integer:");
		for(int i = 0; i < monArrayListI.size() ; i++){
			System.out.println(monArrayListI.get(i));
		}

		System.out.println();
		System.out.println("Float");
		for(int i = 0; i < monArrayListF.size() ; i++){
			System.out.println(monArrayListF.get(i));
		}

		System.out.println();
		System.out.println("Number");		
		for(int i = 0; i < monArrayListN.size() ; i++){
			System.out.println(monArrayListN.get(i));
		} 

		System.out.println();
		System.out.println("ccl: on ne peut que transvaser vers la liste Number (cf shéma)");
		//-- ccl: on ne peut que transvaser vers la liste Number (cf shéma)

	}
}