// #include <stdio.h>
// #include <conio.h>
// 
// int main()
// {
// 	// q를 누르면 입력 종료
// 	/*
// 	// int _kbhit(void); // 눌리면 0 이외의 값을 리턴한다.
// 	// int iChar;
// 	// 
// 	// while (1) {
// 	// 	if (_kbhit()) { // 키보드가 눌렸니? 체크 
// 	// 		iChar = _getch(); // 눌린 값 대입
// 	// 		if (iChar == 'q')
// 	// 			break;
// 	// 
// 	// 		printf("%c", iChar);
// 	// 	}
// 	// }
// 	// //[출처] C언어::키보드 관련 함수 _getch, _kbhit | 작성자 고코슬리 GoKoselig
// 	*/
// 
// 	int _getch(void);
// 	int iChar;
// 
// 	while (1) {
// 		iChar = _getch();
// 		if (iChar == 'q') // 아스키코드와 비교
// 			break;
// 
// 		printf("%c", iChar);
// 	}
// 	//[출처] C언어::키보드 관련 함수 _getch, _kbhit | 작성자 고코슬리 GoKoselig
// 
// }

// #include <stdio.h>
// #include <Windows.h	>
// #include <conio.h>
// #define LEFT 75
// #define RIGHT 77
// #define UP 72
// #define DOWN 80
// #define ARROW 224
// void GotoXY(int x, int y) {
// 	COORD Pos;
// 	Pos.X = x;
// 	Pos.Y = y;
// 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
// }
// void CursorView(char show)
// {
// 	CONSOLE_CURSOR_INFO ConsoleCursor;
// 	ConsoleCursor.bVisible = show;
// 	ConsoleCursor.dwSize = 1;
// 	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
// }
// int x = 30;
// int y = 7;
// int main(void) {
// 
// 	CursorView(0);
// 	GotoXY(x, y);
// 	printf("★");
// 	while (1) {
// 		if (_kbhit()) {
// 			int nkey = _getch();
// 			if (nkey == ARROW) {
// 				nkey = _getch();
// 				switch (nkey) {
// 				case UP:
// 					system("cls");
// 					GotoXY(x, --y);
// 					printf("★");
// 					break;
// 				case LEFT:
// 					system("cls");
// 					GotoXY(x = x - 2, y);
// 					printf("★");
// 					break;
// 				case RIGHT:
// 					system("cls");
// 					GotoXY(x = x + 2, y);
// 					printf("★");
// 					break;
// 				case DOWN:
// 					system("cls");
// 					GotoXY(x, ++y);
// 					printf("★");
// 					break;
// 
// 				}
// 			}
// 		}
// 	}
// 
// 	return 0;
// }

// #include <stdio.h>
// #include <Windows.h	>
// void GotoXY(int x, int y) {
//     COORD Pos;
//     Pos.X = x;
//     Pos.Y = y;
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
// }
// 
// int main(void) {
//     GotoXY(0, 0);
//     printf("어디에 출력되나?\n");
// 
//     return 0;
// }


#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROWS 224

// #define SPACEBAR 32

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView(char show)
{
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

int x = 4;
int y = 8;

int main(void) {
    CiursorView(0);
    GotoXY(x, y);
    pritnf("◇");
    while (1)
    {
        int nkey = _kbhit();
        if(nkey==ARROWS)
        { 
            switch (nkey)
            {
            case UP:
                //syetem("cls");
                GotoXY(x, y++);
                break;
            case DOWN:
                //syetem("cls");
                GotoXY(x, y--);
                break;
            case LEFT:
                //syetem("cls");
                GotoXY(x--, y);
                break;
            case RIGHT:
                //syetem("cls");
                GotoXY(x++, y);
                break;
            }
        }
    }
}