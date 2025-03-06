                                                // pliminory things 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define pf printf
#define sf scanf
typedef struct student
{
int roll;
char name[200];
float mark;
struct student *next;//selfe referential structure pointer 
}st;


                                                 //functions diclration 
void add_new_record(st**);
void delete_all(st**);
void delete(st**,int);
void delete_char(st** ptr,char*p);

void sort_num(st*);
void sort_name(st*);
void sort_mark(st*);

void modify_roll(st** ptr,int a);
void modify_name(st**,char* p);
void modify_percentage(st**,float mrk );
                    
void print(st*);
void rev_print(st*);
void save(st*);

void menu();
void menu1();
void menu2();
void menu3();
void menu4();

void sad();
void happy();
void p1();
//********************************************************background colour******************************************************************
#define  nor pf("\e[0m");
#define  black_b pf("\e[40m");
#define  red_b pf("\e[41m");
#define  green_b pf("\e[42m");
#define  yellow_b pf("\e[43m");
#define  blue_b pf("\e[44m");


//*****************************************************normal colour***************************************************************************


#define  black pf("\e[0;30m");
#define  blue pf("\e[1;34m");
#define  green pf("\e[1;32m");
#define  yellow pf("\e[1;33m");
#define  red pf("\e[1;31m");
//*********************************************************************************************************************************************
#define sp pf("		       			");
