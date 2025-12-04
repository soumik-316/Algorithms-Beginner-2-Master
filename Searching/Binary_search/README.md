# Binary Search

Binary Search is a searching algorithm used to find the position of a target element in a **sorted array**.  
It works by repeatedly dividing the search interval in half.

---

## Algorithm

### Iterative Binary Search
1. Start with the entire array.  
2. Find the middle element.  
3. If middle element equals target → return index.  
4. If target < middle element → search left half.  
5. If target > middle element → search right half.  
6. Repeat steps 2-5 until element is found or interval is empty.

### Recursive Binary Search
- Same as iterative, but implemented using recursion.
- Base case: if search interval becomes empty, return -1.

---

## Lower Bound & Upper Bound

- **Lower Bound:** The first index where `arr[index] >= target`.  
  Useful to find the smallest element ≥ target.

- **Upper Bound:** The first index where `arr[index] > target`.  
  Useful to find the smallest element > target.

*Both can be implemented using a slight modification of standard binary search.*

---

## Complexity
- **Time:** O(log n)  
- **Space:** O(1) for iterative, O(log n) for recursive (call stack)

---

## Example

Array: `[1, 3, 5, 7, 9]`  
Target: `5`  

- Iterative Search → Found at index 2  
- Recursive Search → Found at index 2  
- Lower Bound → 2 (first index where element ≥ 5)  
- Upper Bound → 3 (first index where element > 5)
