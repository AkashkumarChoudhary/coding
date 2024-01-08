#include<iostream>
using namespace std;

void homeReach(int src , int dest) {

  cout<< "source " << src << " " << "destination " << dest << endl;

    
    if (src==dest){
       

        cout<< "reached home" << endl;
        return ;
    }

    //processing
    src++;
    //recusion
    homeReach(src, dest) ;
    
}

int main(){

    int src =2;
    int dest =6;
    homeReach (src, dest);

}
