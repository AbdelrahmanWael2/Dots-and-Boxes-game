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
#include <windows.h>
#include "my_headers.h"


       void AI(int size, int array[size][size], int *rowx , int *colx)
       {
           int played=0;
           int goodmove , badmove, I, J, A, B;

           gMove(size, array , &goodmove, &I, &J);
           if(goodmove==1)
           {
               *rowx=I;*colx=J;
           }
           if(goodmove==0){
           bMove(size, array, &badmove, &A, &B);
           if(badmove==0)
           {
               *rowx=A;*colx=B;
           }else
           {for(int i=0;i<size;i=i+2)
            {
            for(int j=1;j<size;j=j+2)       //we found any horizontal place to put line
            {if(array[i][j]==0){
                *rowx=i;*colx=j;played=1;break;}}}}}


            if(goodmove==0 && badmove==1 && played==0)
            {for(int i=1;i<size;i=i+2)
            {
            for(int j=0;j<size;j=j+2)
            {if(array[i][j]==0){

                *rowx=i;*colx=j;

             }}}}}


       void gMove(int size, int array[size][size],int *goodmovex,int *Ix,int *Jx)
       {

           //for good move
            //for horizontal line check
            *goodmovex=0;
            for(int i=0;i<size;i=i+2)
            {
            for(int j=1;j<size;j=j+2)
            {if(array[i][j]==0){
            if(array[i+2][j]==1&&array[i+1][j+1]==1&&array[i+1][j-1]==1 || array[i-2][j]==1 && array[i-1][j+1]==1 && array[i-1][j-1]==1)
            {
                *goodmovex=1;
                *Ix=i;
                *Jx=j;
                break;//we found a line that closes the box so we break from the loop to play the move
            }}}}
            if(*goodmovex==0)//if we didnt find a good move for rows
            //apply for vertical lines
            {for(int i=1;i<size;i=i+2)
            {
            for(int j=0;j<size;j=j+2)
            {if(array[i][j]==0){
            if(array[i][j+2]==1&&array[i-1][j+1]==1&&array[i+1][j+1]==1 || array[i][j-2]==1 && array[i-1][j-1]==1 && array[i+1][j-1]==1)
            {
                *goodmovex=1;
                *Ix=i;
                *Jx=j;break;}}}}}

            if(*goodmovex==0){*Ix=-1;*Jx=-1;}}


            //for bad move
            void bMove(int size, int array[size][size], int *badmovex, int *Ax, int *Bx)
            {   int s1=0,s2=0,s3=0,s4=0; *badmovex=1;
                //for bad move
                //for vertical check

                for(int a=1;a<size;a=a+2)
                {
                for(int b=0;b<size;b=b+2)
                {s1=0;s2=0;
                if(array[a][b]==0){
                if(array[a-1][b-1]==1){s1++;}
                if(array[a][b-2]==1){s1++;}
                if(array[a+1][b-1]==1){s1++;}
                if(array[a][b+2]==1){s2++;}
                if(array[a-1][b+1]==1){s2++;}
                if(array[a+1][b+1]==1){s2++;}
                if(s1!=2 && s2!=2){
                        *badmovex=0;*Ax=a;*Bx=b;break;}}}}//we found a move thats not bad

                if(*badmovex==1){//for horizontal check

                for(int a=0;a<size;a=a+2)
                    {
                    for(int b=1;b<size;b=b+2)
                    {s3=0;s4=0;
                        if(array[a][b]==0){
                        if(array[a+2][b]==1){s3++;}
                        if(array[a+1][b-1]==1){s3++;}
                        if(array[a+1][b+1]==1){s3++;}
                        if(array[a-2][b]==1){s4++;}
                        if(array[a-1][b-1]==1){s4++;}
                        if(array[a-1][b+1]==1){s4++;}
                        if(s3!=2 && s4!=2){
                                *badmovex=0;*Ax=a;*Bx=b;break;}}}}}}//we found a move thats not bad

































































