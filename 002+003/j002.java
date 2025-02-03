import java.util.Scanner;
import java.text.DecimalFormat;

public class j002 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("A(xA, yA)? ");
		double xA = input.nextDouble();
		double yA = input.nextDouble();

		System.out.print("B(xB, yB)? ");
		double xB = input.nextDouble();
		double yB = input.nextDouble();
	
		vector l = new vector();
		double AB = l.do_dai_vecto(xA, yA, xB, yB);
		
		DecimalFormat df = new DecimalFormat(".0000"); 
		System.out.println("|AB| = " + df.format(AB));
		
	}
}
