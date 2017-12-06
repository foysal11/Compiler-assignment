#include<bits/stdc++.h>
using namespace std;
void one()
{
    int n;
   scanf("%d",&n);

   for(int i=1;i<=n;++i){
    printf("*");
   }
   printf("\n");
}
void two()
{
    int r,c;
    scanf("%d %d",&r,&c);
    for (int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

}
void three()
{
    int r;
    scanf("%d",&r);
    for (int i=1;i<=r;++i){
        for(int j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

}
void four()
{
    int r;
    scanf("%d",&r);
    int c=r-1;
    for (int i=1;i<=r;++i){
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;
        for(int j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

}
void five()
{
    int r;
    scanf("%d",&r);
    int c=r-1;
    int d=0;
    for (int i=1;i<=r;++i){
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;
        for(int j=1;j<=i;++j){
            printf("*");
        }
        for(int j=1;j<=d;++j){
            printf("*");
        }
        ++d;
        printf("\n");
    }
    printf("\n");

}
void six()
{
    int r;
    scanf("%d",&r);
    int c=r-1;
    int d=0;
    for (int i=1;i<=r;++i){
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;
        for(int j=1;j<=i;++j){
            printf("*");
        }
        for(int j=1;j<=d;++j){
            printf("*");
        }
        ++d;
        printf("\n");
    }

    c=r-1-1;
    d=1;
    for (int i=r-1;i>=1;--i){

         for(int j=1;j<=d;++j){
            printf(" ");
        }
        ++d;
        for(int j=i;j>=1;--j){
            printf("*");
        }
         for(int j=c;j>=1;--j){
            printf("*");
        }
        --c;
        printf("\n");
    }
    printf("\n");

}
void seven()
{
    int r,c;
    scanf("%d %d",&r,&c);
    for (int i=1;i<=r;++i){
       if(i==1 || i== r){
        for(int j=0;j<c;++j){
            printf("*");
        }
       }
       else {
        printf("*");
        for(int j=1;j<=c-2;++j){
            printf(" ");
        }
        printf("*");

       }

        printf("\n");
    }
    printf("\n");

}
void eight()
{
    int r;
    scanf("%d",&r);
    int d=0;
    for (int i=1;i<=r;++i){


        if(i==1 || i==r){
            for(int j=1;j<=i;++j){
                printf("*");
            }
        }
        else {
            printf("*");
            for(int j=1;j<=d;++j){
                printf(" ");
            }
            ++d;
            printf("*");
        }

        printf("\n");
    }
    printf("\n");

}
void nine()
{
    int r;
    scanf("%d",&r);
    int d=0;
     int c=r-1;
    for (int i=1;i<=r;++i){
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;

        if(i==1 || i==r){
            for(int j=1;j<=i;++j){
                printf("*");
            }
        }
        else {
            printf("*");
            for(int j=1;j<=d;++j){
                printf(" ");
            }
            ++d;
            printf("*");
        }

        printf("\n");
    }
    printf("\n");

}
void ten()
{
    int r;
    scanf("%d",&r);
    int d=1;
     int c=r-1;
     int dc=0;
     int f=1;
    for (int i=1;i<=r;++i){
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;

        if(i==1 || i==r){
            for(int j=1;j<=i;++j){
                printf("*");
            }
        }
        else {
            printf("*");
            for(int j=1;j<=d;++j){
                printf(" ");
            }
            ++d;

        }
        if(i==1 || i==2 || i==r){
            for(int j=1;j<=dc;++j){
                printf("*");
            }

        }
        else {
            for(int j=1;j<=f;++j){
                printf(" ");
            }
            ++f;
            printf("*");
        }
        ++dc;


        printf("\n");
    }
    printf("\n");

}
void eleven()
{
     int r;
    scanf("%d",&r);
    int d=1;
     int c=r-1;
     int dc=0;
     int f=1;
    for (int i=1;i<=r;++i){
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;

        if(i==1 ){
            for(int j=1;j<=i;++j){
                printf("*");
            }
        }
        else {
            printf("*");
            for(int j=1;j<=d;++j){
                printf(" ");
            }
            ++d;

        }
        if(i==1 || i==2 ){
            for(int j=1;j<=dc;++j){
                printf("*");
            }

        }
        else {
            for(int j=1;j<=f;++j){
                printf(" ");
            }
            ++f;

            printf("*");


        }
        ++dc;


        printf("\n");
    }


         c=r-2;
         d=1;
        int tc=r-2;
        int fc=r-3;
        for (int i=r-1;i>=1;--i){

         for(int j=1;j<=d;++j){
            printf(" ");
        }
        ++d;
        if(i==1){
            for(int j=i;j>=1;--j){
                printf("*");
            }

        }
        else {
            printf("*");
            for(int j=tc;j>=1;--j){
                printf(" ");

            }
            --tc;
        }
        if(i==1 && i==r-1){
            for(int j=c;j>=1;--j){
            printf("*");
            }

        }
        else {
            for(int j=fc;j>=1;--j){
                printf(" ");
            }
            --fc;
            if(i!=1){
                printf("*");
            }

        }
         --c;

        printf("\n");
    }
    printf("\n");

}
void twelve()
{
    int n;
   scanf("%d",&n);

   for(int i=1;i<=n;++i){
    printf("%d",i);
   }
   printf("\n");
}
void thirteen()
{
    int r,c;
    scanf("%d %d",&r,&c);
    for (int i=1;i<=r;++i){
        for(int j=1;j<=c;++j){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

}
void fourteen()
{
    int r;
    scanf("%d",&r);
    for (int i=1;i<=r;++i){
        for(int j=1;j<=i;++j){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

}
void fifteen()
{
    int r;

    scanf("%d",&r);
    int c=r-1;
    int v=r;
    for (int i=1;i<=r;++i){
         //v=r;
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;
        int z=v-i;
        for(int j=1;j<=i;++j){

            printf("%d",++z);
        }
        printf("\n");
    }
    printf("\n");

}
void sixteen()
{
    int r;

    scanf("%d",&r);
    int c=r-1;
    int v=r;
    for (int i=1;i<=r;++i){
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;
        for(int j=1;j<=i;++j){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");

}
void seventeen()
{
    int r;
    scanf("%d",&r);
    int c=r-1;
    int d=0;
    int x=0;
    for (int i=1;i<=r;++i){
        x=1;
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;
        for(int j=1;j<=i;++j){
            printf("%d",x++);
        }
        for(int j=1;j<=d;++j){
            printf("%d",x++);
        }
        ++d;
        printf("\n");
    }
    printf("\n");

}
void eighteen()
{
    int r;
    scanf("%d",&r);
    int c=r-1;
    int d=0;
    for (int i=1;i<=r;++i){
            int x=1;
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;
        for(int j=1;j<=i;++j){
            printf("%d",x++);
        }
        for(int j=1;j<=d;++j){
            printf("%d",x++);
        }
        ++d;
        printf("\n");
    }

    c=r-1-1;
    d=1;
    for (int i=r-1;i>=1;--i){
        int x=1;
         for(int j=1;j<=d;++j){
            printf(" ");
        }
        ++d;
        for(int j=i;j>=1;--j){
            printf("%d",x++);
        }
         for(int j=c;j>=1;--j){
            printf("%d",x++);
        }
        --c;
        printf("\n");
    }
    printf("\n");

}
void nineteen()
{
    int r,c;
    scanf("%d %d",&r,&c);
    for (int i=1;i<=r;++i){

       if(i==1 || i== r){
        for(int j=1;j<=c;++j){
            printf("%d",j);
        }
       }
       else {
        printf("1");
        for(int j=1;j<=c-2;++j){
            printf(" ");
        }
        printf("%d",c);

       }

        printf("\n");
    }
    printf("\n");

}
void twenty()
{
    int r;
    scanf("%d",&r);
    int d=0;
    for (int i=1;i<=r;++i){


        if(i==1 || i==r){
            for(int j=1;j<=i;++j){
                printf("%d",j);
            }
        }
        else {
            printf("1");
            for(int j=1;j<=d;++j){
                printf(" ");
            }
            ++d;
            printf("%d",i);
        }

        printf("\n");
    }
    printf("\n");

}
void twenty_one()
{
    int r;
    scanf("%d",&r);
    int d=0;
     int c=r-1;
     int v=r;
     int x=r;
    for (int i=1;i<=r;++i){
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;
        int z=v-i;
        if(i==1 || i==r){
            for(int j=1;j<=i;++j){
                printf("%d",++z);
            }
        }
        else {
            printf("%d",--x);
            for(int j=1;j<=d;++j){
                printf(" ");
            }
            ++d;
            printf("%d",r);
        }

        printf("\n");
    }
    printf("\n");

}
void twenty_two()
{
    int r;
    scanf("%d",&r);
    int d=1;
     int c=r-1;
     int dc=0;
     int f=1,y=1;
    for (int i=1;i<=r;++i){
            int x=1;
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;

        if(i==1 || i==r){
            for(int j=1;j<=i;++j){
                printf("%d",x++);
            }
        }
        else {
            printf("1");
            for(int j=1;j<=d;++j){
                printf(" ");
            }
            ++d;

        }
        if(i==1 || i==2 || i==r){
            if(i==2){
                printf("%d",y);


            }
            else {
                for(int j=1;j<=dc;++j){
                    printf("%d",x++);
                }
            }

        }
        else {
            for(int j=1;j<=f;++j){
                printf(" ");
            }
            ++f;
            printf("%d",y);
            //y+=2;
        }
        ++dc;

        y=y+2;
        printf("\n");
    }
    printf("\n");

}
void twenty_three()
{
     int r;
    scanf("%d",&r);
    int d=1;
     int c=r-1;
     int dc=0;
     int f=1,y=1;
    for (int i=1;i<=r;++i){
        int x=1;
        for(int j=c;j>=1;--j){
            printf(" ");
        }
        --c;

        if(i==1 ){
            for(int j=1;j<=i;++j){
                printf("%d",x++);
            }
        }
        else {
            printf("1");
            for(int j=1;j<=d;++j){
                printf(" ");
            }
            ++d;

        }
        if(i==1 || i==2 ){
            for(int j=1;j<=dc;++j){
                printf("%d",y);

            }

        }
        else {
            for(int j=1;j<=f;++j){
                printf(" ");
            }
            ++f;

            printf("%d",y);


        }
        ++dc;
         y+=2;

        printf("\n");
    }

        y-=2;
        c=r-2;
        d=1;
        int tc=r-2;
        int fc=r-3;
        for (int i=r-1;i>=1;--i){
        y-=2;
         for(int j=1;j<=d;++j){
            printf(" ");
        }
        ++d;
        if(i==1){
            for(int j=i;j>=1;--j){
                printf("%d",j);
            }

        }
        else {
            printf("1");
            for(int j=tc;j>=1;--j){
                printf(" ");

            }
            --tc;
        }
        if(i==1 && i==r-1){
            for(int j=c;j>=1;--j){
            printf("%d",j);
            }

        }
        else {
            for(int j=fc;j>=1;--j){
                printf(" ");
            }
            --fc;
            if(i!=1){
                printf("%d",y);
            }

        }
         --c;

        printf("\n");
    }
    printf("\n");

}
void twenty_four()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;++i){
        cout<<i;
    }
    for(int i=n-1;i>=1;--i){
        cout<<i;
    }

}
void twenty_five()
{
    int n;

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        for(int j=i-1; j>=1; j--){
            printf("%d",j);
        }
        printf("\n");
    }


}

int main()
{
   //one();
   //two();
  //three();
  //four();
  //five();
 // six();
 //seven();
 // eight();
  //nine();
 // ten();
   // eleven();
    //twelve();
   //thirteen();
  //fourteen();
  //fifteen();
  //sixteen();
 // seventeen();
  //eighteen();
 //nineteen();
 //twenty();
  //twenty_one();
  //twenty_two();
  // twenty_three();
   // twenty_four();
    twenty_five();




}
