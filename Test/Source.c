#include <stdio.h>
#include <conio.h>

int main()
{
	// q를 누르면 입력 종료
	/*
	// int _kbhit(void); // 눌리면 0 이외의 값을 리턴한다.
	// int iChar;
	// 
	// while (1) {
	// 	if (_kbhit()) { // 키보드가 눌렸니? 체크 
	// 		iChar = _getch(); // 눌린 값 대입
	// 		if (iChar == 'q')
	// 			break;
	// 
	// 		printf("%c", iChar);
	// 	}
	// }
	// //[출처] C언어::키보드 관련 함수 _getch, _kbhit | 작성자 고코슬리 GoKoselig
	*/

	int _getch(void);
	int iChar;

	while (1) {
		iChar = _getch();
		if (iChar == 'q') // 아스키코드와 비교
			break;

		printf("%c", iChar);
	}
	//[출처] C언어::키보드 관련 함수 _getch, _kbhit | 작성자 고코슬리 GoKoselig

}