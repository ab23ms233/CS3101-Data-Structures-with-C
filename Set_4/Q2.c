// QUESTION

// Implement a login interface using a do-while loop, asking a person his/her username and password, and allowing access in case of successful authentication. Assume that you have a known list of usernames in an array: UserNames, and the corresponding passwords (in the same order) in another array: Passwords. That is, array element UserName[i] corresponds to array element Passwords[i]. 

// Once the person inputs the username, search for the same in UserNames, and if it matches an element in UserNames, ask for the password, which you search in Passwords. You may use the code of “linear search” on slide number 23 of “Loops” on the WeLearn page for the course.

// If the username and password match, print a message ‘Welcome!’ In case of a mismatch, print an appropriate message and ask if the person wants to continue; if yes, ask for the username and password again; else, terminate the loop.

// Note: You may assume that both the username and passwords are integers. In the later versions, you should be able to consider strings.

#include <stdio.h>

void main() {
    int UserNames[5] = {101, 102, 103, 104, 105};
    int Passwords[5] = {2, 3, 4, 5, 6};
    int i = 0; 

    int username, password;

    do {
        printf("Enter username: ");
        scanf("%d", &username);
    }

    while (i < 5) {
        if (UserNames[i] == username) {
            printf("Enter password");
            scanf("%d", &password);

            if (Passwords[i] == password)
        }
    }
    
}