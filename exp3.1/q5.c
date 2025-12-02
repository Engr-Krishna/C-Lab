/*5. WAP using ternary operator,
the user should input the length and breadth of a rectangle,
one has to find out which rectangle has the highest perimeter.
The minimum number of rectangles should be three.*/


#include<stdio.h>
int main(){
    int l1, l2, l3, b1, b2, b3;
    int p1, p2, p3, pmax;

    printf("Enter the length and width of rectangle1");
    scanf("%d %d", &l1, &b1);

    printf(" Enter the length and width of rectangle2");
    scanf("%d %d", &l2, &b2);

    printf(" Enter the length and width of rectangle3 ");
    scanf("%d %d", &l3, &b3);

    p1=2*(l1+b1);
    p2=2*(l2+b2);
    p3=2*(l3=b3);

    pmax= (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);
      
    printf("Highest Perimeter = %d", pmax);
  


    return 0;


}