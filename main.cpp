// Lab Q9
#include <iostream>
#include <fstream>
using namespace std;

void storeResults(float avg1, float avg2, float avg3, float avg4, float avg5){
    ofstream inputFile("batting_average.txt");
    inputFile << "Player 1 avg score is: " << avg1 << endl;
    inputFile << "Player 2 avg score is: " << avg2 << endl;
    inputFile << "Player 3 avg score is: " << avg3 << endl;
    inputFile << "Player 4 avg score is: " << avg4 << endl;
    inputFile << "Player 5 avg score is: " << avg5 << endl;
}

float battingAverage(float bSum1, float bSum2, float bSum3, float bSum4, float bSum5){
    float bAvg1 = bSum1/5;
    float average1 = bAvg1;

    float bAvg2 = bSum2/5;
    float average2 = bAvg2;

    float bAvg3 = bSum3/5;
    float average3 = bAvg3;

    float bAvg4 = bSum4/5;
    float average4 = bAvg4;

    float bAvg5 = bSum5/5;
    float average5 = bAvg5;

    storeResults(average1, average2, average3, average4, average5);
}

int battingSum(int s1[5], int s2[5], int s3[5], int s4[5], int s5[5]){
    float sum1 = s1[0] + s1[1] + s1[2] + s1[3] + s1[4];
    float sum2 = s2[0] + s2[1] + s2[2] + s2[3] + s2[4];
    float sum3 = s3[0] + s3[1] + s3[2] + s3[3] + s3[4];
    float sum4 = s4[0] + s4[1] + s4[2] + s4[3] + s4[4];
    float sum5 = s5[0] + s5[1] + s5[2] + s5[3] + s5[4];

    cout << sum1 << endl;
    cout << sum2 <<endl;
    cout << sum3 << endl;
    cout << sum4 <<endl;
    cout << sum5 << endl;
    battingAverage(sum1, sum2, sum3, sum4, sum5);
}

int main() {
    int season1[5] = {1, 2, 3, 4, 5};
    int season2[5] = {2,3,4,5,6};
    int season3[5] = {10,2,3,5,8};
    int season4[5] = {9,2,1,8,3};
    int season5[5] = {9,2,1,8,3};

    battingSum(season1, season2, season3, season4, season5);

    return 0;
}
