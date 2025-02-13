from Reader import ReadInput
from Printer import WriteOutput

a, b = map(int, ReadInput("INPUT.INP"))
c = a * b
WriteOutput("OUTPUT.OUT", c)
