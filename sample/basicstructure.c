////////#include <stdio.h>
////////
////////int main()
////////{
////////    int rows;
////////    printf("enter the rows");
////////    scanf("%d",&rows);
////////    for(int i=1;i<=rows;i++)
////////    {
////////       for(int j=1;j<=rows-1;j++)
////////       {
////////		   printf(" ");
////////	   }
////////           for(int k=1;k<=(2*i-1);k++)
////////           {
////////               printf("*");
////////           }
////////		   printf("\n");
////////       }return 0;
////////
////////    }
////////}
//////#include <stdio.h>
//////
//////int main() {
//////    int rows,i,j,k;
//////
//////    printf("Enter number of rows: ");
//////    scanf("%d", &rows);
//////
//////    // Loop to print the pyramid
//////    for (i = 1; i <= rows; i++) {
//////        for (j = 1; j <= rows - i; j++) {
//////            printf(" "); // Print spaces for alignment
//////        }
//////        for ( k = 1; k <=(2 * i - 1); k++) 
//////		{
//////            printf("*");
//////        }
//////        printf("\n");
//////    }
//////
//////    return 0;
//////}
////#include<stdio.h>
////int main()
////{
////	int row,i,j,k;
////	printf("enter the number of rows:  ");
////	scanf("%d",&row);
////	for(i=1;i<=row;i++)
////	{
////		for(j=1;j<=row-i;j++)
////		{
////			printf(" ");
////		}
////		for(k=1;k<=(2*i-1);k++)
////		{
////			printf("*");
////		}
////		printf("\n");
////	}
////}
////
//
//#include<stdio.h>
//int main()
//{
//	int i,j,k,n;
//	printf("enter the number of rows: ");
//	scanf("%d",&n);
//		for(i=1;i<=n;i++)
//		{
//			for(j=1;j<=n-i;j++)
//			{
//				printf(" ");
//			}
//				for(k=1;k<=(2*i-1);k++)
//				{
//					printf("*");
//				}
//				printf("\n");
//			}
//		}
