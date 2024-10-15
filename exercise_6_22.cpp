#include <iostream>
using namespace std;

void Swap(int* &a, int* &b) {
    int* temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;
    int *p1 = &x, *p2 = &y;
    cout<<p1<<endl;

    cout << "Before swap: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    Swap(p1, p2);
    cout << "After swap: *p1 = " << *p1 << ", *p2 = " << *p2 << endl;

    return 0;
}
