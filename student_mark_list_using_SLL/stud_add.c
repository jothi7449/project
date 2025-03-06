#include"header.c"
int i=0;
void add_new_record(st** ptr)
{
	green
i++;
st* temp;
temp=(st*)malloc(sizeof(st)); green
sp printf("ENTER THE:NAME :PERCENTAGE\n"); nor
sf("%s %f",temp->name,&temp->mark);
temp->roll=i;
if(temp->mark>101)
{
	blue
  sp pf("enter percentage leess than 100\n");nor
	sleep(1);
	return ;
}

if(*ptr == 0)
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else
	{
		st *last = *ptr;
		while(last->next != 0)
		last = last->next;

		temp->next = last->next;
		last->next = temp;
	}

}


