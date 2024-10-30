// 
#include <stdio.h>
#include <math.h>

// Recursive function to find the number of ways to express val as a sum of unique natural numbers each raised to the power of p
void recursive(int val, int p, int i, int max, int total, int *count) {
    int new_total = total + pow(i, p);
    
    if (new_total > val)
        return;
    
    if (new_total == val) {
        (*count)++;
        return;
    }

    for (int j = i + 1; j <= max; j++) {
        recursive(val, p, j, max, new_total, count);
    }
}

// Function to initiate the recursive count
int nbr_of_poss(int val, int p) {
    int max = pow(val, 1.0 / p);
    int count = 0;
    for (int i = 1; i <= max; i++) {
        recursive(val, p, i, max, 0, &count);
    }
    return count;
}

int main() {
    int val, p;
    scanf("%d%d", &val, &p);
    printf("%d\n", nbr_of_poss(val, p));
    return 0;
}
