#include <stdio.h>
#include <stdlib.h>

void reverseString(char str[]) {
    char *start = str;
    char *end = str;
    
    while (*end != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello";

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
