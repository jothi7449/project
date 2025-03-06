#include"header.c" 
void sort_num(st* ptr) 
{
                     st *i, *j;
                      int temp_roll;
                      char temp_name[200];
                      float temp_mark;

    for (i = ptr; i != NULL; i = i->next) 
    {
        for (j = i->next; j != NULL; j = j->next) 
        {
            if (i->roll > j->roll) 
            {
                temp_roll = i->roll;
                i->roll = j->roll;
                j->roll = temp_roll;

                strcpy(temp_name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, temp_name);

                temp_mark = i->mark;
                i->mark = j->mark;
                j->mark = temp_mark;
            }
        }
    }
}



void sort_name(st*ptr) 
{                    
                      st *i, *j;
                      int temp_roll;
                      char temp_name[200];
                      float temp_mark;

    for (i = ptr; i != NULL; i = i->next) 
    {
        for (j = i->next; j != NULL; j = j->next) 
        {
            if (strcmp(i->name, j->name) > 0) 
            { 
                temp_roll = i->roll;
                i->roll = j->roll;
                j->roll = temp_roll;

                strcpy(temp_name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, temp_name);

                temp_mark = i->mark;
                i->mark = j->mark;
                j->mark = temp_mark;
            }
        }
    }
}



void sort_mark(st*ptr) 
{                   
            	      st *i, *j;
                      int temp_roll;
                      char temp_name[200];
                      float temp_mark;

    for (i =ptr; i != NULL; i = i->next) 
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->mark > j->mark) 
            { 
                temp_roll = i->roll;
                i->roll = j->roll;
                j->roll = temp_roll;

                strcpy(temp_name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, temp_name);

                temp_mark = i->mark;
                i->mark = j->mark;
                j->mark = temp_mark;
            }
        }
    }
}
