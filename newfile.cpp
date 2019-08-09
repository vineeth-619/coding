#include <iostream>
using namespace std;

int main() {
    int price,disc;
    cin>>price>>disc;
    if(price==0)
    cout<<"0"<<endl;
    else
    {
        int count=price;
        while(price>0)
        {
            float cent=(float)(price*disc)/100;
            price-=cent;
            count+=price;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
