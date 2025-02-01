function do_dai_vecto(xA, yA, xB, yB) {
    return Math.sqrt((Math.pow(xB - xA, 2)) + (Math.pow(yB - yA, 2)));
}

module.exports = do_dai_vecto;