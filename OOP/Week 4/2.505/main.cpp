#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"

int main()
{   
    MerkelMain app{};
    app.printMenu();

}




    // std::vector<OrderBookEntry> orders;

    // orders.push_back(   OrderBookEntry{1000, 
    //                     0.02, 
    //                     "2020/03/17 17:01:24.884492", 
    //                     "BTC/USDT", 
    //                     OrderBookType::bid}     );

    // orders.push_back(   OrderBookEntry{2000, 
    //                     0.02, 
    //                     "2020/03/17 17:01:24.884492", 
    //                     "BTC/USDT", 
    //                     OrderBookType::bid}     );
    
    // std::cout << "The price is " << orders[0].price << std::endl;
    // std::cout << "The price is " << orders[1].price << std::endl;



