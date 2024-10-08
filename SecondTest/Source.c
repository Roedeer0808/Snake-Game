#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define HEIGHT 18
#define WIDTH 40

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// typedef struct Character
// {
// 	int x;
// 	int y;
// 	const char* shape;
// }Character;

char maze[HEIGHT][WIDTH] =
{
	{'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1'},
	{'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},
};
// 0 -> ����
// 1 -> ��
// 2 -> ��

void Render()
{
	for (int i = 0; i < HEIGHT;i++)
	{
		for (int j = 0; j < WIDTH;j++)
		{

			if (maze[i][j] == '0')
			{
				printf(" ");
			}
			else if (maze[i][j] == '1')
			{
				printf("��");
			}
		}
		printf("\n");
	}
}


// void Position(int x, int y)
// {
// 	// X�� Y���� �����ϴ� ����ü�Դϴ�.
// 	COORD position = { x, y };
// 
// 	// �ܼ� Ŀ���� ��ǥ�� �����ϴ� �Լ��Դϴ�.
// 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
// }

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

int n_food = 0;
void SnakeFood()
{
	int randomx = 0;
	int randomy = 0;

	randomx = rand() % 18 + 1;
	randomy = rand() % 40 + 1;
	// if (n_food==)
	// {
	// 
	// }
	// printf("��");
	// n_food++;

	// while (1)
	// {
	// 	randomx = rand() % 18 + 1;
	// 	randomy = rand() % 40 + 1;
	// 	if (maze[randomx][randomy] == '0')
	// 	{
	// 		printf("��");
	// 	}
	// }
} // ��� ���� ���� - ������
// �� ���� : ��

// void wall()
// {
// }


int x = 4;
int y = 8;

int snakeleg = 0;

void snakemain()
{
	
}

int main()
{
	Character character = { 2,2,"��" };

	CursorView(0);

	GotoXY(x, y);

	char key = 0;

	Render();
	SnakeFood();


	// character.x = y;
	// character.y = x;
	// if (maze[x][y]=="��")
	// {
	// 
	// }
	// // �� ����

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == -32)
			{
				key = _getch();
			}
			
			// if (character.x == 0 || character.y == 0 || character.x == 18 || character.y == 40)
			// {
			// 	break;
			// }
			
			switch (key)
			{
			case UP: 	
				system("cls");
				if (maze[character.y - 1][character.x / 2] != '1')
				{
					//character.y--;
					while (UP != LEFT || UP != RIGHT||UP != DOWN)
					{
						character.y--;
						Sleep(5);
					}//���� ��� �̵�-�̿ϼ�
				}
				if (character.x == 0 || character.x == 40 || character.y == 0 || character.y == 18) break;
				if (maze[character.y][character.x] == "��") {
					snakeleg++;
				}
				break;
			case LEFT: 	
				system("cls");
				if (maze[character.y][character.x / 2 - 1] != '1')
				{
					//character.x -= 2;
					while (LEFT !=	UP || LEFT != RIGHT || LEFT != DOWN)
					{
						character.x -= 2;
						Sleep(5);
					}//�������� ��� �̵�-�̿ϼ�
					
				}
				if (character.x == 0 || character.x == 40 || character.y == 0 || character.y == 18) break;
				if (maze[character.y][character.x] == "��") {
					snakeleg++;
				}

				break;
			case RIGHT:	
				system("cls");
				if (maze[character.y][character.x / 2 + 1] != '1')
				{
					//character.x += 2;
					while (RIGHT != UP || RIGHT != LEFT || RIGHT != DOWN)
					{
						character.x += 2;
						Sleep(5);
					}//���������� ��� �̵�-�̿ϼ�
				}
				if (character.x == 0 || character.x == 40 || character.y == 0 || character.y == 18) break;
				if (maze[character.y][character.x] == "��") {
					snakeleg++;
				}
				break;
			case DOWN:	
				system("cls");
				if (maze[character.y + 1][character.x / 2] != '1')
				{
					//character.y++;
					while (DOWN != UP || DOWN != LEFT || DOWN != RIGHT)
					{
						character.y++;
						Sleep(5);
					}//�Ʒ��� ��� �̵�-�̿ϼ�
				}
				if (character.x == 0 || character.x == 40 || character.y == 0 || character.y == 18) break;
				if (maze[character.y][character.x] == "��") {
					snakeleg++;
				}
				break;
			}
			//system("cls");

			Render();
			
		}
		GotoXY(character.x, character.y);
		printf("%s", character.shape);
	}


	return 0;
}