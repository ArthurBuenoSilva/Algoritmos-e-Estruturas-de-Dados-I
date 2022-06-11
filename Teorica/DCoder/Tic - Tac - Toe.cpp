#include <iostream>

using namespace std;

int winX = 0;
int winO = 0;

void verify(char x){
	
	char O = 'O';
	char X = 'X';
	char H = '#';
	
	if(x == X){
		winX++;
	}else if(x == O){
		winO++;
	}
}

int winner(char mat[][3]){
	
	if(mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0]){
		verify(mat[0][0]);
	}
	if(mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1]){
		verify(mat[0][1]);
	}
	if(mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2]){
		verify(mat[0][2]);
	}
	if(mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2]){
		verify(mat[0][0]);
	}
	if(mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2]){
		verify(mat[1][0]);
	}
	if(mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2]){
		verify(mat[2][0]);
	}
	if(mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]){
		verify(mat[0][0]);
	}
	if(mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]){
		verify(mat[0][2]);
	}
	
	if(winX > winO){
		return 1;
	}else if(winX < winO){
		return 2;
	}else{
		return 3;
	}
}

int main(){
	
	char mat[3][3];
	int win = 0;
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cin >> mat[i][j];
		}
	}
	
	win = winner(mat);
	
	if(win == 1){
		cout << "Player 1" << endl;
	}else if(win == 2){
		cout << "Player 2" << endl;
	}else{
		cout << "Draw" << endl;
	}
	
	return 0;
}