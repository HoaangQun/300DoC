def swaping(a, b, c):
    if a > b: a, b = b, a
    if a > c: a, c = c, a
    if b > c: b, c = c, b

    print(f"Chieu tang dan: {a} {b} {c}")
