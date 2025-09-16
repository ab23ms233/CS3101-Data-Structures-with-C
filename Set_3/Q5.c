// QUESTION
// Write a program to assign teams (one for the Females and another for the Males) to students for the annual sports meet based on the criteria below, with an appropriate decision-making structure (e.g., if-else-if). You should ask for the Roll Number (an integer) and Gender (a character – M/F; declared as char and read using “%c”) as input from the terminal and print the Team Name for the student.

#include <stdio.h>
#include <ctype.h>

void main()
{
    int roll;
    char gender;
    const char *team;

    printf("Enter roll numnber: ");
    scanf("%d", &roll);
    printf("Enter gender (M/F): ");
    scanf("%c", &gender);

    gender = tolower(gender);

    if (gender == 'f')
    {
        if (1 <= roll <= 25)
        {
            team = 'Mary Kom Smashers';
        }
        else if (26 <= roll <= 50)
        {
            team = 'Smriti Mandana Dashers';
        }
        else
        {
            team = 'Manu Bhaker Snipers';
        }
    }
    else if (gender == 'm')
    {
        if (1 <= roll <= 20)
        {
            team = 'Virat Kohli Challengers';
        }
        else if (21 <= roll <= 40)
        {
            team = 'R Praggnanandhaa Combaters';
        }
        else
        {
            team = 'Neeraj Chopra Warriors';
        }
    }
    else
    {
        team = "Wrong Input";
    }

    printf("Team: %s", team);
}
