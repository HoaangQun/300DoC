public class S_to_V {
	public double S_to_V(double S) {
		double pi = 3.141593;
		double R = Math.sqrt(S/pi/4);
		double V = ((4.0/3.0) * pi * Math.pow(R, 3));
		return V;
	} 
}
