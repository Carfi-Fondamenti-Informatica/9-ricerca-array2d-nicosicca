#include "lib.h"


void iniz(char x[10][20]){
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<20;j++)
        {
            x[i][j]=0;
        }
    }
}


void iniz(char x[20]){
    for(int i=0;i<20;i++)
    {
        x[i]=0;
    }
}

int ricerca(char nomi[10][20], char temp[20]){
    int c;
    for(int i=0;i<10;i++)
    {
        c=0;
        for(int j=0;j<20;j++)
        {
            if(nomi[i][j]==temp[j])
                c++;
            else
                break;
        }
        if(c==20)
            return i;
    }
    return -1;
}
