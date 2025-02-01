const readline = require('readline');
const S_to_V = require('./S_to_V');

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

rl.question('Nhap dien tich S: ',(S) => {
	S = parseFloat(S);

	const V = S_to_V(S);
	console.log(`The tich V = ${V.toFixed(6)}`);

	rl.close();

})
