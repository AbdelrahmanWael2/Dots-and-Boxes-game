#ifndef MY_HEADERS_H_INCLUDED
#define MY_HEADERS_H_INCLUDED
void startNewGame();
void AI(int size, int array[size][size], int *rowx , int *colx);
int checkScore(int score, int row, int col ,int size, int array[size][size],int *turn,int arrayPlayer[size][size]);
void saveGame(int size,int turn,int noPlayers,int noMovesLeft,int score1,int score2,char player1[10],char player2[10] ,int array[size][size], int array1[size][size], int array2[size][size], int turnArray[60], int counter, int stor[30], int stoc[30]);
void checkRank(int score, char playerName[10]);
void setToZero(int size, int arr[size][size]);
void loadedGames();
void redo1(int *score1, int *score2 ,int counter,int stor[20],int stoc[20],int size,  int array2[size][size], int array1[size][size], int array[size][size], char active[size][size], int turn,  int removedline[20], int undos, char passive[size][size]);
void  undo1(int *score1, int *score2 ,int counter,int stor[20],int stoc[20],int size,  int array2[size][size], int array1[size][size], int array[size][size], char active[size][size],   int removedline[20], int undos);
void redo2(int *score1, int *score2, int counter, int size, int array[size][size], int array1[size][size], int array2[size][size], char active[size][size], int stor[20], int stoc[20], int turn, char passive[size][size], int removedline[20], int undos);
void undo2(int size, int *score1, int *score2, int array1[size][size], int array2[size][size], int stor[30], int stoc[30], int counter, int array[size][size], char active[size][size], int removedline[20], int undos);
#endif // MY_HEADERS_H_INCLUDED
