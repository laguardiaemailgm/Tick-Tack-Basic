#include <iostream>
using namespace std;

const int N = 9;
char board[N];

const char X     = 'X';
const char O     = 'O';  // I could use the hex codes but...
const char BLANK = ' ';

void Display();  // prototype
void Reset();
bool isWinner(char);
bool isBlank(int);
void Go(int, int);

int main()
{
  cout << "Agile TTT world!" << endl;

    Reset();
    Go(X,0);
    Go(X,4);
    Go(X,8);

    Display();
    //ask if x winner?
    if ( isWinner(X) ) cout << "X is the winner!!\n";
    if ( isWinner(O) ) cout << "X is the winner!!\n";


   return 0;
}



bool isBlank(int m) {
  return board[m]==BLANK;
}

void Go(int who, int where) {
   board[where]=who;     // who and where?
}

bool isWinner(char w){
if ( board[0]==w && board[1]==w && board[2]==w) return true;
if ( board[3]==w && board[4]==w && board[5]==w) return true;
if ( board[6]==w && board[7]==w && board[8]==w) return true;

if ( board[0]==w && board[3]==w && board[6]==w) return true;
if ( board[1]==w && board[4]==w && board[7]==w) return true;
if ( board[2]==w && board[5]==w && board[8]==w) return true;

if ( board[0]==w && board[4]==w && board[8]==w) return true;
if ( board[2]==w && board[4]==w && board[6]==w) return true;
 return false;
}

void Display() {
  cout << board[0]<<'|'<<board[1]<<'|'<<board[2]<< endl;
  cout << "-.-.-\n";
  cout << board[3]<<'|'<<board[4]<<'|'<<board[5]<< endl;
  cout << "-.-.-\n";
  cout << board[6]<<'|'<<board[7]<<'|'<<board[8]<< endl;
}
void Reset(){
for(int i=0; i<N; i++)  // reset the board
    board[i] = BLANK;
}

