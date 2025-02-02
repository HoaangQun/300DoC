source("S_to_V.R")

S <- as.numeric(readline(prompt = "Nhap dien tich S: "))

V <- S_to_V(S)

cat("The tich V = ", round(V, 3), "\n")
