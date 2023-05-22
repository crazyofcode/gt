#include <iostream>

const int key = 123456;
double balance1;
int main()
{
    std::cout<<"\t\t        ||  Bank ATM machine    "<<std::endl;
    std::cout<<"\t\t        ========================"<<std::endl;
    std::cout<<"\t\t       ==========================\n\n"<<std::endl;

    int password;
    int pincode;

    std::cout<<"please enter pincode"<<std::endl;
    std::cin>>pincode;
    if(pincode = 1234)
    {
        std::cout<<"\n      welcome"<<std::endl;
        for(int i = 0;i < 3;i++)
        {
            std::cout<<"please enter you password"<<std::endl;
            std::cin>>password;
            double balance = 100000000;
            balance1 = balance;
            if(password == key)
            {
                for(int x = 1;x < 10;x++)
                {
                    double withdraw,deposit;
                    int choice;
                    std::cout<<std::endl;
                    if(x == 1)
                    {
                        std::cout<<"\t\t  ATM"<<std::endl;
                        std::cout<<"choose a transaction\n\n";
                    
                    }
                    std::cout<<"MAIN SCREEN \n";
                    std::cout<<"[1] Inquire Balance"<<std::endl;
                    std::cout<<"[2] Withdraw"<<std::endl;
                    std::cout<<"[3] Deposit"<<std::endl;
                    std::cout<<"[4] Quit"<<std::endl;
                    std::cout<<std::endl;
                    std::cout<<"enter choice"<<std::endl;
                    std::cin>>choice;
                    switch(choice)
                    {
                        case 1:
                            std::cout<<"Balance Inquiry"<<std::endl;
                            std::cout<<"Your current Balance PESOS"<< balance1<<std::endl;
                            continue;
                        case 2:
                            std::cout<<"Withdraw"<<std::endl;
                            std::cout<<"enter amount Pesos"<<std::endl;
                            std::cin>>withdraw;
                            balance1 -= withdraw;
                            std::cout<<"You withdraw Pesos :"<<withdraw<<std::endl;
                            std::cout<<"Your remaining balance is Pesos :"<<balance1<<std::endl;
                            continue;
                        case 3:
                            std::cout<<"Deposit"<<std::endl;
                            std::cout<<"enter amount in Pesos"<<std::endl;
                            std::cin>>deposit;
                            balance1 += deposit;
                            std::cout<<"You deposit Pesos"<<deposit<<std::endl;
                            std::cout<<"You new Balance is Pesos :"<<balance1<<std::endl;
                            continue;
                        case 4:
                            std::cout<<"EXIT MODE"<<std::endl;
                            system("cls");
                            break;
                        default :
                            std::cout<<"Invalid Option"<<std::endl;
                            continue;
                    }
                    break;
                }
                break;
            }
            else if(i == 2)
            {
                std::cout<<"Card is captured"<<std::endl;

            }
            else {
                std::cout<<"please try again"<<std::endl;
            }
        }
    }


}
