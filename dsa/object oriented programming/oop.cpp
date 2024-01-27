#include<iostream>
using namespace std;
  class Hero{
   private:
    //propertirs
   int health;

   public:
   char level;

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
  //creation of object

    Hero akash;
    cout<< "size of akash "<<sizeof(akash)<<endl;
    cout<< "akash helath is"<< akash.getHealht()<< endl;
    akash.setHealth(80);
    
   // akash.health = 90 ;
    akash.level ='A';

    cout<<  "health " << akash.getHealht() << endl;
    cout<< "level" << akash.level << endl;

 }