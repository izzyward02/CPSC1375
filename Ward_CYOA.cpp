/* Izzy Ward  CPSC 1375  June 22, 2023
*    DESCRIPTION:  This program plays a basic Magic: The Gathering game.
*    It consists of a Card class, Game class, and Player class headers to control the functionality of the game.  */

#include "Card.h"  //includes card header
#include "Game.h"  //includes game header
#include "Player.h"  //includes player header

#include <iostream>
#include <vector>
#include <string>

/* 
EXAMPLE PROGRAM of a MTG game that gives info about cards in a deck and allows the user to draw and hand of 7

include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <locale>
#include <iomanip>
#include <sstream>

using namespace std; 

const int HAND_SIZE=7;//choose hand size here
const int MAXIMUM_DECK_SIZE=1000;

class Magic{

public:
	Magic(){size=0;}

	void shuffle(){
		srand(time(0));
		for(int i=0;i<size;i++){
			int random=rand()%size;
			string temp=deck[i];
			int temp1=casting_cost[i];

			deck[i]=deck[random];
			casting_cost[i]=casting_cost[random];

			deck[random]=temp;
			casting_cost[random]=temp1;
		}
	}
	void opening_hand()const {
		for(int i=0;i<HAND_SIZE;i++)
			cout<<left<<setw(20)<<deck[i]<<setw(10)<<right<<casting_cost[i]<<endl;
	}
	double average_casting_cost(){//does not count zero casting cost cards
		int sum=0, temp_counter=0;
		for(int i=0;i<size;i++){
			if(casting_cost[i]!=0){
				sum+=casting_cost[i];
				temp_counter++;
			}
		}
		return (static_cast<double>(sum)/temp_counter);
	}
	void print_graphic(int n){
		for(int i=0;i<n;i++)
			cout<<'*';
		cout<<endl;
	}
	void print_graph(){
		string temp;
		sort();
		int temp_int;
		cout<<endl<<endl;
		cout<<setw(20)<<left<<"Card Name"<<setw(10)<<right<<"Casting Cost\n\n";
		for(int i=0;i<size;i++){
			temp=deck[i];
			temp_int=casting_cost[i];
			if(temp!=deck[i+1]){
				cout<<setw(20)<<left<<deck[i]<<setw(10)<<right;
				print_graphic(temp_int);
			}
		}
	}
	void sort(){
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
				if(casting_cost[i]>casting_cost[j]){
					int temp=casting_cost[i];
					string temp_string=deck[i];

					casting_cost[i]=casting_cost[j];
					deck[i]=deck[j];

					casting_cost[j]=temp;
					deck[j]=temp_string;
				}
			}
		}
	}
	int get_size(){return size;}
	friend istream& operator >>(istream& in, Magic& m);
	friend ostream& operator <<(ostream& out, Magic& m);

private:
	string deck[MAXIMUM_DECK_SIZE];
	int casting_cost[MAXIMUM_DECK_SIZE];
	int size;
};

int main(){
	
	Magic deck;
	char choice;
	double average_cc;
	int temp_size;
	cout<<"Welcome to the friendly Magic program, create a deck now!\n\n";
	cin>>deck;

	do{
		cout<<"Now that you created a deck, choose\n\n"
			<<"'d' to Draw a hand of "<<HAND_SIZE<<endl;
		cout<<"'a' to display deck\n"
			<<"'s' for Stats\n"
			<<"'q' to Quit\n\n";
			cout<<">>";
			cin>>choice;
			switch(choice){
			
			case 'd': 
				do{
					cout<<"===================Hand Start===================\n\n";
					cout<<setw(20)<<left<<"Card Name"<<setw(10)<<right<<"Casting Cost\n\n";
					deck.shuffle();
					deck.opening_hand();

					cout<<"\n\n====================Hand End====================\n";

					cout<<"\nShffle and draw another hand?(y/n): ";
					cin>>choice;
					cout<<endl;
				}while(choice=='y');
				break;
			
			case 'a': 
				cout<<"The deck is\n\n";
				cout<<deck<<endl;
				break;

			case 's': 
				average_cc=deck.average_casting_cost();
				cout<<"Average excluding 0 casting cost is: "<<average_cc<<endl;
				temp_size=deck.get_size();
				cout<<"Deck size: "<<temp_size<<endl;
				deck.print_graph();
				break;
				
			case 'q': 
				cout<<"Have a nice day, goodbey!\n";
				exit(1);
				break;

			default: break;
			
			}
		cout<<"\nBack to options?(y/n): ";
		cin>>choice;
	}while(choice=='y');
	cout<<"Have a nice day!\n";
	exit(1);


	_getch();
	return 0;
}
ostream& operator <<(ostream& out, Magic& m){
	cout<<left<<setw(20)<<"Name"<<setw(10)<<right<<"Casting Cost\n\n";
	for(int i=0;i<m.size;i++)
		out<<left<<setw(20)<<m.deck[i]<<setw(10)<<right<<m.casting_cost[i]<<endl;
	return out;
}
istream& operator >>(istream& in, Magic& m){

	int dummy, num, cast_cost;
	string card_name;
	char choice, number[20];
	bool correct_entry;
	do{
		do{
			correct_entry=true;
			cout<<left<<setw(17)<<"Number: ";
			cin>>number;
			for(int j=0;j<strlen(number);j++){
				if(!isdigit(number[j]))
					correct_entry=false;
			}
		}while(!correct_entry);
		num=atoi(number);
		if(num<0)
			exit(1);
		
		cin.ignore(1000,'\n');
		cout<<setw(17)<<left<<"Card name: ";
		getline(cin,card_name);

		cout<<setw(17)<<left<<"Casting Cost: ";
		in>>cast_cost;
		while(cast_cost<0){
			cout<<"Can't be negative, enter again: ";
			in>>cast_cost;
		}
		dummy=m.size;
		for(int i=m.size;i<num+dummy;i++){
			m.deck[i]=card_name;
			m.casting_cost[i]=cast_cost;
		}
		m.size+=num;

		cout<<"\nAnother (y/n): ";
		cin>>choice;
		cout<<endl;
	}while(choice=='y');

	return in;
}  */
