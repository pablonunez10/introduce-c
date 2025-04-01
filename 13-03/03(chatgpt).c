#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int numbers[1000]; // Assuming maximum 1000 numbers
    int processed[1000] = {0}; // 0 means not processed, 1 means processed
    int i, j;
    
    // Read numbers until EOF
    while (scanf("%d", &numbers[n]) == 1) {
        n++;
        if (n >= 1000) break; // Safety check
    }
    
    int remaining = n;
    
    // Process until all numbers are handled
    while (remaining > 0) {
        // Find current maximum among unprocessed numbers
        int max = -1;
        for (i = 0; i < n; i++) {
            if (!processed[i] && (max == -1 || numbers[i] > max)) {
                max = numbers[i];
            }
        }
        
        // Count occurrences and collect positions
        int count = 0;
        int positions[1000];
        
        for (i = 0; i < n; i++) {
            if (!processed[i] && numbers[i] == max) {
                positions[count] = i + 1; // +1 because positions are 1-indexed
                count++;
                processed[i] = 1; // Mark as processed
                remaining--;
            }
        }
        
        // Print results
        printf("%d aparece %d veces, en posiciones ", max, count);
        for (i = 0; i < count; i++) {
            printf("%d", positions[i]);
            if (i < count - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

