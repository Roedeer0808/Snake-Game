#include <stdio.h>
#include <conio.h>

int main()
{
	// q�� ������ �Է� ����
	/*
	// int _kbhit(void); // ������ 0 �̿��� ���� �����Ѵ�.
	// int iChar;
	// 
	// while (1) {
	// 	if (_kbhit()) { // Ű���尡 ���ȴ�? üũ 
	// 		iChar = _getch(); // ���� �� ����
	// 		if (iChar == 'q')
	// 			break;
	// 
	// 		printf("%c", iChar);
	// 	}
	// }
	// //[��ó] C���::Ű���� ���� �Լ� _getch, _kbhit | �ۼ��� ���ڽ��� GoKoselig
	*/

	int _getch(void);
	int iChar;

	while (1) {
		iChar = _getch();
		if (iChar == 'q') // �ƽ�Ű�ڵ�� ��
			break;

		printf("%c", iChar);
	}
	//[��ó] C���::Ű���� ���� �Լ� _getch, _kbhit | �ۼ��� ���ڽ��� GoKoselig

}