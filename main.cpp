#include <iostream>
#include <iomanip>


int main(){

    double price_per_square_foot;
    int room_width;
    int room_length;
    


    std::cin >> price_per_square_foot;
    std::cin >> room_width;
    std::cin >> room_length;

    double carpet_cost = price_per_square_foot * room_width * room_length;
    double production_price = (carpet_cost * .2) + carpet_cost;
    std::cout << std::fixed << std::setprecision(2);



    std::cout << "Room: " << (room_width * room_length) << " sq ft" << std::endl;
    std::cout << "Carpet: $" << production_price << std::endl;




}
    