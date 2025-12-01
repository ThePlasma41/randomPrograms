#include<stdio.h>
 
int main(){
int n=10;

for(int i=0;i<n;i++){
  for(int j=0;j<n*2-1;j++){
     if(((n-i-1 == j)||(n+i-1 == j)) && j!=n-1 ) printf("0 ");
     else if((n+i-1 > j && n-i-1 <j) || j==n-1 ) printf("1 ");
     else printf("  ");

  } printf("\n");

}
for(int i=n-2;i>=0;i--){
  for(int j=2*n-2;j>=0;j--){
     if(((n-i-1 == j)||(n+i-1 == j)) && j!=n-1 ) printf("0 ");
     else if((n+i-1 > j && n-i-1 <j) || j==n-1 ) printf("1 ");
     else printf("  ");

  } printf("\n");

}


return 0;
}
