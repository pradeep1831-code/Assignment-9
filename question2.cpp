#include <iostream>
using namespace std;
struct Color{
    int red;
    int green;
    int blue;
};
int main() {
    struct Color colors[5]={
        {255,0,0},{0,255,0},{0,0,255},{255,0,255},{0,255,255}
    };
    for(int k=0; k<3; k++){
         colors[k].red=255 - colors[k].red;
         colors[k].green=255-colors[k].green;
         colors[k].blue=255-colors[k].blue;
    }
    cout<<"updated values of rgb"<<endl;
    for(int j=0; j<5; j++){
        cout << "Color " << (j + 1) << ": ";
        cout << "Red = " << colors[j].red << ", ";
        cout << "Green = " << colors[j].green << ", ";
        cout << "Blue = " << colors[j].blue << endl;
    }
  return 0;
}
