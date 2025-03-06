#include"header.c"
void delete(st** ptr,int a)
{
st* temp=*ptr;//hptruu
st*prv; 
   while(temp!=0)
   {
	if(temp->roll==a)
	{
          if(temp==*ptr)
               *ptr=temp->next;
	  else
	       prv->next=temp->next;
       
             free(temp);
	     temp=NULL;
	   blue sp pf("    ****sucessfully deleted****");

	     return;
	}
	else
	{
         prv=temp;
         temp=temp->next;
	}
        }
       blue sp pf("[DATA IS NOT AVALIABLE]\n");
	sleep(5);
nor}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int c=0;
void delete_char(st** ptr,char *p)
{
	blue

st* temp=*ptr;//hptruu
st*prv;

  while(temp!=0)
   {
        if(strcmp(p,temp->name)==0)
	  c++;
	temp=temp->next;
   }
    if(1<c)
    {
	sp pf("similer names are there:\n");	    
	temp=*ptr;
  	 while(temp!=0)
   	{
       		 if(strcmp(p,temp->name)==0)
        	{
       		  p1();
green  	sp pf("%d		%s		%f\n ",temp->roll,temp->name,temp->mark);
	nor	}
	temp=temp->next;
  	}
       yellow sp pf("ENTER THE ROLL :");int roll;
	sf("%d",&roll);
        delete(ptr,roll);
	nor
       return;
    }
       blue sp pf("[DATA IS NOT AVALIABLE]\n");
	sleep(5);


}
