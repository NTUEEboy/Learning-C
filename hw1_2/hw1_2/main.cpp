//
//  main.cpp
//  hw1_2
//
//  Created by Ming-Ju Kuo on 30.10.18.
//  Copyright © 2018 Ming-Ju Kuo. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    double day, month, year, old;
    string birthName, pet;
    cout<<"Please enter your birthday."<<endl;
    cin>>day;
    cout<<"Please enter now your birth month as a number."<<endl;
    cin>>month;
    cout<<"At least the year."<<endl;
    cin>>year;
    cout<<"Please enter the birth name of your mother."<<endl;
    cin>>birthName;
    cout<<"Please enter the name of your first pet."<<endl;
    cin>>pet;
    cout<<"Please enter your current age."<<endl;
    cin>>old;
    cout<<"Your safe password is:"<<(day+month)/year<<"?"<<birthName<<"!"<<pet<<"$"<<old<<endl;
    return 0;
}
