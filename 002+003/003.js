const readline = require('readline');
const do_dai_vecto = require('./vector');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Nhap toa do tam C (xC, yC): ', (inputC) => {
    const [xC, yC] = inputC.split(' ').map(Number);

    rl.question('Nhap ban kinh R: ', (inputR) => {
        const R = parseFloat(inputR);

        rl.question('Nhap toa do M (xM, yM): ', (inputM) => {
            const [xM, yM] = inputM.split(' ').map(Number);

            const lengthCM = do_dai_vecto(xC, yC, xM, yM);
            
            if (lengthCM < R) {
                console.log("M nam trong C()");
            } else if (lengthCM === R) {
                console.log("M nam tren C()");
            } else {
                console.log("M nam ngoai C()");
            }

            rl.close();
        });
    });
});