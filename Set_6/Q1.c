// QUESTION

// Implement a login interface using a do-while loop, asking a person his/her username and password, and allowing access in case of successful authentication. Assume that you have a known list of usernames in an array: UserNames, and the corresponding passwords (in the same order) in another array: Passwords. That is, array element UserName[i] corresponds to array element Passwords[i].

// Once the person inputs the username, search for the same in UserNames, and if it matches an element in UserNames, ask for the password, which you search in Passwords. You may use the code of “linear search” on slide number 23 of “Loops” on the WeLearn page for the course.

// If the username and password match, print a message ‘Welcome!’ In case of a mismatch, print an appropriate message and ask if the person wants to continue; if yes, ask for the username and password again; else, terminate the loop.

// To implement the above, assume the most realistic setup where the names and passwords are strings, and you have a database of usernames and passwords to be stored in a file “Username-Password.txt”. First, construct a structure (using struct) USERIDPASSWORD containing the elements username and password (as strings). Only once, use fwrite() to write 20 username-password pairs of USERIDPASSWORD type variables in Username-Password.txt. Then, to implement the interface, read the file using fread() to retrieve the database, and store it in an array of USERIDPASSWORD, and search in this array.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct USERID_PASSWORD
{
    char username[20];
    char password[20];
};

void main()
{
    int num = 8;
    struct USERID_PASSWORD database_to_write[] = {{"Arya", "Basak"},
                                       {"Ananya", "Biswas"},
                                       {"Rishav", "Raj"},
                                       {"Soham", "Biswas"},
                                       {"Krishna", "Tiwari"},
                                       {"Ashutosh", "Jha"},
                                       {"Anuvansh", "Dixit"},
                                       {"Khushant", "Tomar"}};

    
    FILE *ptr = NULL;
    ptr = fopen("Database.txt", "wb");

    if (ptr == NULL) {
        printf("Error wrtitng to file");
        exit(1);
    }

    fwrite(&database_to_write, sizeof(struct USERID_PASSWORD), num, ptr);
    fclose(ptr);
    printf("Data recorded successfully\n");

    ptr = fopen("Database.txt", "rb");

    if (ptr == NULL) {
        printf("Error wrtitng to file");
        exit(1);
    }

    char usernames[num][20];
    char passwords[num][20];
    // struct USERID_PASSWORD data;

    struct USERID_PASSWORD database_to_read[num];
    fread(&database_to_read, sizeof(struct USERID_PASSWORD), num, ptr);

    for (int i = 0; i < num; i++)
    {
        strcpy(usernames[i], database_to_read[i].username);
        strcpy(passwords[i], database_to_read[i].password);
        
        printf("Username %d: %s\n", i+1, usernames[i]);
        printf("Password %d: %s\n", i+1, passwords[i]);
        printf("\n");
    }
    
    // for (int i = 0; i < num; i++)
    // {
    //     fread(&data, sizeof(struct USERID_PASSWORD), 1, ptr);
    //     usernames[i] = *data.username;
    //     passwords[i] = *data.password;

    //     printf("Username %d: %s\n", i+1, data.username);
    //     printf("Password %d: %s\n", i+1, data.password);
    //     printf("\n");
    // }

    fclose(ptr);
    printf("Data read successfully\n");
}