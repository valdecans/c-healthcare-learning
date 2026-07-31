# Chapter 02 — Variables & Data Types

## Why variables exist
A variable is a named space in memory that holds a value which can
change during program execution. In C, every variable must have a
**type defined before use** — the compiler needs to know, at compile
time, how much memory to reserve.

## Main primitive types

| Type (C) | Represents         | Example       | Typical size |
|----------|---------------------|---------------|--------------|
| `int`    | integer number       | `32`, `-10`   | 4 bytes      |
| `float`  | decimal, single precision | `36.5`  | 4 bytes      |
| `double` | decimal, double precision | `98.65` | 8 bytes      |
| `char`   | a single character   | `'A'`         | 1 byte       |

Note: `char` uses single quotes (`'A'`). C has no native "string" type —
strings are arrays of `char`, covered formally in Chapter 08 (Arrays).
For now, avoid free text in variables — single characters only.

## Declaration and initialization

```c
int age;            // declaration only - value is "garbage" until assigned
age = 28;            // assignment

int height_cm = 170; // declaration + initialization together
float temperature = 36.5;
char blood_type = 'O';
```

## Format specifiers (`printf`)

| Type     | Specifier |
|----------|-----------|
| `int`    | `%d`      |
| `float`  | `%f`      |
| `double` | `%lf` (in `printf`, `%f` also works) |
| `char`   | `%c`      |

```c
int age = 28;
printf("Age: %d years\n", age);
```

Use `%.Nf` to limit decimal places on output, e.g. `%.1f` shows one
decimal place (avoids something like `36.700001`).

## Implicit type conversion (preview)
Mixing `float` and `int` in an expression (e.g. `0.5 * base * height`)
causes C to automatically promote the result to `float`. This is called
**implicit type conversion**. Covered in more depth in Chapter 03
(Operators & Expressions).

## Practical examples

### Healthcare — Vital Signs
```c
#include <stdio.h>

int main(void) {
    int heart_rate = 78;              // bpm
    float body_temperature = 36.7;    // Celsius
    float systolic_pressure = 120.0;  // mmHg
    float diastolic_pressure = 80.0;  // mmHg
    char shift = 'M';                 // M=Morning, A=Afternoon, N=Night

    printf("=== Patient Vital Signs ===\n");
    printf("Heart Rate: %d bpm\n", heart_rate);
    printf("Body Temperature: %.1f C\n", body_temperature);
    printf("Blood Pressure: %.0f/%.0f mmHg\n", systolic_pressure, diastolic_pressure);
    printf("Shift: %c\n", shift);

    return 0;
}
```

### Applied Math — Triangle Area
```c
#include <stdio.h>

int main(void) {
    int base = 5;
    int height = 8;
    float triangle_area = 0.5 * base * height;

    printf("Triangle base: %d\n", base);
    printf("Triangle height: %d\n", height);
    printf("Triangle area: %.2f\n", triangle_area);

    return 0;
}
```

## Exercises (`exercises/chapter02/`)

- `ex01_vital_signs.c` — vital signs example plus: `oxygen_saturation`
  (int, %), `weight_kg` (float), `risk_classification` (char: G/Y/R)
- `ex02_triangle_area.c` — triangle area example plus rectangle area
  (`width * height`, float)

## Learnings / difficulties
(fill in as you study - doubts, insights, compilation errors)
