#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    double average = (double)sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}
