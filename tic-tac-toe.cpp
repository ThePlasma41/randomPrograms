#include<iostream>
#include<ctime>
#include<vector>
#include<utility>
//#include<random>
using namespace std;

vector <pair<int,int>> all_pos = {{0,0},{0,1},{0,2},
                                  {1,0},{1,1},{1,2},
                                  {2,0},{2,1},{2,2} };

pair<int,int> bot(vector <pair<int,int>> &stored_pos){
    
   for(auto a_pos : all_pos) {
    bool found = false;
        for(auto it: stored_pos) {
            if(it.first == a_pos.first && it.second == a_pos.second)
                {found = true; break; }
        }
       if(!found)
        return {a_pos.first,a_pos.second};  
  }  
  if(stored_pos.size() == 9) return {-2,-2};
   cout<<"An Error Occured in BOT section!!\n";
   return {-1,-1};

}

void printDiagram( char (*arr)[3]);
bool checkStatus(char (*arr)[3],char p1,char p2);
void greet(int p);
int main() {
 
    char grid[3][3] = {0};
    vector <pair<int,int>> stored_pos;
    pair <int,int> botVal;

    char p1,p2,ChM; bool turn = true, machine = true;
    
  cout<<"Play with BOT? Enter Y/y, else N/n to play with friend"<<endl;
  cin>>ChM;
  if(ChM =='N' || ChM == 'n')
    machine = false;


      cout<<"Choose X or O for player 1: ";
      cin>> p1;
       
      p1 == 'X' ? p2='O':p2='X';

            for(int i=0;i<9;i++){ 
                short int r = -1, c = -1;
            if(turn) cout<<"Player 1 turn "<<endl;
            else cout<<"Player 2 turn "<<endl;

            cout << "Enter Row and Column :";
            cin >> r >> c; cout<<endl;
                
                if(r<1 || c<1 || r>3 || c>3){
                
                cout<<"Invalid row and column"<<endl;
                return 0;
                }

                stored_pos.push_back({r-1,c-1});
                

                          
                      if(turn) 
                         grid[r-1][c-1] = p1;
                      
                      else 
                         grid[r-1][c-1] = p2;
                      
                        
                         if(machine)
                             {
                              botVal = bot(stored_pos);
                              stored_pos.push_back(botVal);
                               
                              if(botVal.first == -1) {
                                return 0;  
                  
                              }

                              grid[botVal.first][botVal.second] = 'O';
                              }
                          
                          else 
                            turn = !turn;

         
           printDiagram(grid);
                 //if(i>3) 
                    if(checkStatus(grid,p1,p2)) return 0;
                 }
          
          
           greet(0);
            return 0;
    
}


void printDiagram(char (*arr)[3]){
  
    for(int i=0;i<3;i++){
          cout<<arr[i][0]<<" | "<<arr[i][1]<<" | "<<arr[i][2]<<endl;
          if(i!=2)
          cout<<" - "<<" - "<<" - "<<endl;
    }

return;
}

bool checkStatus (char (*arr)[3],char p1,char p2){
  int sum[8] = {0};

  for(int i=0;i<3;i++){
    sum[0]+= (int)arr[0][i];
    sum[1]+= (int)arr[1][i];
    sum[2]+= (int)arr[2][i];
    sum[3]+= (int)arr[i][0];
    sum[4]+= (int)arr[i][1];
    sum[5]+= (int)arr[i][2];
    sum[6]+= (int)arr[i][i];
    sum[7]+= (int)arr[i][2-i];
  }  
  for(int i=0;i<8;i++){
  
    if(sum[i]== (int) 3*p1) 
     {  greet(1); return true;}
    else if(sum[i]== (int)3*p2) 
     { greet(2); return true;}

  }
  return false;

}
void greet(int p){
    
    if(p==0) 
    {cout<<"   Draw!  "<<endl; return;}

    for(int j=0;j<5;j++){
        for(int i=0;i<20;i++)
        { 
         if(j==2 && i==1) cout<<" Player "<<p<<" Wins!!! ";
         else if(j==0 || j==4 ||i==0||i==19) cout<<'*';
         else if( !(j==2) ) cout<<' ';
        }
         cout<<endl;
}
}
