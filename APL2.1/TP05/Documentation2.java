public class Documentation2 {
    public static void main(String[] args) {

        if(args.length > 1){
        	System.out.println("Erreur nombre d'arguments");
        }else{
        	int oct = Integer.parseInt(args[0], 8);
        	System.out.println(Integer.toHexString(oct));
        }
    }
}