def clean(n: str) -> str:
    return "".join([x for x in n if x != '0' and x != '1'])

with open ("DELETE.INP", "r") as f:
    s = f.readline()

with open ("DELETE.OUT", "w") as f:
    f.write(clean(s))