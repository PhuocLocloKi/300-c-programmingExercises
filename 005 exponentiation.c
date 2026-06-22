//#include<stdio.h>
//#include<math.h>
//int main(){
//
//    int number1;
//    printf("");
//    scanf("%d",&number1);
//
//
//    int exponentiation1 = number1 * number1;
//    int exponentiation2 = number1 * number1 * number1 * number1 * number1;
//    printf("%d %d",exponentiation1, exponentiation2);
//    return 0;
//
//}
//

#include<stdio.h>
#include<math.h>

int main (){
	double number1;
	
    printf("");
    scanf("%lf",&number1);
    
    double exponentiation1 = pow(number1, 2);
    double exponentiation2 = pow(number1, 5); //*For exponent/power calculations → use the `pow()` function.
    printf("%.0lf %.0lf",exponentiation1, exponentiation2);
    return 0;
}