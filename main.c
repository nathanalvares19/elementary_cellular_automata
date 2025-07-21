#include <stdio.h>

#define ROW_LENGTH 50
#define CURRENT_RULE 204
#define TIME_PERIOD 20

int DATA[ROW_LENGTH * 2];

int *current_cell_states;
int *next_cell_states;
int *temp;

int stateBasedOnNeighbours(int rule, int left, int center, int right)
{
    return (rule >> (left << 2 | center << 1 | right)) & 1;
}

int main(void)
{
    // Initialize all cells to zero
    for (int i = 0; i < ROW_LENGTH * 2; i++)
    {
        DATA[i] = 0;
    }

    current_cell_states = DATA;
    next_cell_states = DATA + ROW_LENGTH;

    // initial state
    current_cell_states[ROW_LENGTH / 2] = 1;

    for (int t = 0; t < TIME_PERIOD; t++)
    {
        // display the current state
        for (int i = 0; i < ROW_LENGTH; i++)
        {
            printf("%c", current_cell_states[i] ? '#' : '.');
        }
        printf("\n");

        // find new states
        for (int i = 0; i < ROW_LENGTH; i++)
        {
            int left, center, right;

            left = current_cell_states[(i - 1 + ROW_LENGTH) % ROW_LENGTH];
            center = current_cell_states[i];
            right = current_cell_states[(i + 1) % ROW_LENGTH];

            next_cell_states[i] = stateBasedOnNeighbours(CURRENT_RULE, left, center, right);
        }

        temp = current_cell_states;
        current_cell_states = next_cell_states;
        next_cell_states = temp;
    }
    return 0;
}
