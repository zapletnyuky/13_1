#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;
void nsSum::sum(){
    n = 0;
    a = -x;
    S = a;
    do{
        n++;
        dod();
    } while(fabs(a) > eps);
}
