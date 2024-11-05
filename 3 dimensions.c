#include <stdio.h>

int main() {
    // Declare and initialize a 3D array (2 layers, 3 rows, 3 columns)
    int p,q,r;
	int arr[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };

    // Access and print the elements of the 3D array
    for (p= 0; p < 2; p++) {
        for (q = 0; q < 3; q++) {
            for (r= 0; r < 3; r++) {
                printf("Element at arr[%d][%d][%d]: %d\n", p, q, r, arr[p][q][r]);
            }
        }
    }

    return 0;
}

