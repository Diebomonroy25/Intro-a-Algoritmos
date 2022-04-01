#include <stdio.h>

struct student {
    int alg;
    int fis;
    float score;
    char* name;
    char* group;
};

struct transport {
    int wheels;
    char* color;
    char* vehicule_name;
};

int main(){

    struct student sonia = {10, 10, 10, "Sonia", "Data 1-A"};
    struct student diego = {5, 7, 6.5, "Diego", "Data 1-A"};
    struct transport car = {4, "Black", "Honda Civic"};
    struct transport bus = {8, "Puerple", "Ruta 17"};
    struct transport motorcycle = {2, "Red", "KTM 600"};

    ///Showing info
    printf("%s has a score of %f\n",sonia.name,sonia.score);
    return 0;
}