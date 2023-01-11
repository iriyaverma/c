#include"stdio.h"
int main(){
    int lary[3][4]={{11,12,13,14},{20,19,18,17},{100,99,98,97}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",lary[i][j]);
        }   
    }
}
