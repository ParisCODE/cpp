#include<iostream>
#include<windows.h>
using namespace std;
void draw(char shape[]){
	cout<<" "<<shape[1]<<" | "<<shape[2]<<" | "<<shape[3]<<" "<<"\n"<<"---+---+---"<<"\n"<<" "<<shape[4]<<" | "<<shape[5]<<" | "<<shape[6]<<" "<<"\n"<<"---+---+---"<<"\n"<<" "<<shape[7]<<" | "<<shape[8]<<" | "<<shape[9]<<" "<<"\n";
}

int main(){
	int move,win;
	char blank = ' ';
	char shape[10]={0,blank,blank,blank,blank,blank,blank,blank,blank,blank};
	draw(shape);
	while(true){
		cin>>move;
		if(shape[move]!='O'&& shape[move]!='X'){
			shape[move]='X';
		}
		system("cls");
		draw(shape);
		
		if(((shape[1]=='X'&&shape[2]=='X'&&shape[3]=='X')||(shape[4]=='X'&&shape[5]=='X'&&shape[6]=='X')||(shape[7]=='X'&&shape[8]=='X'&&shape[9]=='X')||(shape[1]=='X'&&shape[4]=='X'&&shape[7]=='X')||(shape[2]=='X'&&shape[5]=='X'&&shape[8]=='X')||(shape[3]=='X'&&shape[6]=='X'&&shape[9]=='X')||(shape[1]=='X'&&shape[5]=='X'&&shape[9]=='X')||(shape[3]=='X'&&shape[5]=='X'&&shape[7]=='X'))||((shape[1]=='O'&&shape[2]=='O'&&shape[3]=='O')||(shape[4]=='O'&&shape[5]=='O'&&shape[6]=='O')||(shape[7]=='O'&&shape[8]=='O'&&shape[9]=='O')||(shape[1]=='O'&&shape[4]=='O'&&shape[7]=='O')||(shape[2]=='O'&&shape[5]=='O'&&shape[8]=='O')||(shape[3]=='O'&&shape[6]=='O'&&shape[9]=='O')||(shape[1]=='O'&&shape[5]=='O'&&shape[9]=='O')||(shape[3]=='O'&&shape[5]=='O'&&shape[7]=='O'))){
			win=1;
			break;
		}
		
		cin>>move;
		if(shape[move]!='O'&& shape[move]!='X'){
			shape[move]='O';
		}
		system("cls");
		draw(shape);
		
		if(((shape[1]=='X'&&shape[2]=='X'&&shape[3]=='X')||(shape[4]=='X'&&shape[5]=='X'&&shape[6]=='X')||(shape[7]=='X'&&shape[8]=='X'&&shape[9]=='X')||(shape[1]=='X'&&shape[4]=='X'&&shape[7]=='X')||(shape[2]=='X'&&shape[5]=='X'&&shape[8]=='X')||(shape[3]=='X'&&shape[6]=='X'&&shape[9]=='X')||(shape[1]=='X'&&shape[5]=='X'&&shape[9]=='X')||(shape[3]=='X'&&shape[5]=='X'&&shape[7]=='X'))||((shape[1]=='O'&&shape[2]=='O'&&shape[3]=='O')||(shape[4]=='O'&&shape[5]=='O'&&shape[6]=='O')||(shape[7]=='O'&&shape[8]=='O'&&shape[9]=='O')||(shape[1]=='O'&&shape[4]=='O'&&shape[7]=='O')||(shape[2]=='O'&&shape[5]=='O'&&shape[8]=='O')||(shape[3]=='O'&&shape[6]=='O'&&shape[9]=='O')||(shape[1]=='O'&&shape[5]=='O'&&shape[9]=='O')||(shape[3]=='O'&&shape[5]=='O'&&shape[7]=='O'))){
			win=0;
			break;
		}
		
		}
		if(win==1){
			cout<<"X wins!";
		}
		else{
			cout<<"O wins!";
		}
	return 0;
} 
