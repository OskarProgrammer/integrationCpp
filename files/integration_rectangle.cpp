#include <iostream>
#include <math.h>

using namespace std;

float func(float x)
{

    float result = pow(x,3); // your function!

    return result;
}

float integration(float start,float end,float accuracy){
    float result = 0;
    // cout << start << end << accuracy << endl;
    float jump = (end-start)/accuracy;
    // cout << jump;
    for (float i=start+jump; i<=end;i+=jump){
        result += jump * func(i);
        // cout<<i<<endl;
    }
    
    return result;
}


int main(){
    float start,end,accuracy;

    cout << "Start: ";
    cin>>start;
    cout << "End: ";
    cin>>end;
    cout << "Accuracy: ";
    cin >> accuracy;

    float result = integration(start,end,accuracy);
    cout<<"Your result: "<<result<<endl;

    return 0;
}