Skip to content
Sign up
tranghaha
/
3.1
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
3.1/sapxeptangdan.cpp
tranghaha Add files via upload
Latest commit a740e80 13 hours ago
 History
 1 contributor
42 lines (41 sloc)  821 Bytes

#include<stdio.h>
void Nhap(int a[], int n)
{
    for(int i=0; i<n ; i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void Sapxep(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main()
{
    int a[100];
    int n;
    do{
        printf("Nhap so phan tu cua mang:");
        scanf("%d", &n);
        if(n<1 || n>100)
        {
            printf("Nhap lai:");
        }
    }while(n<1 || n>100);
    Nhap(a, n);
    Sapxep(a,n);
    printf("\nCac phan tu trong mang la:\n");
    printf("\nMang sau khi sap xeo la:\n");
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
3.1/sapxeptangdan.cpp at main · tranghaha/3.1 · GitHub
