#include <stdio.h>
#include <stdlib.h>

#ifdef __STDC_NO_VLA__
    printf("Variable length arrays are not supported.\n");
    exit(EXIT_FAILED);
#endif

/*
 * Generated on: 11:41:1
 */
int main(int argc, char const *argv[]) {
    size_t size = 0;
    printf("Enter the number of notes: ");
    scanf("%zd", &size);
    if (size > 0) {
        float notes[size];
        printf("Notes limit [0, 20]\n");
        for (unsigned int i = 0; i < size; i++) {
            float note = 0.0f;
            printf("Enter note %d: ", i + 1);
            scanf("%f", &note);
            if (note >= 0 && note <= 20) {
                notes[i] = note;
            } else {
                printf("The note cannot be greater than 20 or less than 0\n");
                i--;
            }
        }
        // calculating the average
        float average = 0.0f;
        for (unsigned int j = 0; j < size; j++) {
            average += notes[j] / (float) size;
        }
        printf("The average is %.2f\n", average);
    } else {
        printf("The operation could not be completed");
    }
    system("pause");
    return EXIT_SUCCESS;
}
