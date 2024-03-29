// Problem Statement: Accept radius from user and calculate the area of circle

// Step1 : Understand the problem statement
//Conclusion: We are going to use the formula as PI*R*R

// Step 2: Algorithm
/*
    Start
        accept radius from user and store into RADIUS
        create variable as PI and store value 3.14
        Calculate are PI * RADIUS * RADIUS
        Display the value of Area to the user
    Stop
*/
#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function name: CalculateArea
// Description : It is used to calculate are of circle
// Input : Float
// Output : Float
// Author name : Mayur Mukinda Borate
// Date : 02/10/2023
//
/////////////////////////////////////////////////////////

float CalculateArea(float fValue)

{
    auto float fAns = 0.0f; 
    auto float PI = 3.14f;

    fAns = PI* fValue * fValue;
    return fAns; 
}

int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius of circle: \n ");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of circle is: %f\n", fArea);

    return 0;
}