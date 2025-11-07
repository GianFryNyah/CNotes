#include<stdio.h>

int main(){

    // FORMAT SPECIFIERS = Special tokens that begin with % symbol,
    //                    followed by a character that specifies the data type
    //                    and OPTIONAL MODIFIERS (width, precision, flags).
    //                    They control how data is displayed / interpreted

    int age = 24;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';                  //single CHARACTER (very limited size)
    char name[] = "Giovanni";             //ARRAY '[]' of CHARACTERS

    // FORMAT SPECIFIER
    printf("%d\n", age);     //% introduces the FORMAT SPECIFIER and ' d ' stands for DECIMAL
    printf("%f\n", price);   //' f ' stands for FLOAT
                             //In order to display/interpret double' type values we'll use %lf or %f
    printf("%lf\n", pi);     //' lf ' stands for LONG FLOAT
    printf("%f\n", pi);      //' f ' stands for FLOAT
    printf("%c\n", currency);//' c ' stands for CHARACTER
    printf("%s\n", name);    //' s ' stands for STRING

    // OPTIONAL MODIFIERS

    // Width
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("DEFAULT INT FORMAT MODIFIER\nRight-justified\n");
    printf("%3d\n", num1); // it sets the MINIMUM number of characters to display
    printf("%3d\n", num2); // at default, like this, it'd be displayed RIGHT-JUSTIFIED
    printf("%3d\n", num3);
    printf("%2d\n", num3);
    printf("%4d\n", num3);

    printf("' - ' PREFIXED INT FORMAT MODIFIER\nWith ' - ' character,LeftRight-justified\n");
    printf("%-3d\n", num1); // with ' - ' it'd be displayed LEFT-JUSTIFIED
    printf("%-3d\n", num2);
    printf("%-3d\n", num3);

    printf("' 0 ' PREFIXED INT FORMAT MODIFIER\nBlank spaces replaced with 0\n");
    printf("%03d\n", num1); // with ' 0 ' blank spaces are replaced by 0
    printf("%03d\n", num2);
    printf("%03d\n", num3);

    printf("' + ' PREFIXED INT FORMAT MODIFIER\nIt adds ' + ' or ' - ' character before the value if it's positive or negative\n");
    printf("%+4d\n", num1); // with ' + ' positive and negative numbers will be prefixed by the + or - sign
    printf("%+4d\n", num2);
    printf("%+4d\n", num3);
    printf("It's compatible with ' - ' prefix\n");
    printf("%+-4d\n", num1);// it's compatible with -
    printf("%+-4d\n", num2);
    printf("%+-4d\n", num3);
    printf("%-+4d\n", num1);
    printf("%-+4d\n", num2);
    printf("%-+4d\n", num3);

    printf("%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n", num3);

    // Precision
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("On default behaviour for float data type, six digits after the decimals are displayed\n");
    printf("%f\n", price1);
    printf("%f\n", price2);
    printf("%f\n", price3);
    printf("In order to specify the exact number of decimals value to display, we'll use ' . ' followed by a number representing the number of decimals to display\n");
    printf("%.2f\n", price1);// values will be rounded as a default behaviour
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    printf("%5.2f\n", price1);
    printf("%5.2f\n", price2);
    printf("%5.2f\n", price3);

    printf("%+07.2f\n", price1);//Combination of various MODIFIERS
    printf("%+07.2f\n", price2);
    printf("%+07.2f\n", price3);
    
    // Flags
    // As mentioned, those are ' + ' and ' - ' prefixes

    return 0;
}