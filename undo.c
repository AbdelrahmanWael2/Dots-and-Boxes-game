#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"
#include <windows.h>
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define YELB "\e[43m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"
#define WHTB "\e[47m"
#include <ctype.h>
#include <string.h>

#include "my_headers.h"




  void undo(int noMoves, int numOfPlayers, int size,  int array[size][size], int array1[size][size], int array2[size][size], char active[size][size], int row, int col )
  {

      //for player vs player
      if(numOfPlayers==2)
      {
         if(noMoves%2!=0)//player 1 wants to undo

      {   array1[row][col]=0;
          array[row][col]=0;
          if(row%2==1 && col%2==0){active[row][col]='\0';}   //reset line to space
          else{active[row][col]='\t';}
          noMoves++;}else   //player 2 wants to undo
          {
          array2[row][col]=0;
          array[row][col]=0;
          if(row%2==1 && col%2==0){active[row][col]='\0';}   //reset line to space
          else{active[row][col]='\t';}}











  }}





















