// #include <stdio.h>
// #include <conio.h>
// 
// int main()
// {
// 	// q�� ������ �Է� ����
// 	/*
// 	// int _kbhit(void); // ������ 0 �̿��� ���� �����Ѵ�.
// 	// int iChar;
// 	// 
// 	// while (1) {
// 	// 	if (_kbhit()) { // Ű���尡 ���ȴ�? üũ 
// 	// 		iChar = _getch(); // ���� �� ����
// 	// 		if (iChar == 'q')
// 	// 			break;
// 	// 
// 	// 		printf("%c", iChar);
// 	// 	}
// 	// }
// 	// //[��ó] C���::Ű���� ���� �Լ� _getch, _kbhit | �ۼ��� ���ڽ��� GoKoselig
// 	*/
// 
// 	int _getch(void);
// 	int iChar;
// 
// 	while (1) {
// 		iChar = _getch();
// 		if (iChar == 'q') // �ƽ�Ű�ڵ�� ��
// 			break;
// 
// 		printf("%c", iChar);
// 	}
// 	//[��ó] C���::Ű���� ���� �Լ� _getch, _kbhit | �ۼ��� ���ڽ��� GoKoselig
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
// 	printf("��");
// 	while (1) {
// 		if (_kbhit()) {
// 			int nkey = _getch();
// 			if (nkey == ARROW) {
// 				nkey = _getch();
// 				switch (nkey) {
// 				case UP:
// 					system("cls");
// 					GotoXY(x, --y);
// 					printf("��");
// 					break;
// 				case LEFT:
// 					system("cls");
// 					GotoXY(x = x - 2, y);
// 					printf("��");
// 					break;
// 				case RIGHT:
// 					system("cls");
// 					GotoXY(x = x + 2, y);
// 					printf("��");
// 					break;
// 				case DOWN:
// 					system("cls");
// 					GotoXY(x, ++y);
// 					printf("��");
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
//     printf("��� ��µǳ�?\n");
// 
//     return 0;
// }


#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define HEIGHT 18
#define WIDTH 20


#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224

// #define SPACEBAR 32
char snakeground[HEIGHT][WIDTH] =
{
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
};
// 1 = ��

void Render()
{
    for (int i = 0; i < HEIGHT;i++)
    {
        for (int j = 0; j < WIDTH;j++)
        {
            if (snakeground[i][i] == '1')
            {
                printf("��");
            }
        }
    }
}

void GotoXY(int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

typedef struct Character
{
    int x;
    int y;
    const char* shape;
}Character;


void CursorView(char show)
{
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

int x = 4;
int y = 8;

// int x = 0;
// int y = 0;

int main(void) {
    
    Character character = { 1,1,"��" };
    CursorView(0);
    GotoXY(x, y);
    printf("��");
    while (1)
    {
        if (_kbhit())
        {
            int nkey = _getch();
            if (nkey == ARROW)
            {
                nkey = _getch();
                switch (nkey)
                {
                case UP:
                    system("cls");
                    GotoXY(x, y--);
                    printf("��");
                    break;
                case DOWN:
                    system("cls");
                    GotoXY(x, y++);
                    printf("��");
                     break;
                case LEFT:
                    system("cls");
                    GotoXY(x = x - 2, y);
                    printf("��");
                    break;
                case RIGHT:
                    system("cls");
                    GotoXY(x = x + 2, y);
                    printf("��");
                    break;
                }
                Render();
                // switch (nkey)
                // {
                // case UP: 	if (snakeground[character.y - 1][character.x / 2] != '1') character.y--;
                // 	break;
                // case LEFT: 	if (snakeground[character.y][character.x / 2 - 1] != '1')	character.x -= 2;
                // 	break;
                // case RIGHT:	if (snakeground[character.y][character.x / 2 + 1] != '1') character.x += 2;
                // 	break;
                // case DOWN:	if (snakeground[character.y + 1][character.x / 2] != '1') character.y++;
                // 	break;
                // }
                
            }
        }
    }
}

// key  = _getch();
    // 
    // switch (key)
    // {
    // case UP: 	if (maze[character.y - 1][character.x / 2] != '1') character.y--;
    // 	break;
    // case LEFT: 	if (maze[character.y][character.x / 2 - 1] != '1')	character.x -= 2;
    // 	break;
    // case RIGHT:	if (maze[character.y][character.x / 2 + 1] != '1') character.x += 2;
    // 	break;
    // case DOWN:	if (maze[character.y + 1][character.x / 2] != '1') character.y++;
    // 	break;
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
// 	printf("��");
// 	while (1) {
// 		if (_kbhit()) {
// 			int nkey = _getch();
// 			if (nkey == ARROW) {
// 				nkey = _getch();
// 				switch (nkey) {
// 				case UP:
// 					system("cls");
// 					GotoXY(x, --y);
// 					printf("��");
// 					break;
// 				case LEFT:
// 					system("cls");
// 					GotoXY(x = x - 2, y);
// 					printf("��");
// 					break;
// 				case RIGHT:
// 					system("cls");
// 					GotoXY(x = x + 2, y);
// 					printf("��");
// 					break;
// 				case DOWN:
// 					system("cls");
// 					GotoXY(x, ++y);
// 					printf("��");
// 					break;
// 
// 				}
// 			}
// 		}
// 	}
// 
// 	return 0;
// }