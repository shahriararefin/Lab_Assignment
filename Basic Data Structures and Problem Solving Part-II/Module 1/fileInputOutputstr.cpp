#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ofstream file;
    file.open("1.txt");

    file<< "Hello, world!"<<endl;

    ifstream ifs;
    ifs.open("1.txt");

    ifs.close();
    file.close();

    return 0; 
}