#include"header.c"
int main()
{
        st* hptr=0;
        char op;
	char dle;
	int num;
	char modify;
	char exiting;
	char sort;
	int modroll;
	char modnam[200];
	char nam[200];
	float modmrk;

	
	char op1;

//********************************************** main switch sace********************************************************************
    
        system("clear");
	while(1)
        {

       sp  menu();
        sf(" %c",&op);
        switch(op)
        {
        case 'a':
        case 'A':system("clear");
		do{
                add_new_record(&hptr);
		blue 
		sp pf("DO YOU WANT ADD AGAIN  :[a/n]\n"); nor
		sf(" %c",&op1);
		}while((op1=='a')||(op1=='A'));
                break;
        case 's':
        case 'S':
                print(hptr);
	      
			
      red sp pf("press enter to clear the screan :");nor
		getchar();
		
                break;
        case 'r':
        case 'R':
		p1();
                rev_print(hptr);
  red sp  pf("press enter to clear the screan :");nor 
		getchar();
                break;
	case'L':
	case'l':
		delete_all(&hptr);
		break;

//********************************************** delete switch case ******************************************************************

	case'D':
        case'd': 
		system("clear");
		//rev_print(hptr);
                menu1();		
		sf(" %c",&dle);
		switch(dle)
		{
                case'R':
		case'r':
		red  sp pf("enter num:");nor
            		sf("%d",&num);
                        delete(&hptr,num);
			break;
                case'N':
		case'n':
		    red  sp pf("enter name:");nor
	          	sf("%s",nam);
                        delete_char(&hptr,nam);
                        break;nor
		}break;

//********************************************** exiting switch case *****************************************************************

	case'e':
	case'E': 
		system("clear");
		menu3();
		sf(" %c",&exiting);
	      	switch(exiting)
		{
           	case'S':
		case's': 
	 		save(hptr);
	        	system("clear");
	                happy();	 
	                exit(0);
		        break;
		case'E':
		case'e':
			system("clear");
                         happy();
                        exit(0);
                        break;

		}break;


//********************************************** sorting switch case *****************************************************************

        case't':
        case'T':     
		system("clear");
                menu4();
               // print(hptr);
                sf(" %c",&sort);
                     switch(sort)
                     {
                     case'r':
                     case'R':
		         red sp pf("storted oder: \n");nor
                              sort_num(hptr);
			      print(hptr);
			    
				     sleep(5);
                              break;
                     case'N':
                     case'n':red
		         red sp pf("storted oder: \n");nor
                                sort_name(hptr);
				print(hptr);
				 sort_num(hptr);
				  sleep(5); 
		    
                              break;
                     case'p':
                     case'P':
		        red sp pf("storted oder: \n");nor
                              sort_mark(hptr);
			    blue
		              rev_print(hptr);
			     sort_num(hptr);
			    nor
			      sleep(5);
			      break;
                     }
		     system("clear");
		     break;

//********************************************** modify switch case *****************************************************************
             
	case'm':
	case'M':
		system("clear");
		 menu2();
		// print(hptr);
		 sf(" %c",&modify);
                     switch(modify)
                     {
                     case'r':
                     case'R':
			     print(hptr);
                      red sp pf("WHICH ROLL NUMBER YOU WANT TO MODIFY:");nor
                        sf("%d",&modroll);
                        modify_roll(&hptr,modroll);
                        break;
                        case'N':
                        case'n':
			     print(hptr);
                     red sp  pf("ENTER NAME:");nor
                        sf("%s",modnam);
                        modify_name(&hptr,modnam);
                        break;
                     case'p':
                     case'P':
			      print(hptr);
                     red  sp  pf("ENTER PERCENTAGE:"); nor
                        sf("%f",&modmrk);
                        modify_percentage(&hptr,modmrk);
                        break;
                     }break;


//********************************************** save  switch case   *****************************************************************
        case'v':
        case'V':
		 save(hptr);
		 break;

	default:green
	       sp pf("ENTER VALID KEY:\n");
		sleep(1);
        }
	getchar();
        system("clear");
        }

}

                                                                                                                         

