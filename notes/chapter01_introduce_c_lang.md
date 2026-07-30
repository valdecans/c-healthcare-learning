# Chapter 01 — Introduction to the C Language

## What is C?
A compiled, low-level, statically typed language.
Every piece of code goes through a compiler (gcc) before becoming an executable.

**Flow:** source.c -> [gcc compiles] -> executable -> runs

## Minimal program structure
- `#include <stdio.h>` -> imports input/output functions (printf, scanf)
- `int main(void)` -> mandatory entry point of every C program
- `printf("text\n")` -> prints text to the screen
- `return 0;` -> ends the program successfully

## Compiling
```bash
gcc file.c -o executable
./executable
```
## Learnings / difficulties
==(fill in as you study - doubts, insights, compilation errors)==