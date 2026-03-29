//loops in c++:
#include <iostream>
using namespace std;

int main() {
    //for loop:
    cout<<"For loop:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    //while loop:
    cout<<"While loop:"<<endl;
    int j=0;
    while(j<5){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;

    //do-while loop:
    cout<<"Do-while loop:"<<endl;
    int k=0;
    do{
        cout<<k<<" ";
        k++;
    }while(k<5);
    cout<<endl;

    return 0;
}