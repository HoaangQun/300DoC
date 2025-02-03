public class in_triangle {
	public static double S_triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
	return 0.5 * Math.abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)); 
	}

	public static void check_in(double S1, double S2, double S3, double Sf) {
		double St = S1 + S2 + S3;
		if (St == Sf) {
			if (S1 == 0 || S2 == 0 || S3 ==0) {
				System.out.println("Diem nam tren canh tam giac");
			} else {
				System.out.println("Diem nam trong tam giac");
			}
		} else {
			System.out.println("Diem nam ngoai tam giac");
		}
	}
}
