import java.util.Scanner;

public class j005 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("A(xA, yA)? ");
		double xA = input.nextDouble();
		double yA = input.nextDouble();
		
		System.out.print("B(xB, yB)? ");
		double xB = input.nextDouble();
		double yB = input.nextDouble();
		
		System.out.print("C(xC, yC)? ");
		double xC = input.nextDouble();
		double yC = input.nextDouble();
		
		System.out.print("M(xM, yM)? ");
		double xM = input.nextDouble();
		double yM = input.nextDouble();

		double Sf = in_triangle.S_triangle(xA, yA, xB, yB, xC, yC);
		double S1 = in_triangle.S_triangle(xM, yM, xB, yB, xC, yC);
		double S2 = in_triangle.S_triangle(xM, yM, xA, yA, xC, yC);
		double S3 = in_triangle.S_triangle(xM, yM, xB, yB, xA, yA);

		in_triangle.check_in(S1, S2, S3, Sf);
			
	}
}
