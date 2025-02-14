import java.util.Scanner;

public class Fibon {
    public static int F(int N) {
        if (N == 0) return 0;
        if (N == 1) return 1;
        
        return F(N-1) + F(N-2);
    }

    public static void main(String[] args) {
        Scanner cons = new Scanner(System.in);
        System.out.print("Nhap vao vi tri trong day Fibonacci: ");
        int N = cons.nextInt();
        cons.close();

        System.out.println("Gia tri tai vi tri thu " + N + " la " + F(N));
    }
}