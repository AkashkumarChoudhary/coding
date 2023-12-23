#include <stdio.h>
#include <string.h>

// Stack to simulate parsing
char stack[100];
int top = -1;

// Productions for the given grammar
char productions[7][10] = {"S", "A", "A", "B", "B", "C", "C"};

// Function to push a character onto the stack
void push(char c) {
    stack[++top] = c;
}

// Function to pop a character from the stack
char pop() {
    return stack[top--];
}

void predictiveParse(char input[]) {
    int i = 0;
    push('S'); 

    while (top >= 0) {
        char current = pop();
        if (current == input[i]) {
            i++; // Matched, move to next input symbol
        } else {
           
            int prodIndex = current - 'A';
            printf("Using production %s\n", productions[prodIndex]);
            
            for (int j = strlen(productions[prodIndex]) - 1; j >= 0; j--) {
                if (productions[prodIndex][j] != 'ε') {
                    push(productions[prodIndex][j]);
                }
            }
        }
    }

    if (i == strlen(input)) {
        printf("Input successfully parsed!\n");
    } else {
        printf("Error in parsing.\n");
    }
}

int main() {
    char input[] = "id+id*id"; // Example input string
    predictiveParse(input);
    return 0;
}