#include<iostream>
using namespace std;
// building a guess game/
int main(){
int secret_number=10;
int guess;
int guess_count=0;
int guess_limit=5;
bool outofguesses=false;

while(secret_number!=guess && !outofguesses ){
if(guess_count<guess_limit){
cout<<" enter guess:";
cin>>guess;
guess_count++;
}
else{
    outofguesses=true;
}
}
if(outofguesses){
cout<<" you lose";
}
else{
    cout<<" you win";
}




return 0;
}








