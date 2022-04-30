//This program can perform basic arithmetic operations such as addition, substraction, multiplication, division and exponent
//Register Number- RA2111030010095
#include <stdio.h>
#include <math.h>

int main()
{
  float valueOne;
  float valueTwo;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f%c%f", &valueOne, &operator, &valueTwo);

  switch(operator)
    {
    case '/': answer = valueOne/valueTwo;
      break;
    case '*': answer = valueOne*valueTwo;
      break;
    case '+': answer = valueOne+valueTwo;
      break;
    case '-': answer = valueOne-valueTwo;
      break;
    case '^': answer = pow(valueOne,valueTwo);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g=%.6g\n\n",valueOne,operator, valueTwo, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
  
