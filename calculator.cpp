#include<iostream>
using namespace std;

int main(){
    char opt;
    float result;
    float n1,n2;
    cout<<"Enter the option that is '/' , '*' , '+' , '-' "<<endl;
    cin>>opt;
    if(opt == '/' ){
        cout<<"You have selected division"<<endl;
    }
    else if(opt == '*' ){
        cout<<"You have selected multiplication"<<endl;
    }
    else if(opt == '+' ){
        cout<<"You have selected addition"<<endl;
    }
    else if(opt == '-' ){
        cout<<"You have selected subtraction"<<endl;
    }

    cout<<"Enter the first number"<<endl;
    cin>>n1;
    cout<<"Enter the second number"<<endl;
    cin>>n2;

    switch (opt)
    {
    case '/':
        result = n1/n2;
        cout<<result<<endl;
        break;
    case '*':
        result = n1*n2;
        cout<<result<<endl;
        break;
    case '+':
        result = n1+n2;
        cout<<result<<endl;
        break;
    case '-':
        result = n1-n2;
        cout<<result<<endl;
        break;
    
    default:
        break;
    }
    return 0;
}