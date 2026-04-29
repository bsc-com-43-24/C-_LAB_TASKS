#include <iostream> 
using namespace std; 
int main(){
    int* num = new int;//dynamically allocate an integer
    string* text = new string;//dynamically allocate a string
    cout<<"Enter an integer";
    cin>>*num;
    cout<<"Enter a string";
    cin>>*text;
    cout<<"You entered an integer"<<*num;
    cout<<"You entered a string"<<*text;
    delete num;
    delete text;
    return 0;
}