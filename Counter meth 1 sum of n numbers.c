//SUM OF N NUMBERS
#include<stdio.h>
float sum (float a[], int n)
{
  int counter=0;
  float s = 0;
  counter++;
  for (int i = 1; i <= n; i++)
    {
      counter++;
      s = s + a[i];
      counter++;
    }
  counter++;
  return s;
  counter++;
  printf("%d",counter);
}
//time complexity 2n+3 = O(n)

int main()
{
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  float a[n + 1];
  printf("Enter the elements of the array:\n");
  for (int i = 1; i <= n; i++)
  {
    scanf("%f", &a[i]);
  }
  printf("Time complexity by counter method = %.2f\n",counter(a,n));
  return 0;
}
