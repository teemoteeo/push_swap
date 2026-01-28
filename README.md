*This project has been created as part of the 42 curriculum by tcostant*

## Description

Sort integers across two stacks using limited operations. This implementation uses **Radix Sort** for O(n·k) complexity, achieving ~500 ops for 100 numbers and ~4000 for 500.

## Algorithm

Process each bit position from LSB to MSB. For each bit, rotate through stack A: if the bit is 1, push to B; if 0, rotate. After each pass, push B back to A. Result: sorted stack.

```
for each bit (0 to max_bits):
    for each element in A:
        if bit is 1:
            pb
        else:
            ra
    push all B back to A
```

## Build & Run

```bash
make
./push_swap 3 2 1 0
```

Test:
```bash
make bonus
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

## Resources

- Radix Sort: https://en.wikipedia.org/wiki/Radix_sort
- Bit manipulation fundamentals
- Stack data structures
