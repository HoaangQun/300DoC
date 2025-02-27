function calc() {
    let S = parseFloat(document.getElementById("input001").value)
    let pi =  3.141593
    let R = Math.sqrt(S/4/pi)
    let V = Math.pow(R, 3)*(4/3)*pi
    document.getElementById("output001").innerText = "The tich V = " + V.toFixed(3)
}