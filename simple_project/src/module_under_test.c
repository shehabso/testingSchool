#include "module_under_test.h"
#include "module_A.h"


unsigned char foo(){
    if(bar()){
        return 1;
    }
    return 0;
}