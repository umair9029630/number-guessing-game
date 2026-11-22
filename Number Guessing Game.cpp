#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
int computer , a , b , c;
do{ 
    b=7;
    cout<<"======================================="<<endl;
    cout<<"          NUMBER GUESSING GAME         "<<endl;
    cout<<"======================================="<<endl;
      srand(time(0));
    computer = rand() % 99 + 1;
       cout<<"Computer has picked the Number from 1-99"<<endl;
        cout<<"You have Total 7 Tries";        
  do{
    cout<<"\n\nEnter Your Guess: ";
    cin>> a;

    if(cin.fail()){
        cin.clear();
     cin.ignore(1000, '\n');
        cout<<"Invalid input! Enter a Number";
    continue; }

    else if(a<=0 || a>99){
        cout<<"Invalid Input! Enter Number from 1-99"<<endl;
        continue;
    }
    
   else if(a>computer){
        cout<<"Try a smaller number"<<endl;
       b--;
         cout<<"Total Tries Left: "<<b<<endl;
       continue;
    }
    else if (a<computer){
        cout<<"Try a Greater Number"<<endl;
        b--;
          cout<<"Total Tries Left: "<<b<<endl;
        continue;
    }
    else if( a==computer){
        cout<<"Yayyy, You win"<<endl;
        cout<<"The Number was: "<<computer;
         break;
    }

    b--;
} while(b!=0);
     if(b==0){  cout<<"You Lost"<<endl;
        cout<<"The Number was: "<<computer<<endl;
             }
    cout<<"\nWanna Play Again? (yes:1/no:0): ";
    cin>>c;
}while(c==1);
    
    return 0;
}
