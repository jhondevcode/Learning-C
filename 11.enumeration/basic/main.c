/*
 * ===========================================================================
 * Name        : Learning-C\11.basic
 * Author      : Jhon
 * Version     : 1.0.0
 * Description : Undefinned
 * Created on  : 2021-05-19 11:55:09.014630
 * ===========================================================================
 */
#include <stdio.h>
#include <stdlib.h>

enum week{
    Mon=10,
    Tue,
    Wed,
    Thur,
    Fri=10,
    Sat=16,
    Sun
};

enum day{
    Mond,
    Tues,
    Wedn,
    Thurs,
    Frid=18,
    Satu=11,
    Sund
};

int main(int argc, char const *argv[]) {
    printf("The value of enum week: %d\t%d\t%d\t%d\t%d\t%d\t%d\n\n",Mon , Tue, Wed, Thur, Fri, Sat, Sun);
    printf("The default value of enum day: %d\t%d\t%d\t%d\t%d\t%d\t%d\n",Mond , Tues, Wedn, Thurs, Frid, Satu, Sund);
    system("pause");
    return EXIT_SUCCESS;
}
