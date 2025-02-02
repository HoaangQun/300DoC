import java.util.Scanner;
import java.text.DecimalFormat;

public class j001 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Nhap dien tich S: ");
		double S = scanner.nextDouble();

		S_to_V converter = new S_to_V();
		double V = converter.S_to_V(S);
		
		DecimalFormat df = new DecimalFormat(".000");

		System.out.println("The tich V = " + df.format(V));
	}
}
