#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
//방향키로 플레이어 제어
int main()
{
	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'P';

	//srand(time(nullptr));
	//bool Decision = ((rand() % 2) == 0);
	bool bIsRunning = true;
	while (bIsRunning)
	{
		int Key = _getch();

		system("cls");

		if (Key == 'a' || Key == 'A')
		{
			cout << "왼쪽" << endl;
			PlayerX--;
		}
		else if (Key == 'w' || Key == 'W')
		{
			cout << "위" << endl;
			PlayerY--;
		}
		else if (Key == 's' || Key == 'S')
		{
			cout << "아래" << endl;
			PlayerY++;
		}
		else if (Key == 'd' || Key == 'D')
		{
			cout << "오른쪽" << endl;
			PlayerX++;
		}
		else if (Key == 'q' || Key == 'Q')
		{
			cout << "종료" << endl;
			bIsRunning = false;
		}
		cout << PlayerX << " " << PlayerY << endl;

		//x, y 좌표 설정
		COORD pos = { PlayerX, PlayerY };
		//커서 이동
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		cout << PlayerShape;

		
	}
	return 0;
}