#include <stdio.h>
int main()
{
int i, l, h, mid, n, key, array[100];
printf("Enter number of elementsn");
scanf("%d",&n);
printf("Enter %d integersn", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to findn");
scanf("%d", &key);
l = 0;
h = n - 1;
m = (l+h)/2;
while (l <= h) {
if(array[m] < key)
l = m + 1;
else if (array[m] == key) {
printf("%d found at location %d.n", key, m+1);
break;
}
else
h = m - 1;
m = (l + h)/2;
}
if(l > h)
printf("Not found! %d isn't present in the list.n", key);
return 0;
}
