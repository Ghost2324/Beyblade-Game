#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
	//initialize random seed
	srand(time(0));
	/*
	cardpos1,cardpos2,cardpos3,cardpos4,cardpos5,cardpos6,cardpos7,cardpos8,cardpos9,cardpos10  /variable for card 1-10 postition
	player1typeval,player2typeval /type value of the player's card
	player1sysval,player2sysval /system value of the player's card
	player1score player2score /the players score
	roundnum /round number
	P1cardselection P2cardselection /player card selection 
	*/
	int cardpos1,cardpos2,cardpos3,cardpos4,cardpos5,cardpos6,cardpos7,cardpos8,cardpos9,cardpos10,player1typeval,player1sysval,player2typeval,player2sysval,player1score,player2score,roundnum;
	string ans,player1card,player1type,player1pm,player1sys,player2card,player2type,player2pm,player2sys,player1name,player2name;
	float P1cardselection,P2cardselection;	
	P1cardselection=0;
	P2cardselection=0;
	
	
	cout << "Beyblade Card Game\nby S.R\n" << endl;
	cout << "Cards:" << endl;
	cout << "#  Beyblade Name        Product Code  Type     Plus mode  System" << endl;
	cout << "1. Abyss Devolos        F0647         Balance  -          Speedstorm" << endl;
	cout << "2. Ace Dragon           E7609         Attack   -          HyperSphere" << endl;
	cout << "3. Anubion A2           E1057         Defense  -          Dual-Layer" << endl;
	cout << "4. Balar A4             E4726         Attack   -          SlingShock" << endl;
	cout << "5. Crystal Dranzer      F0217         Balance  -          Burst" << endl;
	cout << "6. Cyclone Belfyre      F3965         Stamina  Attack     QuadDrive" << endl;
	cout << "7. Dark-X Nepstrius     E4749         Defense  -          Slingshock" << endl;
	cout << "8. Diomedes D2          E1062         Attack   -          Dual-Layer" << endl;
	cout << "9. Doomscizor           E1033         Attack   -          SwitchStrike" << endl;
	cout << "10. Vatryek Wing Accel  B9492         Attack   -          Burst\n" << endl;
	cout << "Type Precedence:" << endl;
	cout << "Stamina with PlusMode > Balance > Attack > Defense\n" << endl;
	cout << "System Precedence" << endl;
	cout << "QuadDrive > SpeedStorm > Burst > HyperSphere > SwitchStrike > Dual-Layer > SlingShock\n" << endl;
	
	// Player enter their names
	cout << "Enter player 1 name\n";
	getline(cin, player1name);
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Enter player 2 name\n";
	getline(cin, player2name);
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;

