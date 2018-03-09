#include <stdio.h>
#include <stdlib.h>

typedef struct player {
    char playerName[20];
    char discType;
    int discNumber;
} player;
typedef struct disc {
    int discColour;
    int xPos;
    int yPos;
} disc;

int main()
{
    char theBoard[7][7]; int remainingDiscs=60;
    theBoard[3][3]='W'; theBoard[4][4]='W';
    theBoard[3][4]='B'; theBoard[4][3]='B';
    player player1, player2;
    printf("Player 1, please enter your name: ");
    scanf("%[^\n]s", player1.playerName);
    printf("Player 2, please enter your name: ");
    scanf("%[\n]s", player2.playerName);
    player1.discType='B';
    player2.discType='W';
    printf("\n0 1 2 3 4 5 6 7 8\n");
    for(int i=0;i<8;i++) {
        printf("%d", i+1);
        for(int j=0;j<8;j++) {
            if(j==7&&(theBoard[i][j]=='B'||theBoard[i][j]=='W')) {
                printf("|%c|\n", theBoard[i][j]);
                break;
            }
            else if(j==7)
                printf("|x|\n");
            else if(theBoard[i][j]=='B'||theBoard[i][j]=='W'){
                printf("|%c", theBoard[i][j]);
            }
            else {
                printf("|x");
            }
        }
    }
}
