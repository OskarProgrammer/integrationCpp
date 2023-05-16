#include <iostream>
#include <math.h>

using namespace std;

float func(float x){
    float result = pow(x,3);
    return result;
}


float integration(float start,float end,float accuracy){
    float result = 0;

    float jump = (end-start)/accuracy;

    for (float i=start+jump;i<=end;i+=jump){
        float h = jump;
        float base = func(i);
        float base2 = func(i-jump);

        float sum = base + base2;
        float area = (sum*h)/2;

        result += area;
    }

    return result;
}



int main(){

    float start,end,accuracy;

    cout<<"Start: ";
    cin >>start;
    cout << "End: ";
    cin >> end;
    cout << "Accuracy: ";
    cin >> accuracy;

    float result = integration(start,end,accuracy);
    cout<<"Result: "<<result<<endl;

    return 0;
}