public class stn10k {
	public static boolean prime (int z) {
		if (z < 2) {return false; }
		if (z == 2) {return true; }
		if (z % 2 == 0) {return false; }
		for (int i = 3; i <= Math.sqrt(z); i+= 2) {
			if (z % i == 0) {
				return false;
			}
		}
		return true;
	}
	
	public static void main(String[] args) {
		for (int i = 2; i < 10000; i++) {
			if (prime(i))	{
				System.out.println(i);
			}	
		}
	}
}
