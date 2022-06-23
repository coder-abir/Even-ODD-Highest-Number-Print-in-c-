// program that prints if the number is even or odd && Maximum

#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a%2==0){
        if(a>c && a%2==0){
            cout<<a<<" A is highest & EVEN"<<endl;
        }else if(a > c && a%2!=0){
            cout<<a<<" A is highest but ODD"<<endl;
        }
        else{
            if(c>a && c%2==0){
                cout<<c<<" c is highest & Even"<<endl;
            }else{
                cout<<c<<" c is highest & ODD"<<endl;
            }
        }
    }else{
        if (b > c && b%2==0)
        {
           cout<<b<<" B is highest & EVEN"<<endl;
        }else if(b > c && b%2!=0){
            cout<<b<<" B is highest But ODD"<<endl;
        }else{
            if (b < c && c%2==0)
            {
                cout<<c<<" C is highest  & EVEN"<<endl;
            }
            else{
                if(b<c && c%2!=0)
                cout<<c<<" C is highest But ODD";
            }
            
        }
        
    }
}
