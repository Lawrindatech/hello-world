#include <stdio.h>

int main(){
    int marks []= {40, 10, 75, 50, 60, 80};
    int sum = 0;
     // Initialize sum to 0

    for (int i = 0; i < 6; i++) {
        sum += marks[i]; // Accumulate the sum
    }

    printf("Your total marks = %d\n", sum); // Print the total sum
    int average = sum/6;
     printf("Average marks = %d\n",average);

    return 0;
}
