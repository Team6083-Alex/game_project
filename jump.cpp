#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
	char input;                                                                                    //define
	char plate[3][20];
	srand(time(NULL));
	int pos,spawn,move=0,score=0,inputNum;
	int t_pos=0,tree_pos=0,tr_pos=0,t_height,tree_height,tr_height;
	cout<<"Press Any Key To START"<<endl;
	do
	{                                                                                              //game start
	input=getch();                                                                                 //read keyboard
	inputNum=input;
	
	
		for(int i0=0;i0<=19;i0++)                                                                  //reset game plate
		{
			plate[0][i0]=' ';
			plate[1][i0]=' ';
			plate[2][i0]=' ';
		}
		
		
		spawn=rand()%3;                                                                            //random tree spawn
		if(t_pos == 0)
		{
		t_height=(rand()%5+1)%3;
	}
	if(tree_pos == 0)
	{
		tree_height=(rand()%5+1)%3;
	}
	if(tr_pos == 0)
	{
		tr_height=(rand()%5+1)%3;	
	}
		if(t_height==0)
		{
			t_height=3;
		}
		if(tree_height==0)
		{
			tree_height=3;
		}
		if(tr_height==0)
		{
			tr_height=3;
		}
		
		system("cls");                                                                             //clean the screen
		
		if(inputNum==32)
		{                                                                                          //jump or not
			if(pos==3)
			{
				move=2;
				pos=2;
			}else if(move==2&&pos==0)
			{
				move=0;
			}else if(pos==0&&move==0)
			{
				move=1;
				pos=1;
			}else if(move==1)
			{
				pos++;
			}else if(move==2)
			{
				pos--;
			}
		}else
		{
			if(pos==3)
			{
				move=2;
				pos=2;
			}else if(move==2&&pos==0)
			{
				move=0;
			}else if(move==1)
			{
				pos++;
			}else if(move==2)
			{
				pos--;
			}
		}
		
		
		if(spawn==0&&t_pos==0&&tr_pos<=14)
		{                                                                                          //spawn tree
			t_pos=21;
		}else if(spawn==0&&tree_pos==0&&t_pos<=14)
		{
			tree_pos=21;
		}else if(spawn==0&&tr_pos==0&&tree_pos<=14&&t_pos<=14)
		{
			tr_pos=21;
		}
		
		
		if(t_pos>0)                                                                                //moving tree
		{
		t_pos--;
	}else
	{
		t_pos=0;
	}
	if(tree_pos>0)
	{
		tree_pos--;
	}else
	{
		tree_pos=0;
	}
	if(tr_pos>0)
	{
		tr_pos--;
	}else
	{
		tr_pos=0;
	}
	
	
	if(pos==1)
	{                                                                                              //our position
		plate[1][5]='O';
	}else if(pos==0)
	{
		plate[0][5]='O';
	}
	
	
		if(pos==3)                                                                                 //line 4 move
		{
			cout<<"     O              "<<endl; 
		}else 
		{
			cout<<"                    "<<endl;
		}
		
		
		if(t_pos!=0)                                                                               //tree show
		{
		if(t_height==3)
		{
			plate[2][t_pos]='x';
		}
		if(t_height>=2)
		{
			plate[1][t_pos]='x';
		}
		if(t_height>=1)
		{
			plate[0][t_pos]='x';
		}
	}
	if(tree_pos!=0)
	{
	if(tree_height==3)
	{
			plate[2][tree_pos]='x';
		}
		if(tree_height>=2)
		{
			plate[1][tree_pos]='x';
		}
		if(tree_height>=1)
		{
			plate[0][tree_pos]='x';
		}
	}	
	if(tr_pos!=0)
	{
		if(tr_height==3)
		{
			plate[2][tr_pos]='x';
		}
		if(tr_height>=2)
		{
			plate[1][tr_pos]='x';
		}
		if(tr_height>=1)
		{
			plate[0][tr_pos]='x';
		}
	}
	
	
		for(int i4=0;i4<=19;i4++)                                                                //line 3 show
			{
				if(i4==5&&pos==2)
				{
					cout<<"O";
				}else if(plate[2][i4]=='x')
				{
				cout<<"x";
			}else 
			{
				cout<<" ";
			}
			}	
			cout<<" "<<endl; 
		
		
			for(int i=0;i<=19;i++)                                                                //line 2 show
			{
				if(i==5&&pos==1)
				{
					cout<<"O";
				}else if(plate[1][i]=='x')
				{
				cout<<"x";
			}else 
			{
				cout<<" ";
			}
			}	
			cout<<" "<<endl;      
			
			                                                           
			for(int i2=0;i2<=19;i2++)                                                              //line 1 show
			{
				if(i2==5&&pos==0)
				{
					cout<<"O";
				}else if(plate[0][i2]=='x')
				{
				cout<<"x";
			}else 
			{
				cout<<" ";
			}
			}
			cout<<" "<<endl;
			
			
				for(int i3=0;i3<=9;i3++)                                                           //base show
				{                                               
				cout<<"_ ";
			}
			cout<<" "<<endl;
			
			
			score+=10;                                                                             //score & others
			cout<<"score: "<<score<<endl; 
			cout<<" "<<endl;
			cout<<"Jump:[Space] Else:Other Key"<<endl;
			_sleep(500);
		/*	cout<<""<<endl;                                                                        //debug use
			cout<<""<<endl;
			cout<<"tree1_pos"<<t_pos<<endl;
			cout<<"tree1_height"<<t_height<<endl;
			cout<<"tree2_pos"<<tree_pos<<endl;
			cout<<"tree2_height"<<tree_height<<endl;
			cout<<"tree3_pos"<<tr_pos<<endl;
			cout<<"tree3_height"<<tr_height<<endl;*/
	}while(plate[pos][5]!='x');
	
	
	cout<<"                    "<<endl;                                                           //exit game and show the last scene           
	cout<<"                    "<<endl;
	
		cout<<"score: "<<score<<endl; 
	system("pause");
	return 0;
} 

