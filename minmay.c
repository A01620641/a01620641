#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    char mayor;
    int n;
    do{
        n = read(STDIN_FILENO, &c, 1);
        mayor = toupper(c);
        write(STDOUT_FILENO, &mayor, 1);
    }while(n != 0);
    return 0;
}
