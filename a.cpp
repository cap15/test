#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = a;
}
int main(){
        int a = 1;
        int b = 0;
        cout<<a<<' '<<b<<endl;
        swap(a,b);
        cout<<a<<' '<<b<<endl; 
        return 0;

}
