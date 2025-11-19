#include <stdio.h>

int main()
{
    char ttt[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char move='X';
    int pos;
    for(int i=1;i<=9;i++)
    {
        printf("Enter Your move:");
        scanf("%d",&pos);
        ttt[pos]=move;
        printf("%c|%c|%c\n",ttt[0],ttt[1],ttt[2]);
        printf("-+-+-\n");
        printf("%c|%c|%c\n",ttt[3],ttt[4],ttt[5]);
        printf("-+-+-\n");
        printf("%c|%c|%c\n",ttt[6],ttt[7],ttt[8]);
        if(ttt[0]=='X' && ttt[1]=='X' && ttt[2]=='X'||ttt[3]=='X' && ttt[4]=='x' && ttt[5]=='x'|| ttt[6]=='x' && ttt[7]=='X' && ttt[8]=='X'||
        ttt[0]=='X'&& ttt[3]=='X'&& ttt[6]=='x'||ttt[1]=='x'&& ttt[4]=='X' && ttt[7]=='X' || ttt[3]=='x'&& ttt[5]=='x'&& ttt[8]=='X'||ttt[0]=='X' &&
        ttt[4]=='X'&& ttt[8]=='X' || ttt[2]=='X' && ttt[4]=='X' && ttt[6]=='X')
        {
            printf("X wins, game over");
            break;
        }
         else if(ttt[0]=='O' && ttt[1]=='O' && ttt[2]=='O'|| ttt[3]=='O' && ttt[4]=='O' && ttt[5]=='O'|| ttt[6]=='O' && ttt[7]=='O' && ttt[8]=='O'||
        ttt[0]=='O'&& ttt[3]=='O'&& ttt[6]=='O'||ttt[1]=='O'&& ttt[4]=='O' && ttt[7]=='O' || ttt[3]=='O'&& ttt[5]=='O'&& ttt[8]=='O'||ttt[0]=='O' &&
        ttt[4]=='O'&& ttt[8]=='O' || ttt[2]=='O' && ttt[4]=='O' && ttt[6]=='O')
        {
            printf("O wins, game over");
            break;
        }
        if(i==9)
        printf("tie");
    
        
        
        
        
        if(move=='X')
        move='O';
        else
        move='X';
    }
    
    
    
    return 0;
}