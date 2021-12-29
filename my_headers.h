#ifndef MY_HEADERS_H_INCLUDED
#define MY_HEADERS_H_INCLUDED
void startNewGame();
void AI(int size, int array[size][size], int *rowx , int *colx);
int checkScore(int score, int row, int col ,int size, int array[size][size],int *turn,int arrayPlayer[size][size]);
void saveGame(int size,int turn,int noPlayers,int noMovesLeft,int score1,int score2,char player1[10],char player2[10] ,int array[size][size], int array1[size][size], int array2[size][size]);
void checkRank(int score, char playerName[10]);
void setToZero(int size, int arr[size][size]);
void loadedGames();

#endif // MY_HEADERS_H_INCLUDED
