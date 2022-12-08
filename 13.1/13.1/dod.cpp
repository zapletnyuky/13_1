#include "dod.h"
#include "var.h"
#include "cmath"
using namespace nsVar;
void nsDod::dod(){
    a *= (M_PI/2)*(pow(x,2)*((2*n-1)/(2*n+1))*(-1));
}
