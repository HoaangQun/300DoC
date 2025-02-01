function S_to_V(S) {
	pi = 3.141593;
	R = Math.sqrt(S/4/pi);
	return (4/3)*pi*Math.pow(R, 3);
}

module.exports = S_to_V;
