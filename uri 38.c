#include<stdio.h>
#include<string.h>
main()
{
     int X,Y;
     float z;
     scanf("%d%d",&X,&Y);
     switch(X)
    {
    case 1:
         z=4.00;
         printf("Total: R$ %0.2f\n",z*Y);
         break;

    case 2:
     z=4.50;
      printf("Total: R$ %0.2f\n",z*Y);
         break;
         case 3:
              z=5.00;
      printf("Total: R$ %0.2f\n",z*Y);
         break;
         case 4:
     z=2.00;
      printf("Total: R$ %0.2f\n",z*Y);
         break;
         case 5:
     z=1.50;
      printf("Total: R$ %0.2f\n",z*Y);
         break;
         default:
         printf("");
    }
         return 0;

}
