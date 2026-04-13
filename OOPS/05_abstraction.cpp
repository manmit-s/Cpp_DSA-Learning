#include <iostream>
using namespace std;

class Shape{
    virtual void draw() = 0; //pure virtual fn
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"I am drawing a circle..."<<endl;
        }
};

int main(){
    Circle c;
    c.draw();  
    return 0;
}