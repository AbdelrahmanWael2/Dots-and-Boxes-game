#ifndef MY_HEADERS_H_INCLUDED
#define MY_HEADERS_H_INCLUDED
void startNewGame();
void AI(int size, int array[size][size], int *rowx , int *colx);
void undo(int noMoves, int numOfPlayers, int size,  int array[size][size], int array1[size][size], int array2[size][size], char active[size][size], int row, int col );


#endif // MY_HEADERS_H_INCLUDED
