//verify whether 3 floats can form a triangle
#include <stdio.h>
#include <cs50.h>
//declare function
bool valid_tri(float x, float y, float z);

int main(void)
{
// Get user input for the 3 side of a potential triangle
    float a = get_float("First side: ");
    float b = get_float("Second side: ");
    float c = get_float("Third side: ");
// Call function
    bool m = valid_tri(a,b,c);
// Change bool value into printable true or false
    string tf;
    if (m == true)
       tf = ("True");
    else
       tf = ("False");
    printf("The sides %.1f, %.1f, and %.1f will form a valid triangle: %s\n", a,b,c,tf);
}
// Define function, apply rules of triangle
bool valid_tri(float x, float y, float z)
{
// All sides must be positive
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }
// Each side must be less than or equal to the sum of the other two sides
    if (x + y <= z || y + z <= x || x + z <= y)
    {
        return false;
    }
    else
    {
        return true;
    }
}