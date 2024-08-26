def calculate_sqrt(n):
    def recurs(N):
        if N == 0:
            return 0
        else:
            return 1 / (6 + recurs(N - 1))

    result = 3 + recurs(n)
    return result

n = int(input().strip())
apx = calculate_sqrt(n)
print(f"{apx:.10f}")
"""
This code approximates the square root of 10 using a method called continued fractions. Here's a step-by-step explanation of how the function calculate_sqrt_10(n) works, including an example with n = 2.

Structure of the Function
continued_fraction(N) Function:

This is a recursive function that calculates the continued fraction expansion.
If N == 0, the function returns 0. This is the base case for the recursion.
If N > 0, the function returns the value 1 / (6 + continued_fraction(N - 1)).
calculate_sqrt_10(n) Function:

This function calculates the approximation of the square root of 10 by adding 3 (the integer part of the square root of 10) to the value obtained from continued_fraction(n).
Example: Calculating calculate_sqrt_10(2)
Let's break down the calculation for n = 2.

Step 1: continued_fraction(2)
Call 1: continued_fraction(2)
Returns 1 / (6 + continued_fraction(1))
Call 2: continued_fraction(1)
Returns 1 / (6 + continued_fraction(0))
Call 3: continued_fraction(0)
Returns 0 (base case)
Now, let's evaluate the calls from the innermost to the outermost:

Call 3: continued_fraction(0) returns 0.
Call 2: continued_fraction(1) returns 1 / (6 + 0) = 1 / 6 ≈ 0.1666666667.
Call 1: continued_fraction(2) returns 1 / (6 + 0.1666666667) ≈ 1 / 6.1666666667 ≈ 0.1620370370.
Step 2: Adding 3 to the Result
Finally, calculate_sqrt_10(2) adds 3 to the result of continued_fraction(2):
3
+
0.1620370370
≈
3.1620370370
3+0.1620370370≈3.1620370370
"""
