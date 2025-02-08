import java.text.DecimalFormat;

public class radians {
	public static void goc_phan_tu(double a) {
		a = a/60;
		double radians_a = Math.toRadians(a);
		double cos_a = Math.cos(radians_a);
		if ( 0 <= a && a < 90 ) {
			System.out.println("x thuoc goc phan tu thu I");
		} else if ( 90 <= a && a < 180 ) {
			System.out.println("x thuoc goc phan tu thu II");
		} else if ( 180 <= a && a < 270 ) {
			System.out.println("x thuoc goc phan tu thu III");
		} else if ( 270 <= a && a <= 360 ) {
			System.out.println("x thuoc goc phan tu thu IV");
		} else {
			System.out.println("Goc khong hop le!");
		}
		
		DecimalFormat df = new DecimalFormat("0.000000");

		System.out.println("cos(x) = " + df.format(cos_a));
	}
}
