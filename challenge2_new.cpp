#include <iostream>
using namespace std;

int main(){
int small_room_price{25};
int large_room_price{35};
double tax_rate{.06};
int estimate_duration{30};

int small_room_amount;
cout<<"How many small rooms would you like?"<<endl;
cin>>small_room_amount;

int large_room_amount;
cout<<"How many large roosm would you like?"<<endl;
cin>>large_room_amount;

int total_price = (small_room_amount * small_room_price) + (large_room_amount * large_room_price);
float tax = total_price *tax_rate;

cout<<"Estimate for carpet Cleaing Service"<<endl<<"Number of Small Rooms: "<<small_room_amount<<endl<<"Numer of Large Rooms: "<<large_room_amount<<endl;
cout<<"Price per small room: "<<small_room_price<<endl<<"Price per big room: "<<large_room_price<<endl;
cout<<"Your total cost"<<total_price<<endl;
cout<<"Tax:"<<tax<<endl<<"==========================="<<endl<<"Total Estimate:"<<tax+total_price<<endl<<"This estimate is valid for "<<estimate_duration<<" days!";

}