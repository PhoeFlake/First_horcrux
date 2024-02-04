#include <stdio.h>
float temp, centi, far;
void main()
{
    int choice;
    printf("1. Centrigrade to Farenheit \n2. Farenheit to Centigrade \n\n Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) 
    {
        size = 10.0;
        CentitoFar = [0] * int(size);
        printf("Enter temperature in degree Centigrade: ");
        scanf("%f", &temp);
        float CentitoFar[temp];
    } else if (choice == 2)
    {
        size = 10.0;
        FartoCenti = [0] * int(size);
        printf("Enter temperature in degree Farenheit: ");
        scanf("%f", &temp);
        float FarToCenti[temp];
    } else
    {
        fprintf(stderr, "Invalid input!\n");
    }
}
size = 10.0;
CentitoFar = [0] * int(size);
float CentitoFar[temp];
{
    centi = temp;
    far = centi*9/5+32;
    printf("The temperature in Farenheit is %.2f", far);
    return 0;
}
size = 10.0;
FartoCenti = [0] * int(size);
float FarToCenti(float temp)
{
    far = temp;
    centi = (far-32)*5/9;
    printf("The temperature in Centigrade is %.2f", centi);
    return 0;
}