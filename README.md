# CS:APP Practice Exercises

This repository contains my solutions to exercises from *Computer Systems: A Programmer’s Perspective* (CS:APP). The work focuses on building intuition for how data is represented and manipulated at the machine level.

## Topics

### Bit-Level Manipulation
- Integer representations and two’s complement
- Bitwise operators and masks
- Conditional, shift, and logical operations without branching

### Byte-Level Behaviour
- Visualising memory layout of values
- Big-endian vs little-endian
- Inspecting byte sequences with tools like `show-bytes.c`

### Integer Arithmetic
- Signed/unsigned conversions
- Overflow and truncation behaviour
- Expression evaluation and limits

### Building Intuition
- Writing small, constrained functions
- Understanding trade-offs in implementations
- Recognising undefined and implementation-defined behaviour

## Structure

Exercises are named after the section numbers they come from:
```
259.c, 260.c, ..., 269.c
```

Utility programs and supporting files:
- `show-bytes.c`
- `Makefile`

Compiled binaries may exist for convenience/testing.

## Build

Compile individual exercises:
```bash
gcc 260.c -o 260
./260
```

Or use the provided Makefile:
```bash
make
```

## Notes

The purpose of these exercises is not just to “get the right output”, but to:
- understand how low-level operations behave
- reason about correctness under constraints
- observe how compilers produce machine code
- explore system-specific quirks

These problems emphasise reasoning and systems thinking, not library usage.

---

This repository reflects ongoing progress in learning systems programming through hands-on practice inspired by CS:APP.
