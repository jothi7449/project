#include"header.c"

void delete_all(st** ptr)
{  st*temp=*ptr;

       char dlt;
       system("clear");
       red
     sp pf("sure you want to delet[y/n]:");
      while(1)
      {
	      sf(" %c",&dlt);
      switch(dlt)
      { 
case'y':
case'Y':	
         //	st*temp=*ptr;
		while(*ptr!=0)
		{
		*ptr=temp->next;
		free(temp);
		temp=*ptr;
		}
		pf("						your data sucessfully deleted :");
	        break;

default: pf("invalid option\n");
	 break;
      
      }break;
}
}
