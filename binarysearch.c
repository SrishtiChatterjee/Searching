#include <stdio.h>
int main()
{
int i, l, h, mid, n, key, array[100];
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Enter %d integers: \n", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find: ");
scanf("%d", &key);
l = 0;
h = n - 1;
m = (l+h)/2;
while (l <= h) {
if(array[m] < key)
l = m + 1;
else if (array[m] == key) {
printf("%d found at location %d", key, m+1);
break;
}
else
h = m - 1;
m = (l + h)/2;
}
if(l > h)
printf("Not found! %d isn't present in the list", key);
return 0;
}
