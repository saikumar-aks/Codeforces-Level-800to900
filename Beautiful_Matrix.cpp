#include<iostream>
 
#define Log(Msg) std::cout<<Msg<<std::endl;
 
int main()
{
   int matrix[5][5] = {0};
   int posX, posY;
 
   for (int i = 0 ; i < 5; i++) {
       for (int j = 0; j < 5; j++) {
           std::cin >> matrix[i][j];
 
           if (matrix[i][j] == 1) {
               posX = i;
               posY = j;
           }
       }
   }
 
   std::cout << abs(posX - 2) + abs(posY - 2) << std::endl;
 
 
   return 0;
}
