#include <iostream>
using namespace std;
int main(){
	cout<<"input the first number:";
	long long a,c;
	char b;
	cin>>a;
	cout<<"\n"<<"input the last number:";
	cin>>c;
	cout<<"\n"<<"input the seperating character";
	cin>>b;
	
	for(int i = a;i<=c;i++){
		cout<<i;
		if(i==c){
			break;
		}
		cout<<b;
		
	}
	system("pause"); 
	return 0;
} 
