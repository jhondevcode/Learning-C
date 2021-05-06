#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    int day = 0;
    int month = 0;
    int year = 0;
    char format[] = "dd/mm/yy";
    printf("Enter the date (%s): ", format);
    scanf("%d/%d/%d", &day, &month, &year);
    if (day > 0 && month > 0 && year > 0) {
        if (day <= 31) {
            if (month <= 12) {
                char month_name[16];
                switch (month) {
                    case 1: strcpy(month_name, "January"); break;
                    case 2: strcpy(month_name, "February"); break;
                    case 3: strcpy(month_name, "March"); break;
                    case 4: strcpy(month_name, "April"); break;
                    case 5: strcpy(month_name, "May"); break;
                    case 6: strcpy(month_name, "June"); break;
                    case 7: strcpy(month_name, "July"); break;
                    case 8: strcpy(month_name, "August"); break;
                    case 9: strcpy(month_name, "September"); break;
                    case 10: strcpy(month_name, "October"); break;
                    case 11: strcpy(month_name, "November"); break;
                    case 12: strcpy(month_name, "December"); break;
                    default: strcpy(month_name, "null"); break;
                }
                if (strcmp(month_name, "null") == 0) {
                    printf("Error: %d is not a valid month.\n", month);
                } else {
                    printf("%d %s %d.\n", day, strlwr(month_name), year);
                }
            } else {
                printf("The number of the month cannot be greater than 12");
            }
        } else {
            printf("The number of days cannot exceed 31");
        }
    } else {
        printf("Wrong date format.\n");
    }
    return EXIT_SUCCESS;
}
