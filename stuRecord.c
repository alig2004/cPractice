/*
Program: Simple student record management tool to allow addition to, searching, changing and removal of entries containing ID number, name and subjects
Author: Alison Gleeson
Date created: 25/07/2024
Date updated: 25/07/2024
*/


#include <stdio.h>
#include <string.h>

#define NAME 20
#define ID 8
#define SUBJECTS 18

struct Subjects
{

};

struct stu_rec
{
    char firstname[NAME];
    char surname[NAME];
    char stuID[ID]; //structure = cciiiiii (initials, year of start, year of end e.g. AG201723)
    int firstYear;
    int finalYear;
    //struct Subjects;
};