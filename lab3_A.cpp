#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ifstream inFile("file.in", ios::in);
    if(!inFile){
	cerr << "Failed Opening" << endl;
	exit(1);
    }
    int num;
    inFile >> num;
    vector<int> topFive(6);
    for(int i = 0 ; i < 6 ; i++){
	inFile >> topFive.at(i);
    }
    sort(topFive.begin(),topFive.end());
    for(int i = 0 ; i < num - 6 ; i++){
	inFile >> topFive.at(0);
	sort(topFive.begin(),topFive.end());
    }
    int SumOfTopFive = 0;
    for(int i = 1 ; i < 6 ; i++){
	SumOfTopFive += topFive.at(i);
    }
    cout << SumOfTopFive << endl;
    return 0;
}
