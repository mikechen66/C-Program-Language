
/* Fig.4.3 Function f */

int f(int x) {
    int n;
    
    n = 1;
    if (x%2 == 0) 
        n *= 2;
    if (x%3 == 0) 
        n *= 3;
    if (x%5 == 0) 
        n *= 5;
    if (x%7 == 0) 
        n *= 7;
    if (x%11 == 0) 
        n *= 11;
    if (x%13 == 0) 
        n *= 13;
    if (x%17 == 0) 
        n *= 17;
    if (x%19 == 0) 
        n *= 19;
    return n;
}