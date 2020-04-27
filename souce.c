int large(int a, int b)
{
    if (a > b)
	return a;
    else if (a < b)
	return b;
    else
	return -1;
}
int small(int a, int b)
{
    if (a < b)
	return a;
    else if (a > b)
	return b;
    else
	return -1;
}
int sum(int * arr, int len)
{
    int result=0,i;
    for (i=0; i<len; i++)
    {
	result+=arr[i];
    }
    printf("\nlen id %d\n",len);
    return result;
}
int con(int a, int b, int (*fptr)(int A, int B))
{
    return fptr(a,b);
}
void swap(int * a, int * b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
