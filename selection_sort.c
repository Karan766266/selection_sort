selection_sort(int a[],int n)
{
    int i,j,temp,min,mindex;
    for(i=0;i<n-1;i++)
    {
    min=a[i];
    mindex=i;

        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                mindex=j;
            }
        }
        temp=a[i];
        a[i]=min;
        a[mindex]=temp;
    }
}

void main()
{
    int a[20];
    int n,i;

    printf("Enter a range:");
    scanf("%d",&n);
    printf("Enter %d Numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

selection_sort(a,n);

    printf("After Sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    getch();
}
