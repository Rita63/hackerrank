#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int i;long l; char a; float f; double d;
    cin>>i>>l>>a>>f>>d;
    cout<<i<<endl<<l<<endl<<a<<endl;
      
    
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(9)<<d;
    return 0;
}