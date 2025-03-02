import java.util.Arrays;

public class AFuncs {
    public static int Fibonacci(int n) {
        if (n <= 1) return n;
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }

    public static boolean Prime(int a) {
        if (a < 2) return false; if (a == 2) return true; if (a % 2 == 0) return false;
        for (int i = 3; i * i <= a; i++) {
            if (a % i == 0) return false;
        }
        return true;
    }

    public static String ReverseS(String a) {
        return new StringBuilder(a).reverse().toString();
    }

    public static int Totals_Digits(int a) {
        int sum = 0;
        while (a != 0) {
            sum += a % 10;
            a /= 10;
        } return sum;
    }

    public static int GCD(int a, int b) {
        if (b == 0) return a;
        return GCD(b, a % b);
    }

    public static void Sort(int[] a) {
        Arrays.sort(a);
    }
    
    public static boolean Palindrome(String a) {
        return (a == new StringBuilder(a).reverse().toString());
    }

    public static int SecondMax(int[] a) {
        int max, max2; max = a[0]; max2 = max;
        for (int i = 1; i < a.length; i++) {
            if (max < a[i]) max = a[i];
        } for (int i = 1; i < a.length; i++) {
            if (max > a[i] && a[i] > max2) max2 = a[i];
        }

        return max2; 
    }
}
