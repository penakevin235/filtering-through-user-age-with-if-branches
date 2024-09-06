#include <stdio.h>

int main(void) {
/*this code builds on the last age range for insurance, and it filters out ages from 0-15, 16-24, 25-39, and 40 and over and applies 
discounts based the age of the user*/
    int age;
    int insuranceRate;


    printf("Enter your age: ");
    scanf("%d", &age);


    /*this if branch is seeing that the age range of the user isn't under 15, since usually drivers can be 16 years of age 
    and if they are not of age, 0 is set to insurance rate*/
    if (age < 16) {

        printf("You're too young to have insurance!\n");
        insuranceRate = 0;
    }
    /*this else if branch is making sure that the age of the user is over 16 but younger than 24, and if so 4000 is the yearly insurance rate*/
    else if (age < 25) {

        insuranceRate = 4000;
    }
    /* this next else if branch is filtering through users who are over 25 but younger than 39, and applies discounted price */
    else if (age < 40) {

        insuranceRate = 2000;
    }

    /* If the users age is over 40 years old, the most discounted price is applied*/
    else {

        insuranceRate = 1700;
    }


    printf("Your rate is: $%d", insuranceRate);






}