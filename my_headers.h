#ifndef MY_HEADERS_H_INCLUDED
#define MY_HEADERS_H_INCLUDED
void startNewGame();
int checkScore(int score, int row, int col ,int size, int array[size][size],int *turn,int arrayPlayer[size][size]);
void AI(int size, int array[size][size], int *rowx , int *colx);
//void undo(int noMoves, int numOfPlayers, int size,  int array[size][size], int array1[size][size], int array2[size][size], char active[size][size], int row, int col );
void loadedGames();

#endif // MY_HEADERS_H_INCLUDED
