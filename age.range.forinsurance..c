#include <stdio.h>

int main(void) {

    int age;
    int insuranceRate;

    insuranceRate = 100;

    printf("Enter your age: ");
    scanf("%d", &age);
    //this first branch checks whether the user's age is older than 25 years old
    if (age > 25) {

        insuranceRate = insuranceRate - 25 ;
    }
    //if the user's age is equal to 25,, this branch makes sure to add the discounted rate to the user
    else if (age == 25) {

        insuranceRate = insuranceRate - 25 ;
    }
    /*if the user's age is under 25, the if branch doesnt take effect at all, and the user gets the normal non
    discounted insurance rate*/

    printf("Your rate is: $%d", insuranceRate);






}
