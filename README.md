*This project has been created as part of the 42 curriculum by tcostant*

## Description

Sort integers across two stacks using limited operations. This implementation uses the **Turkish Algorithm** with cost-based optimization.

## Algorithm

1. **Index normalization**: Convert values to ranks 0 to n-1
2. **Push to B**: Move all elements except 3 to stack B
3. **Sort 3 in A**: Hardcoded optimal moves
4. **Push back**: For each element in B, calculate the cheapest move and push to correct position in A
5. **Final rotate**: Rotate A so minimum is on top

```
Phase 1: Push all to B (keep 3 in A)
Phase 2: Sort the 3 remaining
Phase 3: For each in B:
    - Find target position in A
    - Calculate cost (use rr/rrr when possible)
    - Execute cheapest move
    - pa
Phase 4: Rotate A to put min on top
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

- Turkish Algorithm explanation
- Cost-based sorting optimization
- Stack data structures
