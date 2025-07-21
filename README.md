# Elementary Cellular Automaton implementation in C

## Instructions

1. Compile the main.c file (gcc must be installed)

```bash
    gcc --version
    gcc main.c -o main

```

2. Run the executable

```bash
    ./main

```

## Setup

1. Change ROW_LENGTH to adjust the width of the cellular automaton (number of cells)
2. Change TIME_PERIOD to adjust the height of the cellular automaton (number of generations of cells)
3. Change CURRENT_RULE to any number between 0 - 255 to change the evolution of the cells
   Refer to [List of CA Rules][3]

## New Stuff

1. Clock arithmetic
2. Sexagesimal
3. Bit mask

## References

[1]: https://github.com/Julian-Behnaz/Build-your-own-1D-Cellular-Automata
[2]: https://www.wikiwand.com/en/articles/Cellular_automaton
[3]: https://plato.stanford.edu/entries/cellular-automata/supplement.html
[4]: https://www.wikiwand.com/en/articles/Cellular_automaton#Elementary_cellular_automata
