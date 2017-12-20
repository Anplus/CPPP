 #include <iostream>
 using namespace std;
 int main(){
     //cout<<"hello word"<<endl;
    cout<<'\x4d'<<"\n"<<"\115"<<endl;
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    const int i = 1;
    const int *const p3 = &i;
    const int j = *p3;
    cout<<j<<endl;
    return 0;
 }