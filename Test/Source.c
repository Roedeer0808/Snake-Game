#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_HEART 5

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

void PlayGame(const char* word)
{
	int length = strlen(word);
	int worng = 0;
	int found[MAX_LENGTH] = { 0 };

	printf("행맨 게임 시작!\n");
	printf("")

}

int SelectWord(char* word)
{
	srand(time(NULL));
	int index = rand() % MAX_WORDS;
	strcpy(word, words[index]);
	return strlen(word);
}

int main()
{
	char word[] = {"hello"};
	int heart = 5;
	char my = {};
	while (heart = 0)
	{

	}
}

// int main()
// {
// 	char str1[15] = "hello";
// 	char str2[20] = "";
// 	strcpy(str2, str1);
// 	printf("%s\n", str2);
// 
// }