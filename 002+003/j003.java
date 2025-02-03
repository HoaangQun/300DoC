import java.util.Scanner;

public class j003 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("Nhap toa do tam C: ");
		double xC = input.nextDouble();
		double yC = input.nextDouble();

		System.out.print("Nhap ban kinh R: ");
		double R = input.nextDouble();

		System.out.print("Nhap toa do M: ");
		double xM = input.nextDouble();
		double yM = input.nextDouble();

		vector l = new vector();

		double CM = l.do_dai_vecto(xC, yC, xM, yM);

		if (CM < R) {
			System.out.println("M nam trong C()");
		} else if (CM == R) {
			System.out.println("M nam tren C()");	
		} else {
			System.out.println("M nam ngoai C()");
		}
		
	}
}
