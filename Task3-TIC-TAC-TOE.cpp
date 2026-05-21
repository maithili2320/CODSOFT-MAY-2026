#include <iostream>
using namespace std;

char b[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char p = 'X';

void show(){
	cout << "\n=== MAITHILI'S GAME ===\n";
	cout << "" << b[0][0] << "|"<< b[0][1]<<"|"<<b[0][2]<<"\n";
	cout << "" << b[1][0] << "|"<< b[1][1]<<"|"<<b[1][2]<<"\n";
	cout << "" << b[2][0] << "|"<< b[2][1]<<"|"<<b[2][2]<<"\n";
}

bool win(){
	for(int i=0;i<3;i++)
	if(b[i][0]==b[i][1] && b[i][1]==b[i][2]||
    b[0][i]==b[1][i] && b[1][i]==b[2][i])return 1;
    if (b[0][0]==b[1][1]&&b[1][1]==b[2][2]||
	b[0][2]==b[1][1]&&b[1][1]==b[2][0])return 1;
	return 0;
}

int main(){
	int n;
	for(int t=0;t<9;t++){
		show();
		cout << "Player"<<p<< "enter 1-9:";
		cin >>n;
		int r=(n-1)/3, c=(n-1)%3;
		
		if(n<1||n>9||b[r][c]=='X'||b[r][c]=='0'){
			cout << "Invalid! Again\n"; t--; continue;
			
		}
		
		b[r][c] = p;
		if(win()){
			show();
			cout<< "Player"<<p<<"WINS! ????\n";
			return 0;
		}
		p=(p=='X')?'0':'X';
	}
	show();
	cout<<"DRAW! ??\n";
	return 0;
}


