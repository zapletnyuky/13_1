#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout<<"dx = "; cin>>dx;
    cout<<"eps = "; cin>>eps;
    cout << endl;
    x = xp;
    while ( x <= xk ){
        sum();
        cout<<x<<" " <<S<<" "
        <<exp(x)<<" "
        << n << endl;
        x += dx; }
        cin.get();
        return 0;
    
}
        
