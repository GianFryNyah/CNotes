#include <stdio.h>

int main(){
    // 2D Array = Array where each element is an array
    //            array[][size of each element] = {{}, {}, {}};

    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'},
                        {'*', '0', '#'}};
    
    int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%c", numpad[i][j]);
            if(!(j==2)){printf(" | ");}
            else{printf("\n");}
        }
        if(!(i==3)){printf("---------\n");}
        else{printf("\n");}
    }
    return 0;
}