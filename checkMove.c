#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

        void checkMove()//we check for whether the line would close a box or not
    {   int *goodMove=0;int *I,*J
    //for horizontal line check
    for(int i=0;i<size;i=i+2)
    {
        for(int j=1;j<size;j=j+2)
        {
            if(dots[i+2][j]==205&&dots[i+1][j+1]==186&&dots[i+1][j-1]==186 || dots[i-2][j]==205 && dots[i-1][j+1]==186 && dots[i-1][j-1]==186)
            {
                *goodMove=1;
                *I=i;
                *J=j;
                break;//we found a line that closes the box so we break from the loop to play the move
            }}}
        if(goodMove==0)//if we didnt find a good move for rows
        //apply for vertical lines
       {for(int i=1;i<size;i=i+2)
       {
           for(int j=0;j<size;j=j+2)
           {
               if(dots[i][j+2]==186&&dots[i-1][j+1]==205&&dots[i+1][j+1]==205 || dots[i][j-2]==186 && dots[i-1][j-1]==205 && dots[i+1][j-1]==205)
               {
                   *goodMove=1;
                   *I=i;
                *J=j;break;}}}}

 }









