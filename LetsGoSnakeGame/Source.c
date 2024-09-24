#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define HEIGHT 18
#define WIDTH 20

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

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

/*
// #define ARROW 224
// #define SPACEBAR 32
// 
// int main(void) {
// 	while (1) {
// 		if (_kbhit()) {
// 			int nkey = _getch();
// 			if (nkey == SPACEBAR) {
// 				printf("space bar");
// 			}
// 			if (nkey == ARROW) {
// 				nkey = _getch();
// 				switch (nkey) {
// 				case UP:
// 					printf("up key");
// 					break;
// 				case LEFT:
// 					printf("left Key");
// 					break;
// 				case RIGHT:
// 					printf("right key");
// 					break;
// 				case DOWN:
// 					printf("down key");
// 					break;
// 
// 				}
// 			}
// 		}
// 	}
// 
// 	return 0;
// }*/

int main() {

	while (1)
	{
		if (_kbhit()) { // Key를 누르면 0이아닌 int형의 값을 반환한다!! 따라서 if문이 실행된다!!
				int key = _getch(); //반환된값을 _getch()를 통해 캣치!후 nkey값에 return 한다!!
				//printf("%d", key);
		
				 key  = _getch();
				 
				 switch (key)
				 {
				 case UP: 	printf("up key");
				 	break;
				 case LEFT: 	printf("left Key");
				 	break;
				 case RIGHT:	printf("right key");
				 	break;
				 case DOWN:	printf("down key");
				 	break;
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
}