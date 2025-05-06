/*Jack Cunial 
Project 10*/

	
#include <stdio.h>
#define INPUT "mystery.txt"

	void wordle(char bord[6][6]);
	void input(char guess[6]);
	int checking(char guess[6]);
	
int main(){
	char word[6], bord[5][5];
	char guess[6];
	FILE* filereader;
	FILE* filewriter;
	
	
	filereader = fopen(INPUT, "r");

	if(filereader == NULL){
		printf("failed to open %s\n", INPUT);
		return 0;
	}
	
	fscanf(filereader, "%s", word);
	fclose(filereader);	
	
		input(guess);

		wordle(bord);
	
return 0;
}
	void input(char guess[6]){
	int n = 0;
		do{
			n++;
			printf("Guess %d:\n", n);
			scanf("%s", guess);
		while(checking(guess) == 0){
			printf("Invaild try again\nGuess %d:\n", n);
			scanf("%s", guess);
		}
		guess[5] = '\0';
			//printf("%s\n", guess);
		}
		while(n < 6);
	}
	
	int checking(char guess[6]){
		int i, a = 1;
		for(i = 0; guess[i] != '\0'; i++){
			if(guess[i] >= 'A' && guess[i] <= 'Z'){
			//printf("'%c' is capital\n", guess[i]);
			//a = 1;	
			}
			
			else if(guess[i] >= 'a' && guess[i] <= 'z'){
			//printf("'%c' is lowercase\n", guess[i]);
			//a = 1;	
			}
			
			else{
			//printf("'%c' is not a letter\n", guess[i]);
			a = 0;
			}
		}
		//printf("i is %d. a is %d.\n", i, a);
		if(i == 5 && a == 1){
		//printf("returning true\n");
		return(1);
		}
		else{
		//printf("returning false\n");
		return(0);
	}}
	
	void wordle(char bord[6][6]){
	int i, size = 5, a = 1;
	char word[6], guess[6]
		for(int i = 0; guess[i] != '\0'; i++){
		}
		if(guess[i] == word[i]){
		printf("Correct the word is %s\n", word);
		}
		else{
		a = 0;
		return(0);
		}}
		
	
