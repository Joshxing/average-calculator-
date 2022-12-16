#include <iostream>
#include <iomanip>
using namespace std;
float getTestScore();
float calcAverage(float test1, float test2, float test3);
 
int main(int argc, char *argv[])
{
    float test1;
    float test2;
    float test3;
    float avg;

    test1 = getTestScore();
    test2 = getTestScore();
    test3 = getTestScore();
    avg = calcAverage(test1,test2,test3);
    cout <<setprecision(3)<<"Average: " << avg << endl;

    return 0;
}

float getTestScore()
{
    float score;

    cout<<"Enter test score: ";
    cin>>score;

    return score;
}
 
float calcAverage(float test1, float test2, float test3)
{
    float average = (test1+test2+test3)/3;
    if (average <= 75) {
    cout << "Failed" << endl;
} 
else {
    cout << "Passed" << endl;
}

return average;
}
