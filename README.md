# Mobile Service Package Calculator (C++)

A console-based C++ application developed for **COP 2334 — Programming Project 2**. It calculates the cost of three mobile messaging packages based on usage and shows how much a customer could save by choosing a less expensive package.

## Package pricing

| Package | Monthly base price | Included message units | Additional units |
| --- | ---: | ---: | ---: |
| A | $19.99 | 20 | $0.25 each |
| B | $39.99 | 100 | $0.10 each |
| C | $59.99 | Unlimited | No additional charge |

## Features

- Accepts package choices A, B, or C (uppercase or lowercase).
- Validates message usage between 1 and 672 units.
- Calculates the prices of all three packages for comparison.
- Displays the selected package's price and any savings available with cheaper packages.
- Allows customers to request additional quotes until they enter `n` or `N`.
- Displays currency with two decimal places.

## Example

```text
Which package are you shopping for? (enter A, B, C)? A
How many message units(1 - 672)? 350
The charges are $102.49
By switching to Package B you would save $37.50
By switching to Package C you would save $42.50
Do you want to go again (y/n)? N
Thank you for using this program. Goodbye.
```

## Build and run

Requires a C++ compiler such as `g++`.

```bash
g++ Project2.cpp -o Project2
./Project2
```

On Windows, run `Project2.exe` after compiling.

## C++ concepts practiced

- Variables and numeric calculations
- `if` statements and comparisons
- `switch` statements
- `while` and `do...while` loops
- Input validation
- Console input/output and `iomanip` formatting

## Project notes

This is an introductory programming coursework project. It assumes numeric input when requesting message units; nonnumeric input is not handled separately.
