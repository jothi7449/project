#include"header.c"
void print(st* ptr)
{ 
	st* a=ptr;
		p1();
        while(ptr!=0)
        {
green  sp  printf("[%d]		%s		%f\n",ptr->roll,ptr->name,ptr->mark);nor
        ptr=ptr->next;
        }
	if(a==0)
	{  
	   system("clear");
red	sp  pf("  DATA UNAVALIABLE                      \n");nor blue
	sp  pf("  PLEASE ENTER THE RECORD:              \n");nor blue 
	sp  pf("  PRESS ENTER AND SELECT OPTION:[A/a]   \n\n");nor
	sad();
	}
}
void menu()
{   
    blue
    //red
    black_b
        
pf("\n					.___________________________________________.\n"
   "					|*********STUDEN RECORD  MANU***************|\n"
   "					|a/A :add new record                        |\n"
   "					|d/D :delete record                         |\n"
   "					|s/S:show the list                          |\n"
   "					|m/M :modify  record                        |\n"
   "					|v/V :save                                  |\n"
   "					|e/E :exit                                  |\n"
   "					|t/T :sort the list                         |\n"
   "					|l/L :delete all the records                |\n"
   "					|r/R :reverce the list                      |\n"
   "					|                                           |\n"
   "					|___________________________________________|\n"
   "					|Enter Your choice :                        |\n"
   "					|___________________________________________|\n\033[0m");nor


}
void p1()
{
	//red_b 
	//yello
sp	blue
        pf("ROLL 		NAME		PERSENTAGE\n");nor
}


void menu1()
{
      black_b
      //red_b
     // blue_b
     // yellow_b  
      //red
      blue
pf("					._________________________________.\n"
   "					|                                 |\n"
   "					| [R/r]:ENTER THE ROLL TO DELETE  |\n"
   "					| [N/n]:ENTER NAME TO DELETE      |\n"
   "					|_________________________________|\n");
      nor
}



void menu2()
{
	 black_b blue
     
pf("					.___________________________________.\n"
   "					|                                   |\n"
   "					| [R/r]:TO ROLL TO MODIFY BASED     |\n"
   "					| [N/n]:TO NAME TO MODIFY BASED     |\n"
   "					| [P/p]:TO PERCENTAGE BASED         |\n"
   "					|___________________________________|\n");
      nor
}

void menu3()
{
	
    black_b blue
      
pf("					._________________________________.\n"
   "					|                                 |\n"
   "					| [S/s]:SAVE AND EXIT             |\n"
   "					| [E/e]:EXIT WITHOUT SAVING       |\n"
   "					|_________________________________|\n");
      
      nor
}
void menu4()
{
	 black_b blue
      
pf("					._________________________________.\n"
   "					|                                 |\n"
   "					| [r/R]:SORT WITH ROLL            |\n"
   "					| [N/n]:SORT WITH NAME            |\n"
   "					| [P/p]:SORT WITH PERCENTAGE      |\n"
   "					|_________________________________|\n");
   
     nor
}





//************************************************************************************************************************************
void sad()
{ 
       yellow 
pf("							⣠⡭⠥⠐⠒⠒⠒⠒⠂⠤⢤⣀⠀       \n"
  "					    ⠀⠀⠀   ⠀⢀⣤⠖⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠲⣤⡀⠀⠀⠀⠀⠀\n"
  "⠀					       ⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠀⠀⠀⠀⠈⠙⢦⡀⠀⠀ \n"
  "⠀				    	       ⠀⢠⠟⠀⠀⠀⠀⠀⣠⣤⣤⡀⠀⠀⠀⠀⠀⣤⣤⣄⠀⠀⠀⠀⠈⠻⡄⠀⠀\n"
  "				               ⣠⠋⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⣼⣿⣿⣿⠀⠀⠀⠀⠀⠀⠹⣄ \n"
  "					      ⠀⡏⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡟⠀⠀⠀⠀⢻⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⢹ \n"
  "				              ⢰⠀⠀⠀⠀⠀⠀⠀⠀⠙⠛⠛⠀⠀⠀⠀⠀⠀⠛⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⡆\n"
  "					      ⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⣤⣤⣤⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇\n"
  "					      ⠸⠀⠀⠀⠀⠀⠀⠀⣠⣴⡿⠟⠛⠋⠉⠉⠙⠛⠻⢷⣦⣄⠀⠀⠀⠀⠀⠀⠀⠇\n"
  "					      ⠀⣇⠀⠀⠀⠀⢀⣼⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣷⡀⠀⠀⠀⠀⣸⠀\n"
  "				              ⠀⠘⣆⠀⠒⠲⣾⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢘⡷⠖⠒⠀⣰⠃⠀\n"
  "⠀				       	        ⠘⣦⡀⠀⠈⠳⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠺⠁⠀⠀⣴⠃⠀⠀\n"
  "⠀					         ⠈⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠁⠀⠀⠀\n"
  "						   ⠈⠛⠦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠴⠛      \n" 
  "						       ⠉⠓⠒⠠⠤⠤⠤⠤⠄⠒⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
       puts("");
      nor
}


void happy()
{ blue
                         sp puts("good bye ");
pf("                                    .___________________________________.\n"
   "                                    |                                   |\n"
   "                                    |          M. MOUNA JOTHI           |\n"
   "                                    |              V24CE2M5             |\n"
   "                                    |                                   |\n"
   "                                    |___________________________________|\n");

sleep(5);
system("clear");


}
