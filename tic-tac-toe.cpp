#include <bits/stdc++.h>
#include<ctime>
using namespace std;
void printDiagram(char arr[3][3]);
int status(char arr[3][3]);

int main(void) {
   cout<<"***************Tic-Tac-Toe********************\n";
   char arr[3][3]={ {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
   int rowValues[3]={-1,-1,-1},colValues[3]={-1,-1,-1}; // i have to work here for taking input for computer

   char player = 'u'; bool computer = false;

 cout<<"If you want to play with computer input 'y'/'Y' else 'n'/'N' to play with friend.\n";
   cin>>player;
   if(player>Z) player = player - 32;
   if(player == 'N' || player == 'Y') computer = true;
   else {cout<<"INVALID player type chosen! re-run the program!\n"; return 0;}
   

    

   printDiagram(arr);
   int turns = 9;
   int stat = -1;
   while(turns--){
       int row,col; char cellValue;
       cout<<"Enter Position Row(1-3) and Column (1-3)\n";
       cout<<"Row: ";cin>>row; cout<<endl;
       cout<<"Column: ";cin>>col; cout<<endl;
     
       if(row<1 || col<1 || col>3 || row > 3){
         cout<<"You have exceeded the boundary of the set! Now re-run the program!!\n";
         return 0;
       }

       cout<<"Enter X or O: "; cin>>cellValue; cout<<endl;
       arr[row-1][col-1] = cellValue;
       printDiagram(arr);
       stat = status(arr);
       if(stat)
       {cout<<arr[row-1][col-1]<<" WINS!!! \n";break;}
       
   }
   if(stat == -1) {
      cout<<"UNEXPECTED ERROR! Re-run the program.\n"
   }
   if(!stat) cout<<"DRAW!\n";
   
   
   
 
}

void printDiagram(char arr[3][3]){
   cout<<"      |       |       \n";
   cout<<"  "<<arr[0][0]<<"   |   "<<arr[0][1]<<"   |   "<<arr[0][2]<<endl;
   cout<<"      |       |       \n";
   cout<<"----------------------\n";
   cout<<"      |       |       \n";
   cout<<"  "<<arr[1][0]<<"   |   "<<arr[1][1]<<"   |   "<<arr[1][2]<<endl;
   cout<<"      |       |       \n";
   cout<<"----------------------\n";
   cout<<"      |       |       \n";
   cout<<"  "<<arr[2][0]<<"   |   "<<arr[2][1]<<"   |   "<<arr[2][2]<<endl;
   cout<<"      |       |       \n";
}

int status(char arr[3][3]){
    int win=0;
   if((arr[0][0]==arr[0][1] && arr[0][0]==arr[0][2])&&(arr[0][2]=='X' || arr[0][2]=='O'))
   win = 1;
   else if((arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2])&&(arr[1][2]=='X' || arr[1][2]=='O'))
   win = 1;
   else if((arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2])&&(arr[2][2]=='X' || arr[2][2]=='O'))
   win = 1;
   else if((arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0])&&(arr[2][0]=='X' || arr[2][0]=='O'))
   win = 1;
   else if((arr[0][1]==arr[1][1] && arr[0][1]==arr[2][1])&&(arr[2][1]=='X' || arr[2][1]=='O'))
   win = 1;
   else if((arr[0][2]==arr[1][2] && arr[0][2]==arr[2][2])&&(arr[2][2]=='X' || arr[2][2]=='O'))
   win = 1;
   else if((arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])&&(arr[2][2]=='X' || arr[2][2]=='O'))
   win = 1;
   else if((arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])&&(arr[2][0]=='X' || arr[2][0]=='O'))
   win = 1;
   
   if (win) return 1;
   return 0;
   
}

void autoInsert(arr[3][3],int rowValues[3],int colValues[3]){
   srand(time(NULL)); 
   int row = rand() % 3 + 1 , col = rand() % 3 + 1;
   while()

}   

