// QUESTION

// Write a C program to take first name (e.g., “Sachin”), middle name (e.g., “Ramesh”) and surname (e.g., “Tendulkar”) as input as separate strings, use string operations to store the full name in the format: first_name first_letter_of_middlename. surname (e.g., “Sachin R. Tendulkar”) in another string and print it.

#include <stdio.h>
#include <string.h>

void main() {
    int first_name[20], middle_name[20], last_name[20];
    int midname_short[2], name[62];

    printf("Enter first name: ");
    scanf("%s", &first_name);
    printf("Enter middle name: ");
    scanf("%s", &middle_name);
    printf("Enter last name: ");
    scanf("%s", &last_name);

    sprintf(name, "%s %c. %s", first_name, middle_name[0], last_name);
    // midname_short[0] = middle_name[0];
    // midname_short[1] = '.';
    // // midname_short[2] = " ";

    // strcpy(name, first_name);
    // strcat(name, " ");
    // strcat(name, midname_short);
    // strcat(name, last_name);

    printf("Full name: %s\n", name);
}