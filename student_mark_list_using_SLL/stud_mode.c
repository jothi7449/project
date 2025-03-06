#include"header.c"
void modify_roll(st** ptr,int a)
{
	yellow
st* temp=*ptr;//hptruu
   while(temp!=0)
   {
        if(temp->roll == a)
        {
             temp->roll=a;
          char o;
          sp  pf("NAME OR PERCENTAGE[N/P] \n");
          sf(" %c",&o);
          if((o=='n')||(o=='N'))
          {
            sp pf("ENTER THE NEW NAME:: ");
            sf("%s", temp->name);
	    green sp pf("NEW NAME UPDATED\n"); yellow
	    sleep(3);
          }
          if((o=='p')||(o=='P'))
          {
           sp pf("ENTER THE PERCENTAGE: ");
            sf("%f",&temp->mark);
	green  sp pf("NEW PERCENTAGE UPDATED\n"); yellow
	    sleep(3);
          }
             return;
        }
         temp=temp->next;
   }
     blue sp puts("[DATA IS NOT AVALIABLE]\n");
     sleep(5);
     system("clear");
nor
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void modify_name(st** ptr,char *p)
{
	yellow 
    st *temp = *ptr;
    int count = 0;
    while (temp != NULL) 
    {
        if (strcmp(temp->name, p) == 0) 
        {
            count++;
        }
        temp = temp->next;
    }
  // green sp puts("your enterd data is only one time there:");yellow

    if (count > 1) 
    {  
    red sp  pf("Similar names exist\n");
        temp = *ptr;
        while (temp != NULL) 
        {  
            if (strcmp(temp->name, p) == 0)
            {
              sp pf("Roll No: %d, Name: %s, Marks: %.f\n", temp->roll, temp->name, temp->mark);
            }
            temp = temp->next;
        }
       sp pf("ENTER ROLL: ");
        int num;
        sf("%d", &num);
        modify_roll(ptr,num);
        return;
    }

    temp = *ptr;  
    while (temp != NULL)
    {
        if (strcmp(temp->name, p) == 0) 
        { 
           char o;
	  sp  pf("NAME OR PERCENTAGE[N/P] \n");
	  sf(" %c",&o);
	  if((o=='n')||(o=='N'))
	  {
           sp pf("ENTER THE NEW NAME:\n ");
            sf("%s", temp->name);
	   green sp pf("NEW NAME UPDATED\n"); yellow
	  }
	  if((o=='p')||(o=='P'))
	  {
           sp  pf("ENTER THE PERCENTAGE:\n ");
            sf("%f",&temp->mark);
     green  sp pf("NEW PERCENTAGE UPDATED\n"); yellow
	    sleep(3);
	  }
            return;
        }
        temp = temp->next;
    }
    system("clear");
  blue  sp pf("Data is unavailable\n"); 
     sleep(5);
    nor
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void modify_percentage(st** ptr,float mrk)
{
	yellow
    st* temp = *ptr;
  	int found =0;
 yellow  sp pf("----------------------------------------------------\n");
 blue   sp pf("ALL %.2f PERCENTAGE ARE                             :\n", mrk);
 yellow  sp pf("----------------------------------------------------\n");
    while (temp != NULL)
    {
        if (temp->mark == mrk)
        {
            found = 1;
       green sp  pf("ROLL : [%d]  NAME: [%s] PERCENTAGE: [%.2f]\n", temp->roll, temp->name, temp->mark); yellow
        }
        temp = temp->next;
    }

    if (!found)
    {
    blue  sp pf("[NO MATCH FOUND]\n");yellow
        sleep(5);
        return;
    }
    
    int num;
    sp pf("ENTER ROLL :\n ");
    sf("%d", &num);
    temp = *ptr;
    while(temp != 0)
    {
        if(temp->roll==num)
        {
            float mrk;
          sp pf("ENTER NEW PERCENTAGE : ");
            sf("%f", &mrk);
            temp->mark =mrk; 
     blue  sp  pf("[PERCENTAGE UPDATED SUCCESSFULLY]\n");yellow

            return;
        }
        temp = temp->next;
    }
blue  sp pf("[ROLL NUMBER NOT FOUND]\n");
    sleep(5);
    nor
}
