#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int noWords(char s[256])
{
    int counter=0,i=0;
    for(;i<256;i++)
    {
        br:
        if(s[i]=='\n'){break;}
        else
        {
            if(s[i]!=' ' && s[i]!='\t')
            {
                while(s[i]!=' ' && s[i]!='\t')
                {
                    if(s[i]=='\n'){goto br;}
                    i++;
                }
                counter++;
            }
        }
    }
    if(s[i]=='\n' && s[i-1]==' '){counter--;}
    if(s[i]=='\n' && s[i-1]=='\t'){counter--;}
    return counter+1;
}

int main()
{
    char s[10];
    fgets(s,10,stdin);
    int ans=noWords(s);
    printf("%s",s);
    return 0;
}
