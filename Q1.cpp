#include<iostream>
using namespace std;

struct item{
     int id;
     float cost;};
     
int main(){
        item items[6]={{1,22.5},{2,15},{3,72.5},{4,55}};
        
 cout<<"items with cost greater than 50.00 "<<endl;       
 for( int i=0;i<6;i++){
   if(items[i].cost>50.00){
   cout<<"Item ID:"<<items[i].id<<" Cost:"<<items[i].cost<<endl;}
   }
   return 0;
   }
 
