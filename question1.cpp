#include <iostream>
using namespace std;
struct item{
    int id;
    float cost;
};
int main() {
    struct item arr[6]={
        {1,45.06},{2,54.78},{3,78.04},{4,49.96},{0,0.0},{0,0.0}
    };
    cout<<"id of 5th item: ";
    cin>>arr[4].id;
    cout<<"cost of 5th item: ";
    cin>>arr[4].cost;
    cout<<"id of 6th item: ";
    cin>>arr[5].id;
    cout<<"cost of 6th item: ";
    cin>>arr[5].cost;
    for (int i=0;i<6;i++){
        if(arr[i].cost>=50.00){
            cout<<"ID:"<<arr[i].id<<" Cost:"<<arr[i].cost<<endl;
            }
    }
    return 0;
}
