#include "utils.h"

#include <stdlib.h>
#include <time.h>

// =============================================================================
// Seed
// =============================================================================
void utils_seed(const uint32_t seed) {
    srand(seed);
}

// =============================================================================
// Rand Uint
// =============================================================================
uint32_t utils_rand_uint(uint32_t min, uint32_t max) {
    return (rand() % (max - min + 1)) + min;
}

// =============================================================================
// Shuffle
// =============================================================================
void utils_shuffle(uint32_t* A, uint32_t n) {
    for (int i = n - 1; i >= 1; i--) {
        int j = rand() % (i + 1);
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}