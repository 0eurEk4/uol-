// Your First C++ Program
#include <iostream>

void printMenu() 
{
        // 1 print help
        std::cout << "1: Print help " << std::endl;
        // 2 print exchange status
        std::cout << "2: Print exchange status " << std::endl;
        // 3 make an offer 
        std::cout << "3: Make an offer " << std::endl;
        // 4 make a bid
        std::cout << "4: Make a bid " << std::endl;
        // 5 print wallet 
        std::cout << "5: Print wallet " << std::endl;
        // 6 continue
        std::cout << "6: Continue" << std::endl;

        std::cout << " ========= " << std::endl;
        std::cout << "Type in 1-6" << std::endl;
}

void printHelp() 
{
    std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers" << std::endl;
}

void printMarketStats()
{
    std::cout << "Market looks good." << std::endl;

}

void enterOffer() 
{
    std::cout << "Mark and offer - enter the amount" << std::endl;
}

void enterBid() 
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet() 
{
    std::cout << "Your wallet is empty. " << std::endl;
}

void gotoNextTimeFrame()
{
    std::cout << "Going to next time frame" << std::endl;
}

int getUserOption()
{
    int userOption;
    std::cin >> userOption;
    std::cout << "You choose: " << userOption << std::endl;
    return userOption;
}

void porcessUserOption(int userOption) 
{
    if (userOption == 0) // bad input
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1)
    {
        printHelp();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        gotoNextTimeFrame();
    }
}

int main() 
{
    while(true)
    {
        printMenu();
        int userOption = getUserOption();
        porcessUserOption(userOption);
    }
    return 0;
}
