#include "main.h"

/**
 * _islower - main block
 * Description: function that checks for lowercase letters
 */
int _islower(int c)
{
    
    if (c >= 'a' && c <= 'z'){
        return(1);
    }
    else{
        return(0);
    }
}