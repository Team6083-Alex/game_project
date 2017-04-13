#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	char sign[9]={0};
	int atk,pos,mode=0;
	bool exit=false;
	srand(time(NULL));
	atk=rand()%2;
	for(int round=1;round<=9;round++){
		system("cls");
		cout<<"Round: "<<round<<endl;
		cout<<" "<<endl;
		cout<<sign[0]<<"|"<<sign[1]<<"|"<<sign[2]<<endl;
		cout<<"_____"<<endl;
		cout<<sign[3]<<"|"<<sign[4]<<"|"<<sign[5]<<endl;
		cout<<"_____"<<endl;
		cout<<sign[6]<<"|"<<sign[7]<<"|"<<sign[8]<<endl;
		cout<<""<<endl;
		if(atk==0){
			cout<<"cpu's turn"<<endl;
			_sleep(2000);
		
			if(sign[1]=='X'&&sign[2]=='X'){
			if(sign[0]!=0){
			}else{
				pos=0;
			}
			}else if (sign[3]=='X'&&sign[6]=='X'){
				if(sign[0]!=0){
			}else{
				pos=0;
			}
			}else if (sign[4]=='X'&&sign[8]=='X'){
				if(sign[0]!=0){
			}else{
				pos=0;
			}
			}else if (sign[0]=='X'&&sign[2]=='X'){
				if(sign[1]!=0){
			}else{
				pos=1;
			}
			}else if (sign[4]=='X'&&sign[7]=='X'){
				if(sign[1]!=0){
			}else{
				pos=1;
			}
			}else if (sign[0]=='X'&&sign[1]=='X'){
				if(sign[2]!=0){
			}else{
				pos=2;
			}
			}else if (sign[5]=='X'&&sign[8]=='X'){
				if(sign[2]!=0){
			}else{
				pos=2;
			}
			}else if (sign[4]=='X'&&sign[6]=='X'){
				if(sign[2]!=0){
			}else{
				pos=2;
			}
			}else if (sign[4]=='X'&&sign[5]=='X'){
				if(sign[3]!=0){
			}else{
				pos=3;
			}
			}else if (sign[0]=='X'&&sign[6]=='X'){
				if(sign[3]!=0){
			}else{
				pos=3;
			}
			}else if (sign[3]=='X'&&sign[5]=='X'){
				if(sign[4]!=0){
			}else{
				pos=4;
			}
			}else if (sign[1]=='X'&&sign[7]=='X'){
				if(sign[4]!=0){
			}else{
				pos=4;
			}
			}else if (sign[0]=='X'&&sign[8]=='X'){
				if(sign[4]!=0){
			}else{
				pos=4;
			}
			}else if (sign[2]=='X'&&sign[6]=='X'){
				if(sign[4]!=0){
			}else{
				pos=4;
			}
			}else if (sign[3]=='X'&&sign[4]=='X'){
				if(sign[5]!=0){
			}else{
				pos=5;
			}
			}else if (sign[2]=='X'&&sign[8]=='X'){
				if(sign[5]!=0){
			}else{
				pos=5;
			}
			}else if (sign[0]=='X'&&sign[3]=='X'){
				if(sign[6]!=0){
			}else{
				pos=6;
			}
			}else if (sign[2]=='X'&&sign[4]=='X'){
				if(sign[6]!=0){
			}else{
				pos=6;
			}
			}else if (sign[7]=='X'&&sign[8]=='X'){
				if(sign[6]!=0){
			}else{
				pos=6;
			}
			}else if (sign[1]=='X'&&sign[4]=='X'){
				if(sign[7]!=0){
			}else{
				pos=7;
			}
			}else if (sign[6]=='X'&&sign[8]=='X'){
				if(sign[7]!=0){
			}else{
				pos=7;
			}
			}else if (sign[0]=='X'&&sign[4]=='X'){
				if(sign[8]!=0){
			}else{
				pos=8;
			}
			}else if (sign[2]=='X'&&sign[5]=='X'){
				if(sign[8]!=0){
			}else{
				pos=8;
			}
			}else if (sign[6]=='X'&&sign[7]=='X'){
				if(sign[8]!=0){
			}else{
				pos=8;
			} 
			}else if(sign[1]=='O'&&sign[2]=='O'){
			if(sign[0]!=0){
			}else{
				pos=0;
			}
			}else if (sign[3]=='O'&&sign[6]=='O'){
				if(sign[0]!=0){
			}else{
				pos=0;
			}
			}else if (sign[4]=='O'&&sign[8]=='O'){
				if(sign[0]!=0){
			}else{
				pos=0;
			}
			}else if (sign[0]=='O'&&sign[2]=='O'){
				if(sign[1]!=0){
			}else{
				pos=1;
			}
			}else if (sign[4]=='O'&&sign[7]=='O'){
				if(sign[1]!=0){
			}else{
				pos=1;
			}
			}else if (sign[0]=='O'&&sign[1]=='O'){
				if(sign[2]!=0){
			}else{
				pos=2;
			}
			}else if (sign[5]=='O'&&sign[8]=='O'){
				if(sign[2]!=0){
			}else{
				pos=2;
			}
			}else if (sign[4]=='O'&&sign[6]=='O'){
				if(sign[2]!=0){
			}else{
				pos=2;
			}
			}else if (sign[4]=='O'&&sign[5]=='O'){
				if(sign[3]!=0){
			}else{
				pos=3;
			}
			}else if (sign[0]=='O'&&sign[6]=='O'){
				if(sign[3]!=0){
			}else{
				pos=3;
			}
			}else if (sign[3]=='O'&&sign[5]=='O'){
				if(sign[4]!=0){
			}else{
				pos=4;
			}
			}else if (sign[1]=='O'&&sign[7]=='O'){
				if(sign[4]!=0){
			}else{
				pos=4;
			}
			}else if (sign[0]=='O'&&sign[8]=='O'){
				if(sign[4]!=0){
			}else{
				pos=4;
			}
			}else if (sign[2]=='O'&&sign[6]=='O'){
				if(sign[4]!=0){
			}else{
				pos=4;
			}
			}else if (sign[3]=='O'&&sign[4]=='O'){
				if(sign[5]!=0){
			}else{
				pos=5;
			}
			}else if (sign[2]=='O'&&sign[8]=='O'){
				if(sign[5]!=0){
			}else{
				pos=5;
			}
			}else if (sign[0]=='O'&&sign[3]=='O'){
				if(sign[6]!=0){
			}else{
				pos=6;
			}
			}else if (sign[2]=='O'&&sign[4]=='O'){
				if(sign[6]!=0){
			}else{
				pos=6;
			}
			}else if (sign[7]=='O'&&sign[8]=='O'){
				if(sign[6]!=0){
			}else{
				pos=6;
			}
			}else if (sign[1]=='O'&&sign[4]=='O'){
				if(sign[7]!=0){
			}else{
				pos=7;
			}
			}else if (sign[6]=='O'&&sign[8]=='O'){
				if(sign[7]!=0){
			}else{
				pos=7;
			}
			}else if (sign[0]=='O'&&sign[4]=='O'){
				if(sign[8]!=0){
			}else{
				pos=8;
			}
			}else if (sign[2]=='O'&&sign[5]=='O'){
				if(sign[8]!=0){
			}else{
				pos=8;
			}
			}else if (sign[6]=='O'&&sign[7]=='O'){
				if(sign[8]!=0){
			}else{
				pos=8;
			}
			}else{
				do{
			pos=rand()%9;
		}while(sign[pos]!=0);
			}
			if(sign[pos]!=0){
			do{
			pos=rand()%9;
		}while(sign[pos]!=0);
	}
		sign[pos]='X';
		atk=1;
			_sleep(1000);
		}else if(atk==1){
			cout<<"your turn"<<endl;
			cout<<"enter the position (1~9)"<<endl;
			do{
				cin>>pos;
				if(pos>9||pos<1){
					pos=-1;
					cout<<"error"<<endl;
					cout<<"plz enter again"<<endl;
				}
			}while(sign[pos-1]!=0&&pos==-1);
			sign[pos-1]='O';
			atk=0;
		}
			if(sign[0]=='X'&&sign[1]=='X'&&sign[2]=='X'){
				exit=true;
				mode=1;
			}else if(sign[2]=='X'&&sign[4]=='X'&&sign[6]=='X'){
				exit=true;
				mode=2;
			}else if(sign[3]=='X'&&sign[4]=='X'&&sign[5]=='X'){
				mode=3;
				exit=true;
			}else if(sign[1]=='X'&&sign[4]=='X'&&sign[7]=='X'){
				mode=4;
				exit=true;
			}else if(sign[2]=='X'&&sign[5]=='X'&&sign[8]=='X'){
				mode=5;
				exit=true;
			}else if(sign[0]=='X'&&sign[3]=='X'&&sign[6]=='X'){
				mode=6;
				exit=true;
			}else if(sign[6]=='X'&&sign[7]=='X'&&sign[8]=='X'){
				mode=7;
				exit=true;
			}else if(sign[0]=='X'&&sign[4]=='X'&&sign[8]=='X'){
				mode=8;
				exit=true;
			}else if(sign[0]=='O'&&sign[1]=='O'&&sign[2]=='O'){
				exit=true;
				mode=1;
			}else if(sign[2]=='O'&&sign[4]=='O'&&sign[6]=='O'){
				exit=true;
				mode=2;
			}else if(sign[3]=='O'&&sign[4]=='O'&&sign[5]=='O'){
				mode=3;
				exit=true;
			}else if(sign[1]=='O'&&sign[4]=='O'&&sign[7]=='O'){
				mode=4;
				exit=true;
			}else if(sign[2]=='O'&&sign[5]=='O'&&sign[8]=='O'){
				mode=5;
				exit=true;
			}else if(sign[0]=='O'&&sign[3]=='O'&&sign[6]=='O'){
				mode=6;
				exit=true;
			}else if(sign[6]=='O'&&sign[7]=='O'&&sign[8]=='O'){
				mode=7;
				exit=true;
			}else if(sign[0]=='O'&&sign[4]=='O'&&sign[8]=='O'){
				mode=8;
				exit=true;
			}
		if(exit){
			for(int win=1;win<=8;win++){
				if(mode==win){
					if(sign[win]=='O'){
						system("cls");
						cout<<" "<<endl;
		cout<<sign[0]<<"|"<<sign[1]<<"|"<<sign[2]<<endl;
		cout<<"_____"<<endl;
		cout<<sign[3]<<"|"<<sign[4]<<"|"<<sign[5]<<endl;
		cout<<"_____"<<endl;
		cout<<sign[6]<<"|"<<sign[7]<<"|"<<sign[8]<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
						cout<<"YOU WIN"<<endl;
						return 0;
					}else{
						system("cls");
						cout<<" "<<endl;
		cout<<sign[0]<<"|"<<sign[1]<<"|"<<sign[2]<<endl;
		cout<<"_____"<<endl;
		cout<<sign[3]<<"|"<<sign[4]<<"|"<<sign[5]<<endl;
		cout<<"_____"<<endl;
		cout<<sign[6]<<"|"<<sign[7]<<"|"<<sign[8]<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
						cout<<"CPU WIN"<<endl;
						return 0;
					}
				}
			}
		}
			if(round==9&&mode==0){
				system("cls");
				cout<<" "<<endl;
		cout<<sign[0]<<"|"<<sign[1]<<"|"<<sign[2]<<endl;
		cout<<"_____"<<endl;
		cout<<sign[3]<<"|"<<sign[4]<<"|"<<sign[5]<<endl;
		cout<<"_____"<<endl;
		cout<<sign[6]<<"|"<<sign[7]<<"|"<<sign[8]<<endl;
		cout<<""<<endl;
		cout<<""<<endl;
				cout<<"tie"<<endl;
				return 0;
			}
			}
		}
