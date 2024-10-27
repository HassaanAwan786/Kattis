from fractions import Fraction

n, d = map(int, input().split("/"))
ans = (Fraction(n, d) - 32) * Fraction(5, 9)
print(f"{ans.numerator}/{ans.denominator}")
