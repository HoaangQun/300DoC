import java.text.DecimalFormat;
import java.util.Scanner;

public class j004 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Nhap 3 canh tam giac: ");
		double a = input.nextDouble();
		double b = input.nextDouble();
		double c = input.nextDouble();
		
		DecimalFormat df = new DecimalFormat(".0");

		if (triangle.check(a, b, c)) {
			String type = triangle.type(a, b, c);
			System.out.println(type);
			double S = triangle.Heron(a, b, c);
			System.out.println("Dien tich S = " + df.format(S));
		} else {
			System.out.println("Khong phai tam giac");
		}
	}
}
