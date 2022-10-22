#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int max(int a,int b,int c,int d) {  
   
   int max2;
    
    if (a > b && a > c && a > d){
      max2 = a;
    }   
    else if (b > a && b > c && b > d) {
         max2 = b;
    }
    else if (c > a && c > b && c > d) {
         max2 = c;
    }
    else if (d > a && d > c && d > b) {
         max2 = d;
    }
    return max2;
}

int main() {
    int a,b,c,d;
       printf("Enter 4 num:");
	   scanf("%d %d %d %d",&a,&b,&c,&d);
    int result = max(a,b,c,d);
      printf("max num is: %d\n",result);
    

   system("pause");
}

