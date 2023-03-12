#include <iostream>
using namespace std;
int main(){
    int tuoi;
    cout << "Nhap tuoi cua hoc sinh: ";
    cin >> tuoi;
    if(tuoi >= 16){
        cout << "Tuoi cua hoc sinh la: " << tuoi << " tuoi" << endl;
        cout << "Hoc sinh du tuoi vao lop 10!";
    }else{
        cout << "Tuoi cua hoc sinh la: " << tuoi << " tuoi" << endl;
        cout << "Hoc sinh khong du tuoi vao lop 10!";
    }
    return 0;
}