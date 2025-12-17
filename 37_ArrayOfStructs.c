#include <stdio.h>

typedef struct{
    char model[50];
    int year;
    int price;
}Car;

void printCarValues(Car car);

int main(){

    // array of structs = Array where each element CONTAINS a struct {}
    //                    It helps organize and groups together related data

    Car cars[] = {{"Tesla Model 3 RWD", 2025, 42000},
                  {"BMW X1 x20dDrive", 2013, 13000},
                  {"Alfa Romeo Stelvio 2.0 Diesel", 2018, 50000}};
    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}

void printCarValues(Car car){
    printf("%s %d $%d\n", car.model, car.year, car.price);
}