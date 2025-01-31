def do_dai_vecto(xA, yA, xB, yB):
    AB = ((xB - xA)**2 + (yB - yA)**2)**0.5
    return "{:.4f}".format(AB)
