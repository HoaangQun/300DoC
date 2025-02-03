import java.text.DecimalFormat;

public class func {
	public static void ham_so_bac_nhat(double a, double b) {
		double x = -(b/a);
		DecimalFormat df = new DecimalFormat("0.00");
		System.out.println("x = " + df.format(x));
	}
	
	public static void ham_so_bac_hai(double a, double b, double c) {
		DecimalFormat df = new DecimalFormat("0.00000");
		double Delta = Math.pow(b, 2) - 4*a*c;
		double x1 = (-b - Math.sqrt(Delta))/(2*a);
		System.out.println("x1 = " + df.format(x1));
		
		double x2 = (-b + Math.sqrt(Delta))/(2*a);
		System.out.println("x2 = " + df.format(x2));
	}

}
