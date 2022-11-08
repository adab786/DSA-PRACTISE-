#include <iostream>

using namespace std;
// //for printing m x n rectangle
// int main(){
//     int n,m;
//     cout<<"how many stars?\n";
//     cin>>n>>m;
//     for(int i=0;i<n;i++){
//         cout<<"*";
//          for(int j=0;j<m;j++){
//              cout<<"*";
             
//          }
//          cout<<endl;
//     }
//     return 0;
// }


// for hollow square 
int main(){
 int n,m;
 cout<<"no of rows and column\n";
 cin>>n>>m;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==0 ||j==0|| i==n-1|| j==m-1)cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
 }
 

}