do{
	//resets player score to zero and round number to 1
	ans="";
	roundnum=1;
	player1score=0;
	player2score=0;
	

do{
	// card shuffling
	cout << "Shuffling cards..." << endl;
	cardpos1=(rand() % 10)+1;
	do
	{
	cardpos2=(rand() % 10)+1;
	}while (cardpos2 ==cardpos1);
	do
	{
	cardpos3=(rand() % 10)+1;
	}while (cardpos3 == cardpos1 || cardpos3 == cardpos2);
	do
	{
	cardpos4=(rand() % 10)+1;
	}while (cardpos4 == cardpos1 || cardpos4 == cardpos2 || cardpos4 == cardpos3);
	do
	{
	cardpos5=(rand() % 10)+1;
	}while (cardpos5 == cardpos1 || cardpos5 == cardpos2 || cardpos5 == cardpos3 || cardpos5 == cardpos4);
	do
	{
	cardpos6=(rand() % 10)+1;
	}while (cardpos6 == cardpos1 || cardpos6 == cardpos2 || cardpos6 == cardpos3 || cardpos6 == cardpos4 || cardpos6 == cardpos5);
	do
	{
	cardpos7=(rand() % 10)+1;
	}while (cardpos7 == cardpos1 || cardpos7 == cardpos2 || cardpos7 == cardpos3 || cardpos7 == cardpos4 || cardpos7 == cardpos5 || cardpos7 == cardpos6);
	do
	{
	cardpos8=(rand() % 10)+1;
	}while (cardpos8 == cardpos1 || cardpos8 == cardpos2 || cardpos8 == cardpos3 || cardpos8 == cardpos4 || cardpos8 == cardpos5 || cardpos8 == cardpos6 || cardpos8 == cardpos7);
	do
	{
	cardpos9=(rand() % 10)+1;
	}while (cardpos9 == cardpos1 || cardpos9 == cardpos2 || cardpos9 == cardpos3 || cardpos9 == cardpos4 || cardpos9 == cardpos5 || cardpos9 == cardpos6 || cardpos9 == cardpos7 || cardpos9 == cardpos8);
	do
	{
	cardpos10=(rand() % 10)+1;
	}while (cardpos10 == cardpos1 || cardpos10 == cardpos2 || cardpos10 == cardpos3 || cardpos10 == cardpos4 || cardpos10 == cardpos5 || cardpos10 == cardpos6 || cardpos10 == cardpos7 || cardpos10 == cardpos8 || cardpos10 == cardpos9);	

	//player 1 selects card
	cout << player1name << " select card (1-10)" << endl;
	cin >> P1cardselection;
	
	// repeat player 1 selection if invalid number was entered
	while (P1cardselection !=1 && P1cardselection !=2 && P1cardselection !=3 && P1cardselection !=4 && P1cardselection !=5 && P1cardselection !=6 && P1cardselection !=7 && P1cardselection !=8 && P1cardselection !=9 && P1cardselection !=10)
	{
		cin.clear();
		cin.ignore();
		cout << "Invalid number" << endl;
		cin >> P1cardselection;
	}

	// assigns card to player
		if (P1cardselection==cardpos1)
		{
			player1card="Abyss Devolos";
			player1typeval=3;
			player1type="Balance";
			player1sysval=6;
			player1sys="SpeedStorm";
			cardpos1=0;
		}
		else if (P1cardselection==cardpos2)
		{
			player1card="Ace Dragon";
			player1typeval=2;
			player1type="Attack";
			player1sysval=4;
			player1sys="HyperSphere";
			cardpos2=0;
		}
		else if (P1cardselection==cardpos3)
		{
			player1card="Anubion A2";
			player1typeval=1;
			player1type="Defense";
			player1sysval=2;
			player1sys="Dual-Layer";
			cardpos3=0;
		}
		else if (P1cardselection==cardpos4)
		{
			player1card="Balar B4";		
			player1typeval=2;
			player1type="Attack";
			player1sysval=1;
			player1sys="SlingShock";
			cardpos4=0;
		}
		else if (P1cardselection==cardpos5)
		{
			player1card="Crystal Dranzer";
			player1typeval=3;
			player1type="Balance";
			player1sysval=5;
			player1sys="Burst";
			cardpos5=0;
		}
		else if (P1cardselection==cardpos6)
		{
			player1card="Cyclone Belfyre";
			player1typeval=4;
			player1type="Stamina";
			player1pm="Attack";
			player1sysval=7;
			player1sys="Quaddrive";
			cardpos6=0;
		}
		else if (P1cardselection==cardpos7)
		{
			player1card="Dark-X Nepstrius";
			player1typeval=1;
			player1type="Defence";
			player1sysval=1;
			player1sys="Slingshock";
			cardpos7=0;
		}
		else if (P1cardselection==cardpos8)
		{
			player1card="Diomedes D2";
			player1typeval=2;
			player1type="Attack";
			player1sysval=2;
			player1sys="Dual-layer";
			cardpos8=0;
		}
		else if (P1cardselection==cardpos9)
		{
			player1card="Doomscizor";
			player1typeval=2;
			player1type="Attack";
			player1sysval=3;
			player1sys="SwitchStrike";
			cardpos9=0;
		}
		else if (P1cardselection==cardpos10)
		{
			player1card="Vatryek Wing Accel";
			player1typeval=2;
			player1type="Attack";
			player1sysval=5;
			player1sys="Burst";
			cardpos10=0;
		}
		
		cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
			
		//shuffles the card again
		cout << "Shuffling cards..." << endl;
		if (cardpos1 != 0)
		{
			cardpos1=(rand() % 9)+1;
		}
		if (cardpos2 != 0)
		{
			do
			{
				cardpos2=(rand() % 9)+1;
			}while (cardpos2 ==cardpos1);
		}
		if (cardpos3 != 0)
		{
			do
			{
				cardpos3=(rand() % 9)+1;
			}while (cardpos3 == cardpos1 || cardpos3 == cardpos2);
		}
		if (cardpos4 != 0)
		{
			do
			{
				cardpos4=(rand() % 9)+1;
			}while (cardpos4 == cardpos1 || cardpos4 == cardpos2 || cardpos4 == cardpos3);
		}
		if (cardpos5 != 0)
		{
			do
			{
				cardpos5=(rand() % 9)+1;
			}while (cardpos5 == cardpos1 || cardpos5 == cardpos2 || cardpos5 == cardpos3 || cardpos5 == cardpos4);
		}
		if (cardpos6 != 0)
		{
			do
			{
				cardpos6=(rand() % 9)+1;
			}while (cardpos6 == cardpos1 || cardpos6 == cardpos2 || cardpos6 == cardpos3 || cardpos6 == cardpos4 || cardpos6 == cardpos5);
		}
		if (cardpos7 != 0)
		{
			do
			{
				cardpos7=(rand() % 9)+1;
			}while (cardpos7 == cardpos1 || cardpos7 == cardpos2 || cardpos7 == cardpos3 || cardpos7 == cardpos4 || cardpos7 == cardpos5 || cardpos7 == cardpos6);
		}
		if (cardpos8 != 0)
		{
			do
			{
				cardpos8=(rand() % 9)+1;
			}while (cardpos8 == cardpos1 || cardpos8 == cardpos2 || cardpos8 == cardpos3 || cardpos8 == cardpos4 || cardpos8 == cardpos5 || cardpos8 == cardpos6 || cardpos8 == cardpos7);
		}
		if (cardpos9 != 0)
		{
			do
			{
				cardpos9=(rand() % 9)+1;
			}while (cardpos9 == cardpos1 || cardpos9 == cardpos2 || cardpos9 == cardpos3 || cardpos9 == cardpos4 || cardpos9 == cardpos5 || cardpos9 == cardpos6 || cardpos9 == cardpos7 || cardpos9 == cardpos8);
		}
		if (cardpos10 != 0)
		{
			do
			{
				cardpos10=(rand() % 9)+1;
			}while (cardpos10 == cardpos1 || cardpos10 == cardpos2 || cardpos10 == cardpos3 || cardpos10 == cardpos4 || cardpos10 == cardpos5 || cardpos10 == cardpos6 || cardpos10 == cardpos7 || cardpos10 == cardpos8 || cardpos10 == cardpos9);
		}


	//player 2 selects card
	cout << player2name << " select card (1-9)" << endl;
	cin >> P2cardselection;
			
		//repeat selection when invalid number is entered
		while (P2cardselection !=1 && P2cardselection !=2 && P2cardselection !=3 && P2cardselection !=4 && P2cardselection !=5 && P2cardselection !=6 && P2cardselection !=7 && P2cardselection !=8 && P2cardselection !=9)
		{
		cin.clear();
		cin.ignore();
		cout << "Invalid number" << endl;
		cin >> P2cardselection;
		}
		
		// assigns card to player
		if (P2cardselection==cardpos1)
		{
			player2card="Abyss Devolos";
			player2typeval=3;
			player2type="Balance";
			player2sysval=6;
			player2sys="SpeedStorm";
			cardpos1=0;
		}
		else if (P2cardselection==cardpos2)
		{
			player2card="Ace Dragon";
			player2typeval=2;
			player2type="Attack";
			player2sysval=4;
			player2sys="HyperSphere";
			cardpos2=0;
		}
		else if (P2cardselection==cardpos3)
		{
			player2card="Anubion A2";
			player2typeval=1;
			player2type="Defense";
			player2sysval=2;
			player2sys="Dual-Layer";
			cardpos3=0;
		}
		else if (P2cardselection==cardpos4)
		{
			player2card="Balar B4";
			player2typeval=2;
			player2type="Attack";
			player2sysval=1;
			player2sys="SlingShock";
			cardpos4=0;
		}
		else if (P2cardselection==cardpos5)
		{
			player2card="Crystal Dranzer";
			player2typeval=3;
			player2type="Balance";
			player2sysval=5;
			player2sys="Burst";
			cardpos5=0;
		}
		else if (P2cardselection==cardpos6)
		{
			player2card="Cyclone Belfyre";
			player2typeval=4;
			player2type="Stamina";
			player2pm="Attack";
			player2sysval=7;
			player2sys="Quaddrive";
			cardpos6=0;
		}
		else if (P2cardselection==cardpos7)
		{
			player2card="Dark-X Nepstrius";
			player2typeval=1;
			player2type="Defence";
			player2sysval=1;
			player2sys="Slingshock";
			cardpos7=0;
		}
		else if (P2cardselection==cardpos8)
		{
			player2card="Diomedes D2";
			player2typeval=2;
			player2type="Attack";
			player2sysval=2;
			player2sys="Dual-layer";
			cardpos8=0;
		}
		else if (P2cardselection==cardpos9)
		{
			player2card="Doomscizor";
			player2typeval=2;
			player2type="Attack";
			player2sysval=3;
			player2sys="SwitchStrike";
			cardpos9=0;
		}
		else if (P2cardselection==cardpos10)
		{
			player2card="Vatryek Wing Accel";
			player2typeval=2;
			player2type="Attack";
			player2sysval=5;
			player2sys="Burst";
			cardpos10=0;
		}
	
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	// informs the players card to the player
	cout << player1name << "'s card " << player1card << endl;
	cout << " Type " << player1type << endl;
	if (player1pm=="Attack")
	{
		cout << " Plus mode " << player1pm << endl;
	}
	cout << " System " << player1sys << "\n" <<  endl;

	cout << player2name << "'s card " << player2card << endl;
	cout << " Type " << player2type << endl;
	if (player2pm=="Attack")
	{
		cout << " Plus mode " << player2pm << endl;
	}
	cout << " System " << player2sys << endl;
	
	cout << "" << endl;
	cout << "Lets's duel" << endl;
		
	//determines the winner of the round
	if (player1typeval>player2typeval || player1sysval>player2sysval)
	{
			cout << player1name << " Wins" << endl;
			player1score=player1score+10;
	}
	else if (player1typeval<player2typeval || player1sysval<player2sysval)
	{
				cout << player2name << " Wins" << endl;
				player2score=player2score+10;
	}
	else
	{
			cout << player1name << " and " << player2name << " draws" << endl; 
	}

	
	// informs the players score to the user
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "End of round " << roundnum << endl; 
	cout << player1name << " score " << player1score << endl;
	cout << player2name << " score " << player2score << endl;
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	roundnum++;
	player1pm=""; // resets player 1 and 2 plus mode
	player2pm="";
	if (roundnum !=6)
	{
	cout << "Next round" << endl;
	}
}while(roundnum!=6);

	//informs the winner of the game
	if (player1score>player2score)
	{
		cout << player1name << " is the winner" << endl;
	}
	else if (player1score<player2score)
	{
		cout << player2name << " is the winner" << endl;
	}
	else 
	{
		cout << player1name << " and " << player2name << " draws" << endl; 
	}
	// Prompt tp ask the user whether to play again
	cout << "End of Game" << endl;
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Play again?(Y/N)" << endl;
	cin >> ans;
}while (ans=="Y" || ans=="y");

	cout << "Thanks for playing" << endl;	
	return 0;
}
