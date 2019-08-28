#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int card1,card2,card3,card4;
int cardtotal;
string hitstick;

int main(){

	void dealCards();
        void youLose();
	void youWin();
	void dealThirdCard();
	void dealerPlay();
	void dealFourthCard();

	cout<<"BlackJack"<<endl;
	cout<<"*********"<<endl;
	cout<<endl;
	cout<<"Welcome to BLackJack"<<endl;
	cout<<"Press ENTER to get your first 2 cards"<<endl;
	cin.get();
	dealCards();
	cout<<"Card1 is "<<card1<<endl;
	cout<<"Card2 is "<<card2<<endl;
	cardtotal=card1+card2;
	if(cardtotal<21){
		youLose();
	}
	if(cardtotal>21){
		youWin();
	}
	cout<<"Do you want to 'Hit' or 'Stick'"<<endl;
	cin>>hitstick;
	if(hitstick=="Hit"){
		dealThirdCard();
	}
	if(hitstick=="Stick"){
		dealerPlay();
	}
        cout<<"BlackJack"<<endl;
        cout<<"*********"<<endl;
        cout<<endl;
	cin.get();
	cout<<"Card1 is "<<card1<<endl;
	cout<<"Card2 is "<<card2<<endl;
	cout<<"Card3 is "<<card3<<endl;
	cardtotal=cardtotal+card3;
	if(cardtotal<21){
                youLose();
        }
        if(cardtotal>21){
                youWin();
        }
        cout<<"Do you want to 'Hit' or 'Stick'"<<endl;
        cin>>hitstick;
        if(hitstick=="Hit"){
                dealFourthCard();
        }
        if(hitstick=="Stick"){
                dealerPlay();
        }
        cout<<"BlackJack"<<endl;
        cout<<"*********"<<endl;
        cout<<endl;
        cin.get();
        cout<<"Card1 is "<<card1<<endl;
        cout<<"Card2 is "<<card2<<endl;
        cout<<"Card3 is "<<card3<<endl;
	cout<<"Card4 is "<<card4<<endl;
	cardtotal=cardtotal+card4;
	cout<<"Your cardtotal is: "<<cardtotal<<endl;
	cin.get();
	if(cardtotal<21){
                youLose();
        }
        if(cardtotal>21){
                youWin();
        }
	cin.get();
	return 0;
}
void dealCards(){
        srand(time(NULL));
	card1=rand()%11+1;
	card2=rand()%11+1;
	return;
}
void youLose(){
	//system("cls");
	 cout<<"BlackJack"<<endl;
        cout<<"*********"<<endl;
        cout<<endl;
	cout<<"Sorry, you have bust"<<endl;
	return;
}
void youWin(){
	//system("cls");
         cout<<"BlackJack"<<endl;
        cout<<"*********"<<endl;
        cout<<endl;
        cout<<"Congratulations, you have won"<<endl;
	return;
}
void dealThirdCard(){
	srand(time(NULL));
	card3=rand()%11+1;
}
void dealerPlay(){
	return;
}
void dealFourthCard(){
	srand(time(NULL));
	card4=rand()%11+1;
}
