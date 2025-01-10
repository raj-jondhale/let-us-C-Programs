/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half, parallel to its
shorter sides. Thus, paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8. */
#include <stdio.h>

int main() {
    int width = 1189, height = 841; // Dimensions of A0 paper size
    
    printf("Paper Sizes and Dimensions (in mm):\n");
    for (int i = 0; i <= 8; i++) {
        printf("A%d: %d mm x %d mm\n", i, width, height);
        // Update dimensions for the next size
        if (width > height) {
            width /= 2; // Halve the width
        } else {
            height /= 2; // Halve the height
        }
    }
    return 0;
}
