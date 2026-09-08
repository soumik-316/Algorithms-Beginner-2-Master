# Fast I/O

For programs that process a large amount of input, disable the synchronization
between C and C++ streams and untie `cin` from `cout`:

```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

The accompanying example reads `n` integers and prints their sum.