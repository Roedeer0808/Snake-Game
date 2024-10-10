#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// #include <Windows.h>
// #include <iostream>
// 
// void SetConsole()
// {
// 	system("Hangmangame");
// 	system("mode con:cols=60 lines=100");
// 
// 	CONSOLE_CURSOR_INFO ConsoleCursor;
// 	ConsoleCursor.bVisible = 0;
// 	ConsoleCursor.dwSize = 1;
// 	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
// 	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
// }

//#define MAX_HEART 5

#define MAX_WORDS 100
#define MAX_LENGTH 41

char words[MAX_WORDS][MAX_LENGTH] = {
	"Adventure", "Believe", "Challenge", "Dream", "Explore",
	"Freedom", "Gratitude", "Harmony", "Imagination", "Journey",
	"Knowledge", "Liberty", "Motivation", "Nature", "Opportunity",
	"Peace", "Quest", "Resilience", "Strength", "Trust", "Unity",
	"Vision", "Wisdom", "Ambition", "Balance", "Creativity",
	"Empathy", "Friendship", "Growth", "Hope", "Inspiration",
	"Joy", "Kindness", "Love", "Mindfulness", "Nourish", "Optimism",
	"Purpose", "Serenity", "Triumph"
};

int SelectWord(char* word)
{
	srand(time(NULL));
	int index = rand() % MAX_WORDS;
	strcpy(word, words[index]);
	return strlen(word);
}

void PlayGame(const char* word)
{
	int length = strlen(word);
	int wrong = 0;
	int found[MAX_LENGTH] = { 0 };

	printf("��� ���� ����!\n");
	printf("%d ���� �ܾ ���߼���!\n", length);
	for (int i = 0;i < length;i++)
	{
		printf("_ ");
	}
	printf("\n");
	int MAX_HEART = length; //+
	while (wrong < MAX_HEART)
	{
		char guess;
		int correct = 0;

		printf("���� �Է��ϼ���: ");
		scanf(" %c", &guess);

		for (int i = 0;i < length;i++) 
		{
			if (word[i] == guess && !found[i]) // !found ??
			{
				found[i] = 1;
				correct = 1;
			}
		}

		if (!correct)
		{
			wrong++;
			printf("Ʋ�Ƚ��ϴ�!\n");
			printf("���� ��ȸ��: %d �Դϴ�.\n", MAX_HEART - wrong);
			 switch (wrong) {
           case 1:
               printf("  O\n");
               break;
           case 2:
               printf("  O\n  |\n");
               break;
           case 3:
               printf("  O\n \\|\n");
               break;
           case 4:
               printf("  O\n \\|/\n");
               break;
           case 5:
               printf("  O\n \\|/\n  |\n");
               break;
           case 6:
               printf("  O\n \\|/\n  |\n /\n");
               break;
           }
		}
		for (int i = 0;i < length;i++)
		{
			if (found[i])
			{
				printf("%c ", word[i]);
			}
			else
			{
				printf("%_ ");
			}
		}
		printf("\n\n");
		

		int AllFound = 1;
		for (int i = 0; i < length;i++)
		{
			if (!found[i])
			{
				AllFound = 0;
				break;
			}
		}
		if (AllFound == 1)
		{
			printf("�����մϴ�! ��� ���ڸ� ã�� �ܾ ã�ҽ��ϴ�!\n");
			//printf(": %s\n", word);
		}
		else
		{
			printf("�̷�..��� ���ڸ� ã�� ���߾��.. ���� ��ȸ��...\n");
			//printf(": %s\n", word);
		}

		
		
		
	}
	printf("���� %s �����ϴ�!\n", word);
}

int main()
{
	char word[MAX_LENGTH];
	int length = SelectWord(word);
	PlayGame(word);

	return 0;
}