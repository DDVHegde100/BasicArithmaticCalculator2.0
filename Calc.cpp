#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    int p;
    int q;
    int r;
    int s;
    int x;
    int type;
    int sum;
    int sub;
    int prod;
    int divid;
    int twoRoot;
    int threeRoot;
    int cosine;
    int sine;
    int tangent;
    int invcos;
    int invsin;
    int invtan;
    int invcosh;
    int invsinh;
    int invtanh;
    
    cout << "Enter 1 for addition. Enter 2 for subtraction. Enter 3 for multiplication. Enter 4 for division. Enter 5 for Square roots. Enter 6 for Cube roots. Enter 7 for cosine. Enter 8 for sine. Enter 9 for tangent. Enter 10 for inverse cosine. Enter 11 for inverse sine. Enter 12 for inverse tangent. Enter 13 for hyperbolic cosine. Enter 14 for hyperbolic sine. Enter 15 for hyperbolic tangent:  ";
    cin >> x;
    
    if(x==1){
    cout << "Enter the first number! \n";
    cin >> a;
    
    cout << "Enter the second number! \n";
    cin >> b;
    
    sum=a+b;
    cout << "The sum of those numbers is " <<sum;
    return 0;
    }else if(x==2){
    cout << "Enter the first number for subtraction! \n";
    cin >> c;
    
    cout << "Enter the second number for subtraction! \n";
    cin >> d;
    
    sub=c-d;
    cout << "The value of those numbers is " <<sub;
    return 0;
    }else if(x==3){
    cout << "Enter the first number for multiplication! \n";
    cin >> e;
    
    cout << "Enter the second number for multiplication! \n";
    cin >> f;
    
    prod=e*f;
    cout << "The product of those numbers is " <<prod;
    return 0; 
    }else if(x==4){
    cout << "Enter the first number for division! \n";
    cin >> g;
    
    cout << "Enter the second number for division! \n";
    cin >> h;
    
    divid=g/h;
    cout << "The dividend of those numbers is " <<divid;
    return 0; 
    }else if(x==5){
        
    cout << "Enter the first number for it's root! \n";
    cin >> i;
    
    twoRoot=sqrt(i);
    cout << "The root of the number is " <<twoRoot;
        
    }else if(x==6){
        
    cout << "Enter the first number for it's cube root! \n";
    cin >> j;
    
    threeRoot=cbrt(j);
    cout << "The cube root of the number is " <<threeRoot;
        
    }else if(x==7){
        
    cout << "Enter the first number for it's cosine value! \n";
    cin >> k;
    
    cosine=cos(k);
    cout << "The cosine value of the number is " <<cosine;
        
    }else if(x==8){
        
    cout << "Enter the first number for it's sine value! \n";
    cin >> l;
    
    sine=sin(l);
    cout << "The sine value of the number is " <<sine;
        
    }else if(x==9){
        
    cout << "Enter the first number for it's tangent value! \n";
    cin >> m;
    
    tangent=tan(m);
    cout << "The tangent value of the number is " <<tangent;
        
    }else if(x==10){
        
    cout << "Enter the number\n";
    cin >> n;
    
    invcos=acos(n);
    cout << "The inverse cosine value of the number is " <<invcos;
        
    }else if(x==11){
        
    cout << "Enter the number\n";
    cin >> o;
    
    invsin=asin(o);
    cout << "The inverse sine value of the number is " <<invsin;
        
    }else if(x==12){
        
    cout << "Enter the number\n";
    cin >> p;
    
    invtan=atan(p);
    cout << "The inverse tangent value of the number is " <<invtan;
        
    }else if(x==13){
        
    cout << "Enter the number\n";
    cin >> q;
    
    invcosh=cosh(q);
    cout << "The hyperbolic cosine value of the number is " <<invcosh;
        
    }else if(x==14){
        
    cout << "Enter the number\n";
    cin >> r;
    
    invsinh=sinh(r);
    cout << "The hyperbolic sine value of the number is " <<invsinh;
        
    }else if(x==15){
        
    cout << "Enter the number\n";
    cin >> s;
    
    invtanh=tanh(s);
    cout << "The hyperbolic tangent value of the number is " <<invtanh;
        
    }else if(x>15){
        cout << "Please enter a number between 1-4.";
    }
    
    
    
    
    
}
