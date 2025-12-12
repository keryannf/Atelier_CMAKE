#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {

    if (argc < 3 || argc > 4) {
        printf("Erreur de parametres");
        return 0;
    }

    char* op = argv[1];
    double r = 0;

    if (strcmp(op, "car") == 0) {
        // fonction à UN seul argument
        r = _car(atof(argv[2]));
        printf("%lf", r);
    }
    else if (argc == 4) {
        // opérations à DEUX arguments
        double a = atof(argv[2]);
        double b = atof(argv[3]);

        if (strcmp(op, "add") == 0) r = _add(a, b);
        else if (strcmp(op, "sub") == 0) r = _sub(a, b);
        else if (strcmp(op, "mul") == 0) r = _mul(a, b);
        else if (strcmp(op, "div") == 0) r = _div(a, b);
        else {
            printf("Erreur de parametres");
            return 0;
        }

        printf("%lf", r);
    }
    else {
        printf("Erreur de parametres");
    }

    return 0;
}
