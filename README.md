# Console-C-Calculator

Console calculator built in C that supports chained operations on multiple numbers.

## Features

- Addition, subtraction, multiplication and division
- Chained operations: apply as many operations as needed before finishing
- Division by zero protection
- Invalid input handling

## How it works

1. Enter the first number
2. Choose an operation: `+`, `-`, `*`, `/`
3. Enter the next number — the running total updates after each operation
4. Repeat as many times as needed
5. Press `=` to finish and see the final result

## How to compile and run

```bash
gcc main.c -o calculadora
./calculadora
```

## Technologies

- C
- GCC