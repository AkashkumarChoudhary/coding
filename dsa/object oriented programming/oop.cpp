#include<iostream>
#include"Hero.cpp"
using namespace std;
  class Hero{
  
    //propertirs
     private:
   int health;// data member

   public:
   char level;

  Hero(){
    cout<< "Constructor Called" << endl;
  }

// Paramerterised Constructor
Hero(int health){
  cout<< "this->" << this << endl;
 this-> health =  health;
}

  int getHealht(){ 
    return health ;
  }
  char getlevel(){
    return level;
  }
  void setHealth(int h){
    health=h ;
  }
  void setlevel(char ch){
    level =ch;
  }

  };
int main (){


// object created statistically
 Hero akash(70);
// cout<< "hello akku"<<endl;
cout<< "Address of akash" << &akash <<endl;
akash.getHealht();

// object created dynamically
// Hero* h = new Hero;
Hero *h = new Hero();












 /*
// static allocation
Hero a;
a.setlevel('B');
a.setHealth(80);
cout<< "level is :" << a.level << endl;
cout<< "health is :" << a.getHealht()<< endl;

//  dYNAMIC ALLOCATION
Hero* b = new Hero;
b-> setlevel('A');
b -> setHealth(70);
 cout<< "level is :" << (*b).level << endl;
cout<< "health is :" << (*b).getHealht()<< endl; 

cout<< "level is : " << b->level << endl;
cout<< "health is:  " << b-> getHealht() << endl; 
*/
  //creation of object

  //   Hero akash;
  //   cout<< "size of akash "<<sizeof(akash)<<endl;
  //   cout<< "akash heal th is"<< akash.getHealht()<< endl;
  //   akash.setHealth(80);
    
  //  // akash.health = 90 ;
  //   akash.level ='A';

  //   cout<<  "health " << akash.getHealht() << endl;
  //   cout<< "level" << akash.level << endl;

 }