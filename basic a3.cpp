#include<bits/stdc++.h>
using namespace std;
void one()
{
    int a[10];

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;++i){
        printf("%d ",a[i]);
    }
}
void two()
{
    int a[10];

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    for(int i=4;i>=0;--i){
        printf("%d ",a[i]);
    }
}
void three()
{
    int a[10];

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;++i){
            if(a[i]<10){
                printf("%d ",a[i]);
            }

    }
}
void four()
{
    int a[10],c=0;

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
         if(a[i]<10){
                ++c;
            }
    }
    printf("%d",c);
}
void five()
{
    int a[10],x,f=0;

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<5;++i){
        if(a[i]==x){
            f=1;
            break;
        }

    }
    if(f==1){
        printf("%d was found",x);
    }
    else {
        printf("%d was not found",x);
    }
}
void six()
{
    int a[10],x,f=0,j=0;

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<5;++i){
        if(a[i]==x){
            f=1;
            j=i;
            break;
        }

    }
    if(f==1){
        printf("%d was found at position %d",x,j);
    }
    else {
        printf("%d was not found",x);
    }
}
void seven()
{
    int a[10],x,f=0,j=0;

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    x=a[0];
    for(int i=0;i<5;++i){
        if(x<a[i]){
            x=a[i];
        }

    }

    printf("%d",x);

}
void eight()
{
    int a[10],x,f=0,j=0;

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    x=a[0];
    for(int i=0;i<5;++i){
        if(x<a[i]){
            x=a[i];
            j=i;
        }

    }

    printf("largest number %d was found at location %d",x,j);

}
void nine()
{
    int a[10],x,f,j=0,k=0;

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    x=a[0];
    f=a[0];
    for(int i=0;i<5;++i){
        if(x<a[i]){
            x=a[i];
            j=i;
        }
         if(f>a[i]){
            f=a[i];
            k=i;
        }

    }

    printf("largest number %d was found at location %d\n",x,j);
    printf("smallest number %d was found at location %d",f,k);

}
void ten()
{
    int a[10];

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    for(int i=4;i>=0;--i){
        printf("%d ",a[i]);
    }
}
void eleven()
{
    int a[10];

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    sort(a,a+5);
    for(int i=0;i<5;++i){
        printf("%d ",a[i]);
    }
}
void twelve()
{
    int a[10];

    for(int i=0;i<5;++i){
        scanf("%d",&a[i]);
    }
    sort(a,a+5);
    for(int i=4;i>=0;--i){
        printf("%d ",a[i]);
    }
}
void thirteen()
{
    int a[10];

    for(int i=0;i<10;++i){
        scanf("%d",&a[i]);
    }
    sort(a,a+10);
    for(int i=9;i>=0;--i){
        printf("%d ",a[i]);
    }
}
void fourteen()
{

    int arr[10];
    printf("Enter 10 Numbers: \n");
    for(int i=0;i<10;++i){
        scanf("%d",&arr[i]);
        printf("You have entered : ");
        for(int j=0;j<=i;++j){
            printf("%d, ",arr[j]);
        }
        printf("\n");
    }
}
void fifteen()
{

     int arr[10];

  int i=0,var,flag=0,j=0;

  while(j<5){


    scanf("%d",&var);
    flag=0;
    if(j==0){
        arr[j++]=var;
        continue;
    }
    for(i=0;i<j;++i){
        if(arr[i]==var){
            printf("%d is already in among the entered numbers\nEnter a different number\n",var);
            flag=1;
            break;
        }
    }
    if(flag==0){
        arr[j++]=var;
    }


  }

  for(i=0;i<5;++i){
    printf("%d ",arr[i]);
  }
}
void seventeen()
{

     int arr[10];

  int i=0,var,flag=0,j=0;

  while(j<11){
    int c=0;

    scanf("%d",&var);
    flag=0;
    if(j==0){
        arr[j++]=var;
        continue;
    }
    for(i=0;i<j;++i){
        if(arr[i]==var){
            ++c;

        if(c==5){
            printf("Enter a different number\n");
            flag=1;
            break;
        }

        }
    }
    if(flag==0){
        arr[j++]=var;
    }


  }

  for(i=0;i<11;++i){
    printf("%d ",arr[i]);
  }
}
void eighteen()
{

    int arr[10]={0};

    int n;

    for(int i=0;i<10;++i){
        scanf("%d",&n);
        arr[n]++;
    }
    for(int i=0;i<10;++i){
        if(arr[i]>=2 && arr[i]<4)
        printf("%d, ",arr[i]);
    }
}
void nineteen()
{
    int a[10];
    char x;
    int d,c,swap;

    for(int i=0;i<10;++i){
        scanf("%d",&a[i]);

    }
    getchar();
    printf("a) only numbers at odd positions Or,\nb) only numbers at even positions Or,\nc) all numbers (means numbers at all positions)\n");
    scanf("%c",&x);
    if(x=='a'){
         for (c = 0 ; c < ( 10 - 1 ); c+=2)
            {
            for (d = 0 ; d < 10 - c - 1; d+=2)
            {
                if (a[d] > a[d+2])
                {
                    swap   = a[d];
                    a[d]   = a[d+2];
                    a[d+2] = swap;
                }
            }
        }
    }
    else if(x=='b')
    {
         for (c = 1 ; c < ( 10 - 1 ); c+=2)
        {
            for (d = 1 ; d < 10 - c - 1; d+=2)
            {
                if (a[d] > a[d+2])
                {
                    swap   = a[d];
                    a[d]   = a[d+2];
                    a[d+2] = swap;
                }
            }
        }
    }
    else {
       sort(a,a+10);
    }
    for(int i=0;i<10;++i){
        printf("%d ",a[i]);
    }
}
int main()
{
    //one();
    //two();
    //three();
    //four();
    //five();
    //six();
    //seven();
   // eight();
  // nine();
  //ten();
  //eleven();
 // twelve();
 //thirteen();
  //fourteen();
  //fifteen();
  ///sixteen(); Question is not complete;
  //seventeen();
  //eighteen();
  nineteen();






}
