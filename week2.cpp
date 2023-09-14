#include <iostream>
using namespace std;
// void first(int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j <= i; j++) {
//       cout << "*" << ' ';
//     }
//     cout << endl;
//   }
// }
// void second(int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n - i; j++) {
//       cout << "*" << ' ';
//     }
//     cout << endl;
//   }
// }
// void third(int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n - i; j++) {
//       if (i == 0 || i == n - 1 || j == 0 || j == n - i - 1) {
//         cout << "*";
//       } else {
//         cout << " ";
//       }
//     }
//     cout << endl;
//   }
// }
// void fourth(int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//       cout << " ";
//     }
//     for (int j = 0; j < 2 * i + 1; j++) {
//       cout << "*";
//     }
//     cout << endl;
//   }
// }
// void fifth(int n) {
//   for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//       cout<<" ";
//     }
//     for( int j=0; j<n-i;j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
// }
// void six(int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n - i - 1; j++) {
//       cout << " ";
//     }
//     for (int j = 0; j < 2 * i + 1; j++) {
//       if (i == 0 || i == n - 1 || j == 0 || j == n - i - 1) {
//         cout << "*";
//       } else {
//         cout << " ";
//       }
//     }

//     cout << endl;
//   }
// }

// void hallowSquare(int n){
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(j==0 || j==n-1 || i==0 ||i==n-1){
//         cout<<"*";
//       }else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }
// void hallowInvertedPyramid(int n){
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//       if(i==0|| i==n-1 ||j==0 || j==n-i-1){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }
// void hallowFullPyramid(int n){
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//       cout<<" ";
//     }
//     for(int j=0;j<2*i+1;j++){
//       if(j==0 ||j==2*i ||i==0 || i==n-1){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }
// int main() {
//   int n = 5;

//   // first(n);
//   // second(n);
//   // third(n);
//   // fourth(n);
//   // fifth(n);
//   // six(n);
//   // hallowSquare(n);
//   // hallowInvertedPyramid(n);
//   hallowFullPyramid(n);
// // }
// void numHallowHalfPyramid(int n){
//   for(int i=0;i<n;i++){
//     for(int j=1;j<=i;j++){
//       if(j==1 || j==i || i==1 || i==n-1){
//         cout<<j;
//       }
//       else{
//         cout<<' ';
//       }
//     }
//     cout<<endl;
//   }
// }
// void numInvertedHalfPyramid(int n){
//   for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){
//       if(i==1 || i==n || j==i ||j==n){
//         cout<<j;
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }
// void npep(int n){
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<n-i+1;j++){
//       cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//       cout<<j;
//     }
//     for(int j=i;j>0;j--){
//       if(j==i) continue;
//       else cout<<j;
//     }
//     cout<<endl;
//   }
// }
// int main(){
//   int n=5;
//   // numHallowHalfPyramid(n);
//   // numInvertedHalfPyramid(n);
//   npep(n);
// }


// #include<iostream>
// using namespace std;


// int main(){
//     int n=5;
//     int i=1;
//     while(i<n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<n){
//         int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }
#include<iostream>
using namespace std;

//area of circle
void areaOfCircle(int r){
  cout<<"radius of circle"<<3.14*r*r<<endl;
}

void EvenOrOdd(int n){
  // if(n%2==0){
  //   cout<<"it is even";
  // }
  // else{
  //   cout<<"it is odd";
  // }

  if((n&1) == 1){
    cout<<"it is odd";
  }
  else{
    cout<<"it is even";
  }
}

void factorial(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  cout<<"factorial of "<<n<<"is"<<fact<<endl;
}

int CheckPrime(int n){
  int flag=0;
  for(int i=2;i<n;i++){
    if(n%i==0){
      flag=1;
      break;
    }
  }
  if(flag){
    return 0;
  }
  else{
    return 1;
  }
  
}
void print1toN(int n){
  for(int i=2;i<n;i++){
    if(CheckPrime(i)){
      cout<<i<<" ";
    }
  }
}
void reverseInt(int n){
  int ans=0;
  int dig=0;
  while(n!=0){
    dig=n%10;
    ans=(ans*10)+dig;
    n=n/10;
  }
  cout<<ans<<endl;
}

void kthbit(int n,int k){
  int value = 1<<2;
  int result = n | value;
  cout<<result<<endl;
}

void celToFaren(int c){
  int farenheit=1;
  farenheit=(c*(1.8))+32;
  cout<<farenheit<<endl;
}
void countAllBits(int n){
  int count=0;
  int bit=0;
  while(n!=0){
    bit=n%10;
    if(bit==1){
      count++;
    }
    n=n/10;
  }
  cout<<count<<endl;
}
void numberFromDigit(int n){

  int digit=0;
  int ans=0;
  for(int i=0;i<n;i++){
    cout<<"enter the digit:"<<endl;
    cin>>digit;
    ans=(ans*10)+digit;
    cout<<"the digit untill numbers :"<<ans<<endl;
  }
}
void printDigits(int n){
  int digit=0;
  while(n!=0){
    digit=n%10;
    cout<<digit<<",";
    n=n/10;
  }
}

void kiloToMiles(int kilo){
  float miles=0;
  miles=float(kilo/1.609);
  cout<<miles<<endl;
}
int main(){
  // int r;
  // cin>>r;

  int n;
  cout<<"enter a number:";
  cin>>n;
  // cout<<"enter the k value:";
  // cin>>k;
  // CheckPrime(n);
  // EvenOrOdd(n);
  // areaOfCircle(r);
  // factorial(n);
  // print1toN(n);
  // reverseInt(n);
  // kthbit(n,k);
  // celToFaren(n);
  // countAllBits(n);
  // numberFromDigit(n);
  // printDigits(n);
  // kiloToMiles(n);
  
  
  
}
