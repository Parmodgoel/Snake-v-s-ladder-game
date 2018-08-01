#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void display();
int dice();
int input_of_dice();
int test(int);
int main()
{
display();	
int pointer=0;
int pointer_final=0;
int p_last=0;
int t=1;
int hello;

int c_pointer=0;
int c_pointer_final=0;
int c_p_last=0;

	while(1)
{

if(t=1){
	first: ;
	                            if(c_pointer==100 || pointer==100){
	                                                              	break;}
								
	                                
	
	
 			cout<<"\n"<<"YOU:";
 			int d=input_of_dice();
	      
			
			if(d==6 && pointer==0){
								cout<<"You entered the game and now throw the dice again";
								d=input_of_dice();
								pointer =pointer+d;
								pointer_final=test(pointer);
								cout<<"your current position is "<<pointer_final;
								pointer=pointer_final;
								cout<<"\n"<<"Now its computer turn ";
								cout<<"\n";
								t=0;
						    	goto second;     
								
		                       	}  
		                       	
		    else if(d!=6 && pointer==0){
										cout<<"To enter the game to must got no. 6 on dice";
										cout<<"\n"<<"Now its computer turn ";
										t=0;
										cout<<"\n";
								        goto second;              
										} 
			
			else if(d==6 && pointer!=0 ){
										cout<<"Now throw the dice again";
										d=input_of_dice();
										p_last=pointer;
										pointer =pointer+d+6;
										pointer_final=test(pointer);
										if(pointer_final>100){pointer=p_last;
										                     cout<<"your current position is same "<<pointer_final;
										                        cout<<"\n"<<"Now its computer turn ";
										      					t=0;
										      					cout<<"\n";
																goto second;     }
										else{
										cout<<"your current position is "<<pointer_final;
										pointer=pointer_final;
										
										if(pointer!=100)
										cout<<"\n"<<"Now its computer turn ";
										t=0;
										cout<<"\n";
										goto second;     
									       }
				                      }                  
									  
			else if(d!=6 && pointer!=0)	{p_last=pointer;
										pointer =pointer+d;
										pointer_final=test(pointer);
										if(pointer_final>100){
									                       	pointer=p_last;
									                       	cout<<"your current position is same "<<pointer_final;
															cout<<"\n"<<"Now its computer turn ";
															t=0;
															cout<<"\n";
															goto second;     }
										else{
										cout<<"your current position is "<<pointer_final;
										pointer=pointer_final;
										
										if(pointer!=100)
								    	cout<<"\n"<<"Now its computer turn ";
										t=0;
										cout<<"\n";
										goto second;      
									       }
		                               	}	
			       
					}          

else if(t=0){second: ;

                 	                            if(c_pointer==100 || pointer==100){
	                                                              	break;}	
	                                                              	
 			cout<<"\n"<<"COMPUTER:";
 			int d=input_of_dice();
	      
			
			if(d==6 && c_pointer==0){
								cout<<"computer's entered the game and now throw the dice again";
								d=input_of_dice();
								c_pointer =c_pointer+d;
								c_pointer_final=test(c_pointer);
								cout<<"computer's current position is "<<c_pointer_final;
								c_pointer=c_pointer_final;
								cout<<"\n"<<"Now its your turn ";
								t=1;
								cout<<"\n";
								goto first;
								
		                       	}  
		                       	
		    else if(d!=6 && c_pointer==0){
										cout<<"To enter the game to must got no. 6 on dice";
										cout<<"\n"<<"Now its your turn ";
										t=1;
										cout<<"\n";
										goto first;
								                  
										} 
			
			else if(d==6 && c_pointer!=0 ){
										cout<<"Now throw the dice again";
										d=input_of_dice();
										c_p_last=c_pointer;
										c_pointer =c_pointer+d+6;
										c_pointer_final=test(c_pointer);
										if(c_pointer_final>100){c_pointer=p_last;
															cout<<"your current position is same "<<pointer_final;
										                  	cout<<"\n"<<"Now its your turn ";
															t=1;
															cout<<"\n";
															goto first;	}
										else{
										cout<<"computer's current position is "<<c_pointer_final;
										c_pointer=c_pointer_final;
										
										if(c_pointer!=100)
										cout<<"\n"<<"Now its your turn ";
										t=1;
										cout<<"\n";
										goto first;
								
									       }
				                      }                  
									  
			else if(d!=6 && pointer!=0)	{c_p_last=c_pointer;
										c_pointer =c_pointer+d;
										c_pointer_final=test(c_pointer);
										if(c_pointer_final>100){
									                       	c_pointer=c_p_last;
									                       	cout<<"your current position is same"<<pointer_final;
												    		cout<<"\n"<<"Now its your turn ";
															t=1;
															cout<<"\n";
															goto first;	}
										else{
										cout<<"computer's current position is "<<c_pointer_final;
										c_pointer=c_pointer_final;
										
										if(c_pointer!=100)
										cout<<"\n"<<"Now its your turn ";
										t=1;
										cout<<"\n";
										goto first;
								
									       }
		                               	}	
			        	} 
		              
}
if(c_pointer==100){
			cout<<"\n"<<"YOU LOSE";
		}				         
	     else{cout<<"\n"<<"CONGORATULATIONS!YOU WON";
		 } 

return 0;	
}

void display(){
	
	int a[100];
	int count=100;
	for(int i=1;i<=10;i++){
		cout<<"\n"<<"--------------------------------------------------------------------"<<"\n";
		for(int k=count;k>count-10;k--)
		{
		if(k>=10){cout<<k<<"  |  ";}
		
		else if(k<10){cout<<k<<"   |  ";}
		}
		
		cout<<"\n";
		count=count-10;
	}
	cout<<"--------------------------------------------------------------------"<<"\n";
	}
	
int dice()	{
	srand(time(0));
	return rand()%6+1 ;
}

int input_of_dice()
{   int k;
	while(1){
 			cout<<"\n"<<"To roll the dice press zero"<<"\n";
 			int space;
 			cin>>space;
 			if(space==0)
			 {
         	k=dice();
        	cout<<"you rolled a dice "<<"\n";
           	cout<<"no. came ";
     		cout<<k<<"\n";
     		break;
     		 }
     		 else{cout<<"enter the valid input to roll the dice"<<"\n";
     		 	  continue;
			     }
	            }
	           
	 return k;           
}


int test(int p){
	
	        	if(p==8){p=31;}
				else if(p==8){p=31;}
				else if(p==15){p=97;}
				else if(p==42){p=81;}
				else if(p==66){p=87;}
				else if(p==24){p=1;}
				else if(p==55){p=13;}
				else if(p==71){p=29;}
				else if(p==88){p=67;}
				else if(p==99){p=6;}
			
return p;	
	
}


