#include <bits/stdc++.h>
using namespace std;
void printDiagram(char arr[3][3]);
int status(char arr[3][3]);

int main(void) {
   cout<<"***************Tic-Tac-Toe********************\n";
   char arr[3][3]={ {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
   int stat = 0;
   printDiagram(arr);
   int turns = 9;
   while(turns--){
       int row,col; char cellValue;
       cout<<"Enter Position Row(1-3) and Column (1-3)\n";
       cout<<"Row: ";cin>>row; cout<<endl;
       cout<<"Column: ";cin>>col; cout<<endl;
       cout<<"Enter X or O: "; cin>>cellValue; cout<<endl;
       arr[row-1][col-1] = cellValue;
       printDiagram(arr);
       stat = status(arr);
       if(stat)
       {cout<<arr[row-1][col-1]<<" WINS";break;}
       
   }
   if(!stat) cout<<"DRAW\n";
   
   
 
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
   if(arr[0][0]==arr[0][1] && arr[0][0]==arr[0][2])
   win = 1;
   else if(arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2])
   win = 1;
   else if(arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2])
   win = 1;
   else if(arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0])
   win = 1;
   else if(arr[0][1]==arr[1][1] && arr[0][1]==arr[2][1])
   win = 1;
   else if(arr[0][2]==arr[1][2] && arr[0][2]==arr[2][2])
   win = 1;
   else if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
   win = 1;
   else if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
   win = 1;
   
   if (win) return 1;
   return 0;
   
   }

