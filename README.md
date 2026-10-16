# Project Euler Solutions in C

My solutions to [Project Euler](https://projecteuler.net/) problems, written in C as practice with
loops, functions and number theory. Each problem has its own folder with one `.c` file.

## Status

I compiled and ran every solution with GCC to check the output against the known answers.

| # | Problem | File | Result when run |
|---|---------|------|-----------------|
| 1 | Multiples of 3 or 5 below 1000 | `1_Multiples_of_5_or_3/` | **233168** (correct) |
| 2 | Even Fibonacci numbers up to four million | `2_Even_Fibonacci/` | **4613732** (correct; slow recursive Fibonacci) |
| 3 | Largest prime factor of 600851475143 | `3_Largest_Prime_Factor/` | prints `71 839 1471`; **the last factor (6857, the answer) is not printed yet** |
| 6 | Sum square difference (first 100 numbers) | `6_Sum_Square_Difference/` | prints 25131392; **expected 25164150** (a variable is not initialised) |
| 7 | 10001st prime | `7_10001st_Prime/` | prints 104729; **expected 104743** (the counter is off by one) |
| 10 | Sum of primes below two million | `10_Summation_of_Primes/` | correct approach but brute force; did not finish within 90 seconds |

Problems 3, 6 and 7 have known bugs that I am fixing; this table will be updated when they are.

## Build and run

```bash
gcc 1_Multiples_of_5_or_3/multiples_of_3_or_5.c -o p1
./p1                  # on Windows: p1.exe
```

## Requirements

- A C compiler (GCC, Clang or MSVC); only `stdio.h` is used
- No accounts, packages or API keys
