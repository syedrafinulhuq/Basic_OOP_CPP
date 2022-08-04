#include<iostream>
using namespace std;

class Square{
private :
    int Num;
public:
    void Get(){
        cout<< "Enter Your Number :";
        cin>>Num;
    }

    void Display(){
        cout<<"Square Is : "<<Num*Num;

    }



};

int main(){
    Square Obj;
    Obj.Get();
    Obj.Display();

}
