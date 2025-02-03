public class triangle {
    public static boolean check(double a, double b, double c) {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }

    public static String type(double a, double b, double c) {
        if (!check(a, b, c)) {
            return "Khong phai tam giac";
        }

        boolean vuong = Math.abs(Math.pow(a, 2) + Math.pow(b, 2) - Math.pow(c, 2)) < 1e-6 ||
                          Math.abs(Math.pow(b, 2) + Math.pow(c, 2) - Math.pow(a, 2)) < 1e-6 ||
                          Math.abs(Math.pow(a, 2) + Math.pow(c, 2) - Math.pow(b, 2)) < 1e-6;

        boolean deu = (a == b && b == c);
        boolean can = (a == b || a == c || b == c);

        if (deu) {
            return "Tam giac deu";
        }

        if (vuong && can) {
            return "Tam giac vuong can";
        }

        if (can) {
            return "Tam giac can";
        }

        if (vuong) {
            return "Tam giac vuong";
        }

        return "Tam giac thuong";
    }

    public static double Heron(double a, double b, double c) {
        double p = (a + b + c) / 2;
        return Math.sqrt(p * (p - a) * (p - b) * (p - c));
    }
}

