//CONNECT FOUR
//Each player in his turn drops one of his checkers down any of the slots in the top of the grid.
//The play alternates until one of the players gets four checkers of his colour in a row. ...
//The first player to get four in a row wins,either vertical or horrizontal.
//Traditionally you can also win by diaggonal four checkers in a row however for simplicty that rule does not apply for this game.

#include <iostream>
#include <vector>
using namespace std;



int main()
{
//Declare rows using vector library
	vector<char>row1,row2,row3,row4,row5,row6,row7;

	int move1,j;
	int score1=0;
	int score2=0;
	char replay='y';
	string p1;
	string p2;
	int win=0;

	cout<<"What is the name of player one:\t";
	cin>>p1;
	cout<<"What is the name of player two:\t";
	cin>>p2;


//For loop, 7 rows, pushback adds a new element to the vector
//Creating a array of Os that are 7 elements in each row.
	for(int i=0;i<7;++i)
	{
		row1.push_back('@');
		row1[0]='1';
		row2.push_back('@');
		row2[0]='2';
		row3.push_back('@');
		row3[0]='3';
		row4.push_back('@');
		row4[0]='4';
		row5.push_back('@');
		row5[0]='5';
		row6.push_back('@');
		row6[0]='6';
		row7.push_back('@');
		row7[0]='7';
	}

	for(int i=0;i<7;++i)
		{
            if(i==0)
				cout<<"\n\n\n\t\t\t\t\t       "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<"  \n\t\t\t\t\t      --------------\n";
		}

//While the game state is Y, repeat the scores of player one and two at all times
	while(replay=='Y'||replay=='y')
	{

		cout<<"\n\t\t\t\t\t\t GAME TALLY";

		cout<<"\n\n";
		cout<<"\n\t\t\t\t\t"<<p1<<"(Player 1): "<<score1<<"   "<<p2<<"(Player 2): "<<score2;

//Draw the Game Layout out for the player
//First if  = Checker Option Numbers
//Second if  = Checker Array
//Finally if prints out end of board
		for(int i=0;i<7;++i)
		{
			if(i==0)
				cout<<"\n\n\n     "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<"  \n    ---------------\n";
			if(i>0&&i<7)
				cout<<"   | "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<" |\n";
			if(i==6)
				cout<<"    ---------------\n   |               |\n\n\n";
		}

		while(win==0)
		{
			/////////////
			if(win==0)
			{
				cout<<p1<<"\n""Player 1:  ";
				cin>>move1;
				cout<<"\n\n";
				while(move1<1||move1>7||(move1==1&&(row1[1]=='1'||row1[1]=='2'))||(move1==2&&(row2[1]=='1'||row2[1]=='2'))||(move1==3&&(row3[1]=='1'||row3[1]=='2'))||(move1==4&&(row4[1]=='1'||row4[1]=='2'))||(move1==5&&(row5[1]=='1'||row5[1]=='2'))||(move1==6&&(row6[1]=='1'||row6[1]=='2'))||(move1==7&&(row7[1]=='1'||row7[1]=='2')))
				{
				//Move Validation, Error Validation or Illegal move output warning.
					cout<<"Sorry illegal move, Can't let you move there!\n\n\nPlayer 1:  ";
					"  \n  ---------------\n";

					cin>>move1;


				}

				if(move1==1)
				{
					j=6;
					while(row1[j]=='1'||row1[j]=='2')
					{
                        //Decremental Destructor
						j--;
					}
					row1[j]='1';
				}
				else if(move1==2)
				{
					j=6;
					while(row2[j]=='1'||row2[j]=='2')
					{
						//Decremental Destructor
						j--;
					}
					row2[j]='1';
				}
				else if(move1==3)
				{
					j=6;
					while(row3[j]=='1'||row3[j]=='2')
					{
						//Decremental Destructor
						j--;
					}
					row3[j]='1';
				}
				else if(move1==4)
				{
					j=6;
					while(row4[j]=='1'||row4[j]=='2')
					{
						//Decremental Destructor
						j--;
					}
					row4[j]='1';
				}
				else if(move1==5)
				{
					j=6;
					while(row5[j]=='1'||row5[j]=='2')
					{
						//Decremental Destructor
						j--;
					}
					row5[j]='1';
				}
				else if(move1==6)
				{
					j=6;
					while(row6[j]=='1'||row6[j]=='2')
					{
						//Decremental Destructor
						j--;
					}
					row6[j]='1';
				}
				else if(move1==7)
				{
					j=6;
					while(row7[j]=='1'||row7[j]=='2')
					{
                        //Decremental Destructor
						j--;
					}
					row7[j]='1';

				}
			}
			/////////////
			for(int i=0;i<7;++i)
		{
			if(i==0)
				cout<<"\n\n\n\t\t\t\t\t     "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<"  \n\t\t\t\t\t    ---------------\n";
			if(i>0&&i<7)
				cout<<"\t\t\t\t\t   | "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<" |\n";
			if(i==6)
				cout<<"\t\t\t\t\t    ---------------\n\t\t\t\t\t   |               |\n\n\n";
		}
			for(int i=6;i>0;--i)
			{
				if((row1[i]=='1'&&row2[i]=='1'&&row3[i]=='1'&&row4[i]=='1')||(row5[i]=='1'&&row2[i]=='1'&&row3[i]=='1'&&row4[i]=='1')||(row5[i]=='1'&&row6[i]=='1'&&row3[i]=='1'&&row4[i]=='1')||(row5[i]=='1'&&row6[i]=='1'&&row7[i]=='1'&&row4[i]=='1'))
					win=1; //for horizontal
			}
			for(int i=6;i>2;--i)
			{
				if((row1[i]=='1'&&row1[i-1]=='1'&&row1[i-2]=='1'&&row1[i-3]=='1')||(row2[i]=='1'&&row2[i-1]=='1'&&row2[i-2]=='1'&&row2[i-3]=='1')||(row3[i]=='1'&&row3[i-1]=='1'&&row3[i-2]=='1'&&row3[i-3]=='1')||(row4[i]=='1'&&row4[i-1]=='1'&&row4[i-2]=='1'&&row4[i-3]=='1')||(row5[i]=='1'&&row5[i-1]=='1'&&row5[i-2]=='1'&&row5[i-3]=='1')||(row6[i]=='1'&&row6[i-1]=='1'&&row6[i-2]=='1'&&row6[i-3]=='1')||(row7[i]=='1'&&row7[i-1]=='1'&&row7[i-2]=='1'&&row7[i-3]=='1'))
					win=1; //for vertical

			}

			/////////////
			if(win==0)
			{
				cout<<"\t\t\t\t\t" <<p2<<"\n""\t\t\t\t\t" "Player 2:  ";
				cin>>move1;
				cout<<"\n\n";
				while(move1<1||move1>7||(move1==1&&(row1[1]=='1'||row1[1]=='2'))||(move1==2&&(row2[1]=='1'||row2[1]=='2'))||(move1==3&&(row3[1]=='1'||row3[1]=='2'))||(move1==4
                        &&(row4[1]=='1'||row4[1]=='2'))||(move1==5&&(row5[1]=='1'||row5[1]=='2'))||(move1==6&&(row6[1]=='1'||row6[1]=='2'))||(move1==7&&(row7[1]=='1'||row7[1]=='2')))
				{
					cout<<"\t\t\t\t\t""Can't let you move there!\n\n\nPlayer 2:  ";
					cin>>move1;
				}

				if(move1==1)
				{
					j=6;
					while(row1[j]=='1'||row1[j]=='2')
					{
                        //Decremental Destructor
						j--;
					}
					row1[j]='2';
				}
				else if(move1==2)
				{
					j=6;
					while(row2[j]=='1'||row2[j]=='2')
					{
                        //Decremental Destructor
						j--;
					}
					row2[j]='2';
				}
				else if(move1==3)
				{
					j=6;
					while(row3[j]=='1'||row3[j]=='2')
					{
                        //Decremental Destructor
						j--;
					}
					row3[j]='2';
				}
				else if(move1==4)
				{
					j=6;
					while(row4[j]=='1'||row4[j]=='2')
					{
                        //Decremental Destructor
						j--;
					}
					row4[j]='2';
				}
				else if(move1==5)
				{
					j=6;
					while(row5[j]=='1'||row5[j]=='2')
					{
                        //Decremental Destructor
						j--;
					}
					row5[j]='2';
				}
				else if(move1==6)
				{
					j=6;
					while(row6[j]=='1'||row6[j]=='2')
					{
                        //Decremental Destructor
						j--;
					}
					row6[j]='2';
				}
				else if(move1==7)
				{
					if(row7[1]=='1'||row7[1]=='2')
						cout<<"nope";
					else
					{
						j=6;
						while(row7[j]=='1'||row7[j]=='2')
						{
                            //Decremental Destructor
							j--;
						}
						row7[j]='2';
					}
				}

			}
			/////////////
                for(int i=0;i<7;++i)
		{
			if(i==0)
				cout<<"\n\n\n\t\t\t\t\t     "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<"  \n\t\t\t\t\t    ---------------\n";
			if(i>0&&i<7)
				cout<<"\t\t\t\t\t   | "<<row1[i]<<" "<<row2[i]<<" "<<row3[i]<<" "<<row4[i]<<" "<<row5[i]<<" "<<row6[i]<<" "<<row7[i]<<" |\n";
			if(i==6)
				cout<<"\t\t\t\t\t    ---------------\n \t\t\t\t  |               |\n\n\n";
		}


			for(int i=6;i>0;--i)
			{
				if((row1[i]=='2'&&row2[i]=='2'&&row3[i]=='2'&&row4[i]=='2')||(row5[i]=='2'&&row2[i]=='2'&&row3[i]=='2'&&row4[i]=='2')||(row5[i]=='2'
                    &&row6[i]=='2'&&row3[i]=='2'&&row4[i]=='2')||(row5[i]=='2'&&row6[i]=='2'&&row7[i]=='2'&&row4[i]=='2'))
					win=2; //Horrizontal win checker
			}
			for(int i=6;i>2;--i)
			{
				if((row1[i]=='2'&&row1[i-1]=='2'&&row1[i-2]=='2'&&row1[i-3]=='2')||(row2[i]=='2'&&row2[i-1]=='2'&&row2[i-2]=='2'&&row2[i-3]=='2')||(row3[i]=='2'&&row3[i-1]=='2'&&row3[i-2]=='2'
				&&row3[i-3]=='2')||(row4[i]=='2'&&row4[i-1]=='2'&&row4[i-2]=='2'&&row4[i-3]=='2')||(row5[i]=='2'&&row5[i-1]=='2'&&row5[i-2]=='2'&&row5[i-3]=='2')||(row6[i]=='2'&&row6[i-1]=='2'
				&&row6[i-2]=='2'&&row6[i-3]=='2')||(row7[i]=='2'&&row7[i-1]=='2'&&row7[i-2]=='2'&&row7[i-3]=='2'))
					win=2; //Vertical win checker

			}
			/////////////
		}

		if(win==1)
		{
            //INCREMENT PLAYER 2 SCORE SHOULD THEY WIN
            //Print out Winner and ask for rematch
			++score1;
			cout<<"\t\t"<<p1<<  ":(PLAYER 1) WINS!\n\nREPLAY THE GAME? Y FOR YES, N FOR NO (Y/N): ";
		}
		else if(win==2)
		{
            //INCREMENT PLAYER 2 SCORE SHOULD THEY WIN
            //Print out Winner and ask for rematch
            ++score2;
			cout<<"\t\t"<<p2<<  ":(PLAYER 2) WINS!\n\nREPLAY THE GAME? Y FOR YES, N FOR NO (Y/N): ";

		}

		//Asks user for input to rematch. Otherwise without it, the game will loop forever.
		cin>>replay;

		while(replay!='Y'&&replay!='y'&&replay!='N'&&replay!='n')
		{
			cout<<"REPLAY THE GAME? Y FOR YES, N FOR NO (Y/N): ";
			cin>>replay;
		}

//Print out several lines of space to initiate clean start to the game.
//Can remove should the user want a glimpse of how they lost.
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
//Set win value back to original
		win=0;
//Refresh board and set all values to default
		for(int i=1;i<7;++i)
		{
			row1[i]='@';
			row2[i]='@';
			row3[i]='@';
			row4[i]='@';
			row5[i]='@';
			row6[i]='@';
			row7[i]='@';
		}
	}

//Print End game statement should they choose otherwise.
	cout<<"GAME OVER\n\n";

//system("pause"); //Uncomment line if you are using Mustafa's most hated IDE :visual studio
// THIS HOLDS THE WINDOW OPEN
	return 0;
}
