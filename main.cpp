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
    double labor_cost = (room_width * room_length) * 0.75;
    double gov_tax = (production_price + labor_cost) * 0.07;
    double final_cost = production_price + labor_cost + gov_tax;
    std::cout << std::fixed << std::setprecision(2);



    std::cout << "Room: " << (room_width * room_length) << " sq ft" << std::endl;
    std::cout << "Carpet: $" << production_price << std::endl;
    std::cout << "Labor: $" << labor_cost << std::endl;
    std::cout << "Tax: $" << gov_tax << std::endl;
    std::cout << "Cost: $" << final_cost << std::endl;




}
    