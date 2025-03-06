#include"header.c"
void save(st* ptr)
{
	FILE *fp = fopen("student.txt","w");
	while(ptr != 0)
	{
		fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
		ptr = ptr->next;green
		    
		    
		    sp pf("loading your data...\n");
	            sleep(1);
	}blue
	sp pf("YOUR DATA SAVED \n");nor
	sleep(1);

}
