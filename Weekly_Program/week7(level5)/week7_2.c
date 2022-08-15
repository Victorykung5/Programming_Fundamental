#include <stdio.h>
int main()
{   //XO game!!!
    int c = 1, k = 0, f = 9, d, e,m;
    int x[3][3];
    int z, y = 1;
    int count = 0;
    while (y == 1)
    {
        count = 0;
        int i=0;
        while(i<3)
        {
            for (int j = 0; j < 3; j++)
            {
                x[i][j] = ' ';
            }
            i++;
        }
        printf(" |1|2|3|\n=========\n1|%c|%c|%c|\n=========\n2|%c|%c|%c|\n=========\n3|%c|%c|%c|\n", x[0][0], x[0][1], x[0][2], x[1][0], x[1][1], x[1][2], x[2][0], x[2][1], x[2][2]);
        while (k != -1)
        {
            while (f != 0)
            {   if(c==1)
                printf("Player X turn (column,row):");
                else
                printf("Player 0 turn (column,row):");
                scanf("%d %d", &d, &e);
                if (d > 3 || e > 3 || d < 1 || e < 1 || x[d - 1][e - 1] != 32)
                {
                    printf("Invalid move!!! Try agian\n");
                    f = 1;
                }
                else
                {
                    f = 0;
                }
            }
            if(c==1)
            x[d - 1][e - 1] = 'X';
            else
            x[d - 1][e - 1] = 'O';
            printf(" |1|2|3|\n=========\n1|%c|%c|%c|\n=========\n2|%c|%c|%c|\n=========\n3|%c|%c|%c|\n", x[0][0], x[0][1], x[0][2], x[1][0], x[1][1], x[1][2], x[2][0], x[2][1], x[2][2]);
            m=0;
            for(int t=0;t<3;t++)
            {
                int j = 0;
                if (((x[0][t] == x[1][t]) && (x[0][t] == x[2][t]) && x[0][t] != 32) || ((x[t][0] == x[t][1]) && (x[t][0] == x[t][2]) && x[t][0] != 32) || ((x[0][0] == x[1][1]) && (x[0][0] == x[2][2]) && x[0][0] != 32) || ((x[0][2] == x[1][1]) && (x[0][2] == x[2][0]) && x[0][2] != 32))
                {   if(c==1)
                    {printf("Player X is the winner!!!\n");
                    m++;}
                    else
                    {printf("Player O is the winner!!!\n");
                    m++;}
                    k = -1;
                    break;
                }
                                
            }
            if (c == 2)
                c--;
            else
                c++;
            f++;
            count++;
            if (count == 9&&m==0)
            {
                printf("Draw!!! No one win\n");
                break;
            }
        }
        printf("Do you want to try again?(Y/N)   :");
        scanf("%s", &z);
        k = 0;
        f = 9;
        y = 0;
     
        if (z == 89 || z == 121)
        {
            y = 1;
        }
        
    }
    printf("-----END-----");
    return 0;
}
