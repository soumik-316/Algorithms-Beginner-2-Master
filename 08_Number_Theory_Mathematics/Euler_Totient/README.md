# Euler's Totient Function

Euler's totient function, written as `phi(x)` or `φ(x)`, counts the positive
integers from `1` to `x` that are relatively prime to `x`.

Two numbers are relatively prime when their greatest common divisor is `1`.
For example, the numbers relatively prime to `10` are `1, 3, 7, 9`, so
`phi(10) = 4`.

## Formula

If the distinct prime factors of `x` are `p1, p2, ...`, then:

`phi(x) = x * (1 - 1/p1) * (1 - 1/p2) * ...`

The single-value implementation applies this formula while factorizing `x`.
It runs in `O(sqrt(x))` time and uses `O(1)` extra space.

## Totient Sieve: `O(n log log n)`

When values for every number from `1` to `n` are needed, use the totient sieve.
Start with `phi[i] = i`. For every prime `p`, update all multiples of `p`:

`phi[multiple] -= phi[multiple] / p`

This applies the formula to every number up to `n` and computes all values in
`O(n log log n)` time with `O(n)` extra space.

For `x = 1`, the function returns `1` by convention because `1` is
relatively prime to itself.