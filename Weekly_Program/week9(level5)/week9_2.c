#include <stdio.h>
int x[6][7];
char board(int x[6][7])
{
   printf("%c|%c|%c|%c|%c|%c|%c\n%c|%c|%c|%c|%c|%c|%c\n%c|%c|%c|%c|%c|%c|%c\n%c|%c|%c|%c|%c|%c|%c\n%c|%c|%c|%c|%c|%c|%c\n%c|%c|%c|%c|%c|%c|%c\n_____________\n1 2 3 4 5 6 7\n", x[0][0], x[0][1], x[0][2], x[0][3], x[0][4], x[0][5], x[0][6], x[1][0], x[1][1], x[1][2], x[1][3], x[1][4], x[1][5], x[1][6], x[2][0], x[2][1], x[2][2], x[2][3], x[2][4], x[2][5], x[2][6], x[3][0], x[3][1], x[3][2], x[3][3], x[3][4], x[3][5], x[3][6], x[4][0], x[4][1], x[4][2], x[4][3], x[4][4], x[4][5], x[4][6], x[5][0], x[5][1], x[5][2], x[5][3], x[5][4], x[5][5], x[5][6]);
   return 0;
}
int checkResult(int board[6][7])
{
   int i, j, k, count;
   for (i = 0; i < 7; i++)
   {
      for (j = 0; j < 6; j++)
      {
         if ((board[i][j] == 88 || board[i][j] == 79) && (board[i][j]+board[i][j + 1]+board[i][j + 2]+board[i][j + 3]==316||board[i][j]+board[i][j + 1]+board[i][j + 2]+board[i][j + 3]==352))
            return 1;
         if ((board[i][j] == 88 || board[i][j] == 79) && board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] == board[i + 3][j])
            return 1;
         count = 0;
         for (k = 1; k < 4; k++)
         {
            if (board[i][j] == board[i + k][j + k] && (board[i][j] == 88 || board[i][j] == 79))
               count++;
            else
               count = 0;

            if (count == 3)
               return 1;
         }
      }
   }
   return 0;
}

char mark(int a)
{
   if (a == 2)
      return 'O';
   else
      return 'X';
}
int main()
{
   int p = 1, input, count;
   int k = 0, c = 1, h, t;
   for (int i = 0; i < 6; i++)
   {
      for (int j = 0; j < 7; j++)
         x[i][j] = ' ';
   }
   board(x);
   t = 0;
   while (k == 0)
   {
      int i = 0;
      t = 0;
      while (t == 0)
      {
         count = 0;
         printf("Player %c turn :", mark(p));
         scanf("%d", &input);
         for (h = 6; h >= 0; h--)
         {
            if (x[h][input - 1] != 32 || input > 7 || input < 1)
               count++;
         }
         if (count == 7)
         {
            printf("Invild move!!!\n");
         }
         else
         {

            for (h = 6; h >= 0; h--)
            {
               if (x[h][input - 1] == 32)
               {
                  x[h][input - 1] = mark(p);
                  t = 1;
                  break;
               }
            }
         }
      }
      board(x);
      k = checkResult(x);
      if (k == 1)
         printf("Player %c win!!!!\n", mark(p));
      {
         if (p == 1)
            p++;
         else
            p--;
      }
   }
   printf("--------------END----------------");
   return 0;
}