#include<bits/stdc++.h>
using namespace std;
void two()
{

    int arr[100],n;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }

    for(int i=n-1;i>=0;--i){
        printf("%d ",arr[i]);
    }


}
void three()
{

    int arr[100],n,even[100];
    printf("Enter number: ");
    scanf("%d",&n);
    int j=0;
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even[j++]=arr[i];
        }
    }

    for(int i=j-1;i>=0;--i){
        printf("%d ",even[i]);
    }


}
void four()
{

    int arr[100],n,a,j=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);

    }
    scanf("%d",&a);

    for(int i=0;i<n;++i){
        if(a==arr[i]){
                j=1;
            break;

        }
    }
    if(j==0){
        printf("No");
    }
    else {
        printf("yes");
    }



}
void five()
{
    int arr[10]={0};

    int n;

    for(int i=0;i<15;++i){
        scanf("%d",&n);
        arr[n]++;
    }
    for(int i=0;i<10;++i){
        printf("%d occurs %d times\n",i,arr[i]);
    }

}
void six()
{
    int arr[10];

    int n;

    for(int i=0;i<10;++i){
        scanf("%d",&arr[i]);

    }
   for(int i=0;i<10;++i){
       printf("%d ",arr[i]);

    }
}
void seven()
{

  int arr[10];

  int i=0,var,flag=0,j=0;

  while(j<10){


    scanf("%d",&var);
    flag=0;
    if(j==0){
        arr[j++]=var;
        continue;
    }
    for(i=0;i<j;++i){
        if(arr[i]==var){
            printf("Enter a different number\n");
            flag=1;
            break;
        }
    }
    if(flag==0){
        arr[j++]=var;
    }


  }

  for(i=0;i<10;++i){
    printf("%d ",arr[i]);
  }
}
void eight()

{
    int arr[10],even[10],odd[10];

    int n,e=0,o=0;

    for(int i=0;i<10;++i){
        scanf("%d",&arr[i]);
        if(i%2==0){
            even[e++]=arr[i];
        }
        else {
            odd[o++]=arr[i];
        }

    }

        for(int i=0;i<e;++i){
            printf("%d ",even[i]);

        }
        for(int i=0;i<o;++i){
            printf("%d ",odd[i]);

        }


}
int main()
{

    //two();
    //three();
    //four();
    //five();
    //six();
    //seven();
    eight();
}
