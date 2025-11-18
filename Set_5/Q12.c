// QUESTION

//  Implement a student database with 5 students, each having name, roll no, and CGPA so far stored using struct. Take a roll number as input from the user and print the corresponding CGPA. You may assume that the student database exists in an array (in main). You should pass the array to a function for searching the student, and if found, return the CGPA.

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int roll;
    float CGPA;
};

float findCGPA(struct Student *students, int size, int roll)
{
    for (int i = 0; i < size; i++)
    {
        if (students[i].roll == roll)
        {
            return students[i].CGPA;
        }
    }

    return -1;
}

void main()
{
    struct Student students[5] = {{"Arya", 1, 8.5},
                                  {"Soham", 2, 8},
                                  {"Khushant", 3, 8.2},
                                  {"Krishna", 4, 8.7},
                                  {"Ananya", 5, 8.1}};

    int roll;
    printf("Enter roll number of student: ");
    scanf("%d", &roll);
    printf("\n");

    float CGPA = findCGPA(students, 5, roll);

    if (CGPA == -1)
    {
        printf("Roll number %d does not exist", roll);
    }
    else
    {
        printf("CGPA of roll %d: %0.2f", roll, CGPA);
    }

    // while (students[i].name != NULL)
    // {
    //     printf("Name %d: %s\n", i+1, students[i].name);
    //     printf("Roll %d: %d\n", i+1, students[i].roll);
    //     printf("CGPA %d: %f\n", i+1, students[i].CGPA);
    //     i++;
    // }
}