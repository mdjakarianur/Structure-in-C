/*
    Create a structure named student. Store information for a students about the student's name, id, marks in physics, marks in math, marks in chemistry.
    Add all those 3 courses marks. Print the student's name, id and total marks in the output.c
*/
#include <stdio.h>
struct student
{
    char name[100];
    int id;
    float phy, che, mat;
};
struct student s[2];
int main()
{
    int i;
    printf("Enter Name, Id, Physics, Chemistry, and Math Marks: \n");
    for (i = 0; i < 2; i++) {
        scanf("%s %d %f %f %f", s[i].name, &s[i].id, &s[i].phy, &s[i].che, &s[i].mat);
    }
    printf("\nStudent Information:\n");
    for (i = 0; i < 2; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Id: %d\n", s[i].id);
        printf("Total: %.2f\n", s[i].phy + s[i].che + s[i].mat);
    }
    return 0;
}