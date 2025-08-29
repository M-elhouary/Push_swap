# Push_swap

Push_swap is a sorting algorithm project for the 42/1337 curriculum.  
The goal is to sort a stack of integers using a limited set of operations, with the minimum number of moves.

## Motivation

This project challenges you to implement efficient algorithms and data structures in C, focusing on problem-solving and optimization.  
You must sort data using only a restricted set of stack operations, which encourages creative solutions.

## Allowed Operations

- `sa` / `sb`: swap the first two elements of stack A or B
- `ss`: `sa` and `sb` at the same time
- `pa` / `pb`: push the top element from one stack to the other
- `ra` / `rb`: rotate stack A or B upwards
- `rr`: `ra` and `rb` at the same time
- `rra` / `rrb`: reverse rotate stack A or B downwards
- `rrr`: `rra` and `rrb` at the same time

## Algorithm Overview

- Parse and validate input arguments
- Initialize two stacks (A and B)
- Apply sorting algorithm (e.g., radix sort, quick sort, or custom logic)
- Output the sequence of operations to sort stack A

## Input & Output

- **Input:** List of integers as command-line arguments
- **Output:** List of operations (one per line) to sort the stack

Example:
```bash
./push_swap 2 1 3
sa
```

## Usage

```bash
# Compile
make

# Run push_swap with a list of numbers
./push_swap 3 2 1 6 5

# Check your solution
./checker 3 2 1 6 5
```

## Example

Below is a visualization of the sorting process:

![Push_swap Visualization](https://raw.githubusercontent.com/yourusername/Push_swap/main/assets/push_swap_example.gif)



## Resources

- [42 Project Subject PDF](https://github.com/42Paris/subject_push_swap)
- [Push_swap Visualizer](https://github.com/o-reo/push_swap_visualizer)
- [Sorting Algorithms](https://en.wikipedia.org/wiki/Sorting_algorithm)

## License

MIT

## Author

M-elhouary