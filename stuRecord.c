/*
Program: Simple student record management tool to allow addition to, searching, changing and removal of entries containing ID number, name and subjects
Author: Alison Gleeson
Date created: 25/07/2024
Date updated: 26/07/2024
*/


#include <stdio.h>
#include <string.h>

#define NAME 20
#define ID 8
#define SUBJECTS 18

struct subjects
{
    char sub1[SUBJECTS];
    float sub1grade;
    char sub2[SUBJECTS];
    float sub2grade;
    char sub3[SUBJECTS];
    float sub3grade;
    char sub4[SUBJECTS];
    float sub4grade;
    char sub5[SUBJECTS];
    float sub5grade;
    char sub7[SUBJECTS];
    float sub7grade;
};

struct stu_rec
{
    char firstname[NAME];
    char surname[NAME];
    char stuID[ID]; //structure = cciiiiii (initials, year of start, year of end e.g. AG201723)
    int firstYear;
    int finalYear;
    struct subjects SUB;
};

void enter(struct stu_rec*);
void display(struct stu_rec);


int main()
{

    struct stu_rec student;
    char cont = 'y';
    int decision;


    //welcome message
    printf("\n*************************************");
    printf("\n**                                 **");
    printf("\n** Welcome to the student manager! **");
    printf("\n**                                 **");
    printf("\n*************************************");
    printf("\n\nWhat would you like to do today?");


    //do while to allow to multiple changes to records
    do 
    {
        printf("\n\n1. Display the record \n2. Add a student \n3. Search the records \n4. Change the record \n5. Remove a student");
        printf("\nPlease enter the number of your decision: ");
        scanf("%d", &decision);
    }
    while (cont == 'y');


    return 0;

} //end main()