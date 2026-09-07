# Time Complexity
Time complexity describes how an algorithm's running time grows as the input
size `n` increases. We usually describe the growth with Big O notation.


## Common Complexities
| Complexity | Name | Typical example |
| --- | --- | --- |
| `O(1)` | Constant | Accessing an array element |
| `O(log n)` | Logarithmic | Binary search |
| `O(sqrt n)` | Square root | Checking divisors up to `sqrt(n)` |
| `O(n)` | Linear | Scanning an array |
| `O(n log n)` | Linearithmic | Merge sort |
| `O(n^2)` | Quadratic | Comparing every pair of elements |
| `O(n^3)` | Cubic | Three nested loops |
| `O(n^k)` | Polynomial | `k` nested loops for fixed `k` |
| `O(2^n)` | Exponential | Recursive subset generation |
| `O(n!)` | Factorial | Generating all permutations |

The list is ordered roughly from faster growth to slower growth as `n`
becomes large. Constants and lower-order terms are ignored, so `O(2n + 5)`
is written as `O(n)`.

## How to Identify It

- Statements that do not depend on `n` are `O(1)`.
- One loop over the input is usually `O(n)`.
- Repeatedly dividing the input by two is `O(log n)`.
- Nested loops multiply their complexities.
- Consecutive blocks add their complexities, and the largest term dominates.
- Recursive branching can produce exponential or factorial complexity.


## Example
The accompanying C++ file contains a small runnable example for every
complexity listed above. The input sizes for exponential and factorial
examples are intentionally small because their running time grows very fast.