from SpecialPrime import total_SPRIME
from Reader import Read_INP
from Reader import Write_OUT

T, test_cases = Read_INP("SPRIME.INP")
rsl = [total_SPRIME(L, R) for L, R in test_cases]
Write_OUT("SPRIME.OUT", rsl)