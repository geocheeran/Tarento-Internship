// Program 1:

// Write a program to design a Dice game. There should be two players. Ask the users to enter their names and roll the dice(four times each). Display the scores and calculate the final score and print the name of the winner.

#include<iostream>
 
using namespace std;
 
int main(){
	int p1=0,p2=0;
	string pa,pb;
	cout<<"Enter player 1 name : ";
	getline(cin,pa);
	cout<<"\nEnter player 2 name : ";
	getline(cin,pb);
	cout<<'\n';
	int a;
	for(int i=0;i<4;i++){
		cout<<"Enter player 1 dice value : ";
		cin>>a;
		pa+=a;
		cout<<'\n';
	}
	for(int i=0;i<4;i++){
		cout<<"Enter player 2 dice value : ";
		cin>>a;
		pb+=a;
		cout<<'\n';
	}
	if(pa==pb)
		cout<<"Draw\n";
	else if(pa>pb)
		cout<<"Player 1 wins\n";
	else
		cout<<"Player 2 wins\n";
	return 0;
}
