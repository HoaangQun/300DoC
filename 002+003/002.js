const readline = require('readline');
const do_dai_vecto = require('./vector'); // Import hàm tính độ dài vectơ

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Nhap toa do A (xA, yA): ', (inputA) => {
    const [xA, yA] = inputA.split(' ').map(Number);

    rl.question('Nhap toa do B (xB, yB): ', (inputB) => {
        const [xB, yB] = inputB.split(' ').map(Number);

        const length = do_dai_vecto(xA, yA, xB, yB);
        console.log(`|AB| = ${length.toFixed(4)}`);

        rl.close();
    });
});
