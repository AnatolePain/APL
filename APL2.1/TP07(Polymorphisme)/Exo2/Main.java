public class Main{

	public static void main(String[] args) {
	
		MoyenneA m1 = new MoyenneA();

		int   a = 10;
		short b = 10;
		byte  c = 10;
		long  d = 10;
		double e = 10.0;
		float f = 10.0;

		m1.add(a);
		m1.add(b);
		m1.add(c);
		m1.add(d);
		m1.add(e);
		m1.add(f);

		System.out.println(m1.getAverage());

	}
}