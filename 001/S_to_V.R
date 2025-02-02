S_to_V <- function(S) {
	pi <- 3.141593
	R <- sqrt(S/4/pi)
	V <- (4/3) * pi * R^3
	return(V)
}
