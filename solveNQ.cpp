#include "SolveNQ.h"
#include "print.h"
#include "solveNQUtil.h"

bool solveNQ()
{
   int board[N][N] = {0};
   if (solveNQUtil( board, 0) == false)
   {
       cout<<"Solution does not exist"<<endl;
       return false;
   }
   print(board);
   return true;
} 
