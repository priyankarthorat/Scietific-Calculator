#include <stdio.h>

#include <stdlib.h>


#include <math.h>

float fctorial(int fact)
{
float resultfact=1;
        for(int factorial=fact;factorial>=1;factorial--)
                resultfact=resultfact*factorial;
                
       return resultfact;               
}


int main()
{
    int a,b;
  char c;
  char calci;
  
  char choice, choice2;

char eq;

int square=0;

double logx, resultlog, sinx, resultsin, cosx, resultcos, tanx, resulttan, rootx, resultroot, expx, resultexp;

double fact, factorial, resultfact=1;
  
  printf(" enter  b for basic and s for scientific calculator\n");
  scanf("%c",&calci);
  if(calci=='b')  
  {
        scanf("%d",&a);
  scanf(" %c",&c);
  scanf("%d",&b);
  switch(c)
  {
      case '+':
      printf("The sum is %d\n",a+b);
    break;
    case '-':
    printf("The difference is %d\n",a-b);
    break;
    case '*':
    printf("The product is %d\n",a*b);
    break;
    case '/':
    printf("The quotient is %d\n",a/b);
    break;
    case '%':
    printf("The remainder is %d\n",a%b);
    break;
    default:
    printf("Invalid Input\n");
    
    
    
  }
  }
 
else if(calci=='s')
 {



printf(" Scientific Function \n");

printf("Press \n");

printf("[1] for x square \n");

printf("[2] for root of x \n");

printf("[3] for log x \n");

printf("[4] for exp of x \n");

printf("[5] for Factorial of x \n");

printf("[6] for Sin x \n");

printf("[7] for Cos x \n");

printf("[8] for Tan x \n");

printf("[9] for ncr \n");
printf("[0] for npr \n");
printf("[E] for Exit \n");

//choice2=getch();
char eqs;
scanf("%c",&eqs);
scanf("%c",&choice2);
}
 
if((choice2=='e')||(choice2=='E'))

exit(0);

else if(choice2=='1') {



printf("This program calculate square of x \n");

printf("Enter number ");

scanf("%d",&square);

square=square*square;

printf("Result is %d\n",square);

}
else if(choice2=='2') {



printf("This program calculate Square root of x \n");

printf("Enter number ");

scanf("%lf",&rootx);

resultroot=sqrt(rootx);

printf("The square root of %lf is %lf\n", rootx, resultroot);


}
else if(choice2=='3') {



printf("This program calculate Natural log of x \n");

printf("Enter number ");

scanf("%lf",&logx);

resultlog=log(logx);

printf("The natural log of %lf is %lf\n", logx, resultlog);


}
else if(choice2=='4') {



printf("This program calculate e ^ x \n");

printf("Enter number ");

scanf("%lf",&expx);

resultexp = exp(expx);

printf("'e' raised to the power  of %lf (e ^ %lf) = %lf\n",expx, expx, resultexp);
}
 
else if(choice2=='5') {

printf("This program calculate Factorial x \n");
printf("Enter number ");
scanf("%lf",&fact);



printf("The factorial of %lf is %lf ",fact,fctorial(fact));
}
 
else if(choice2=='6') {

printf("This program calculate Sin x \n");
printf("Enter number ");
scanf("%lf",&sinx);
resultsin=sin(sinx);
printf("The sin of %lf is %lfn", sinx, resultsin);
}
 
else if(choice2=='7') {

printf("This program calculate Cos x \n");
printf("Enter number ");
scanf("%lf",&cosx);
resultcos=cos(cosx);
printf("The Cos of %lf is %lfn", cosx, resultcos);
}
else if(choice2=='8') {

printf("This program calculate Tan x \n");
printf("Enter number ");
scanf("%lf",&tanx);
resulttan=tan(tanx);
printf("The Tan of %lf is %lf\n", cosx, resultcos);
}

else if(choice2=='9')
{
        
printf("This program to calculate ncr");
printf("Enter n and r");
int n,r;
scanf("%d   %d",&n,&r);
float ans,den,num,t1,t2;
num=fctorial(n);
t1=fctorial(r);
t2=fctorial(n-r);

den=t1*t2;
ans=num/den;

printf("ans of ncr= %f",ans);
}
else if(choice2=='0')
{
        
printf("This program to calculate npr");
printf("Enter n and r");
int n,r;
scanf("%d   %d",&n,&r);
float ans,den,num,t2;
num=fctorial(n);

den=fctorial(n-r);

ans=num/den;

printf("ans of npr= %f",ans);
}
  
  
  return 0;
}







https://github.com/priyankarthorat/Scietific-Calculator.git
