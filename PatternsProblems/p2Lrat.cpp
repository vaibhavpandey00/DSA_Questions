#include<iostream>
using namespace std;

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout << "*";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

/*--------------------------------------*/
// p3 Left RAT with number

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout << j;
//         }
//         cout <<endl;
//     }
//     return 0;
// }

/*-----------------------------------------*/
// p4 Left RAT with row number

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout << i;
//         }
//         cout <<endl;
//     }
//     return 0;
// }

/*-------------------------------------------*/
// p5 Left Upside Down RAT

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=i;j<=5;j++){
//             cout << "*";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

/*--------------------------------------------*/
// p6 WAP print inverse of p4

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i+1;j++){
//             cout << j;
//         }
//         cout <<endl;
//     }
//     return 0;
// }

/*------------------------------------------------*/
// p7 WAP to make a triangle

// int main(){
//     for(int i=0; i < 5; i++){
//         // space
//         for(int j = 0; j <= 5-i-1; j++){
//             cout << " ";
//         }
//         // star
//         for (int j = 0; j < 2*i+1; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0;j <= 5-i-1; j++)
//         {
//             cout <<" ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

/*------------------------------------------------*/
// p8 WAP to reverse print p7

// int main(){
//     for(int i=0; i < 5; i++){
//         // space
//         for(int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }
//         for(int j = 0; j < 2*5-(2*i+1); j++)
//         {
//             cout << "*";
//         }
//         for(int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }
//         cout <<endl;
//     }
// }

/*------------------------------------------------*/
// p9 WAP to print patern combine of p7 & p8

// int main(){
//     for(int i=0; i < 5; i++){
//         // space
//         for(int j = 0; j <= 5-i-1; j++){
//             cout << " ";
//         }
//         // star
//         for (int j = 0; j < 2*i+1; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int j = 0;j <= 5-i-1; j++)
//         {
//             cout <<" ";
//         }
//         cout <<endl;
//     }
//     for(int i=0; i < 5; i++){
//         // space
//         for(int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }
//         for(int j = 0; j < 2*5-(2*i+1); j++)
//         {
//             cout << "*";
//         }
//         for(int j = 0; j <= i; j++)
//         {
//             cout << " ";
//         }
//         cout <<endl;
//     }
// }

/*------------------------------------------------*/
// p10 WAP to print triangle with base of 9 at right side

// int main() {
//     int n = 5;

//     for (int i = 1; i <= 2 * n - 1; i++) {
//         int stars = (i <= n) ? i : 2 * n - i;
//         for (int j = 1; j <= stars; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/*------------------------------------------------*/
// p11 WAP to print triangle 

int main(){
    int n = 5;
    int start = 1;
    for(int i = 0; i < n; i++)
    {
        if(i%2==0) start = 1;
        else start = 0;
        for(int j = 0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
