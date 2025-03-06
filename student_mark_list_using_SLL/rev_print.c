#include"header.c"
void rev_print(st* ptr)
{ 
       green
 if(ptr!=0)
 {
 rev_print(ptr->next);
      sp pf("[%d]		%s		%f\n",ptr->roll,ptr->name,ptr->mark);
 }
}
