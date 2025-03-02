int destructive_power(int a) {
	int result = 0;
	for (int i = 0; i <= a; i++) {
		if (a % i == 0) {
			result += i;
		}
	}

	return result;
}
