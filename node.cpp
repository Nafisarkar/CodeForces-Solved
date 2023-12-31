#include <corecrt.h>
#include<iostream>
using namespace std;

struct node{
    string name;
    int i ;
};

int main(){
    node array[2];
    array[0].i = 1;
    array[0].name = "name 1";
    array[1].i = 2;
    array[1].name = "name 2";

    for(int i = 0;i<sizeof(array)/sizeof(array[0]);i++){
        cout<<"name "<<array[i].name <<endl;
        cout<<"id   "<<array[i].i <<endl;
    }
    return 0;
}