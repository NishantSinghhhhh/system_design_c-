#include<iostream>

using namespace std;

class NoSingleton{
    public:
        NoSingleton(){
            cout<<"singleton contructor called"<<endl;
        }
};

int main(){
    NoSingleton* s1 = new NoSingleton();
    NoSingleton* s2 = new NoSingleton();

    cout<<(s1 == s2)<<endl;
}