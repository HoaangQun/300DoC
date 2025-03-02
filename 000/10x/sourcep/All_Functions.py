from collections import Counter

def GCD(a, b):
    if b == 0: return a
    return GCD(b, a % b)

def Fibonacci(a):
    if a <= 1: return a
    return Fibonacci(a - 1) + Fibonacci(a - 2)

def Sort(arr):
    arr.sort()
    return arr

def Palindrome(a):
    return a == a[::-1]

def SecondMax(arr):
    arr = list(set(arr))
    arr.remove(max(arr))
    return max(arr)

def Totals_Digits(a):
    sum = 0
    while a != 0:
        sum += a % 10
        a //= 10
    return sum

def ReverseS(a):
    return a[::-1]

def Prime(a):
    if a == 2: return True
    if a < 2 or a % 2 == 0: return False
    for i in range(3, int(a ** 0.5) + 1, 2):
        if a % i == 0: return False
    return True

def Frequency(a):
    return Counter(a)

def MostFre(a):
    return Counter(a).most_common(1)[0][0]