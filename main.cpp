#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<cstdlib>
//#include<ctime>

using namespace std;

int LIMIT = 5000;
double Sub_total=0;
void smiley()
{
    cout<< endl;
    cout<< endl;
    cout<<"Congratulations!!"<<endl;
    cout<<endl;

    int w=8;

    for(int g=0;g<2;g++)
    {
        cout<<"   @";    // Displaying
    }
    cout<<endl; // endl is for new line
    cout<<endl;
    for(int a=1;a<=2;a++)
    {

        for(int b=0;b<a;b++)
        {
            cout<<" ";    // displaying space here
        }
        cout<<"*";


        for(int c=1;c<w;c++)
        {
            cout<<" ";
        }
        cout<<" *"<<endl;
        w=w-2;
    }

    for(int e=1;e<=1;e++)
    {

        for(int f=4;f>=e;f--)
        {
            cout<<" ";
        }
        cout<<" **";
    }

}



bool IsLoggeedIn()
{
    string username, password, un, pw;
    cout<< "Enter Username: "; cin>>username;
    cout<< "Enter Password: "; cin>> password;

    ifstream read("c:\\" + username + ".txt");
    getline(read,un);
    getline(read,pw);

    if(un==username && pw==password)
    {
        return true;
    }
    else {
        return false;
    }
}

void voucher();
void Online_Shopping();

class Product {
public:
    double price;

    Product(double prc) {


        for (;;) {

            price = prc;
            int Num;
            cout << "How many would you like to add to the cart: ";
            cin >> Num;
            cout << endl;
            printf("Total Price for this item : %f $", Num * prc);
            cout << endl;
            cout << endl;
            double total_price = Num * prc;
            Sub_total = Sub_total + total_price;
            printf("SUB TOTAL OF ALL ADDED ITEMS: %f $", Sub_total);
            cout << endl;


            string finalizer;
            cout << "\n-->DO YOU WANT TO CONTINUE PURCHASING VOUCHER (y/n)? ";
            cin >> finalizer;

            if (finalizer == "y") {
                voucher();
            } else if (finalizer == "n") {
                cout << "\n\nTHANKS FOR THE PURCHASE, HEADING TO HOME-PAGE" << endl;
                cout << endl;
                Online_Shopping();
            };
        }

        /*for(;finalizer!="n";){
            double Total_price=Num*prc;
            double Sub_Total =Sub_Total+Total_price;
            printf("Sub Total of all items added so far in the cart: %f,Sub_Total ");
        }*/
    }
};


void voucher(){
    cout << endl;
    /*int voucher_amount;
    while(true)
    {
        int passLength=10;
        srand (time(0));           //random seed
        string pass;

        for(int i=0; i<passLength; i++){
            pass += getVoucher();
        }

        //pass = getVoucher();
        cout<< pass <<endl;
        pass= "";                 //we need to empty our pass so it would not concatenate new password with old
    }*/

    cout << "*********** Voucher to purchase **********" << endl;
    cout << "a) 50$     b) 100$     c) 500$     d)1000$" << endl;
    cout << "************ Press a/ b/ c/ d ************" << endl;
    cout << endl;
    string option;
    //int No;
    cout << "Please Enter Your Option: ";
    cin >> option;

    if (option == "a") {
        cout << endl;
        class Voucher : public Product {
        };
        cout << "*********50$ GIFT VOUCHER********" << endl;
        cout << "**********BONUS GIFT BOX*********" << endl;
        cout << endl;
        Product voucher(50);
        system("pause");
    }

    if (option == "b") {
        cout << endl;
        class Voucher : public Product {
        };
        cout << "********* 100$ GIFT VOUCHER********" << endl;
        cout << "********** BONUS GIFT BOX *********" << endl;
        cout << endl;
        Product voucher(100);
        system("pause");
    }


    if (option == "c") {
        cout << endl;
        class Voucher : public Product {
        };
        cout << "********* 500$ GIFT VOUCHER ********" << endl;
        cout << "********** BONUS GIFT BOX **********" << endl;
        cout << endl;
        Product voucher(500);
        system("pause");
    }

    if (option == "d") {
        cout << endl;
        class Voucher : public Product {
        };
        cout << "********* 1000$ GIFT VOUCHER********" << endl;
        cout << "********** BONUS GIFT BOX **********" << endl;
        cout << endl;
        Product voucher(1000);
        system("pause");
    }

}


void Online_Shopping();

void Purchase(){
    class Product{
    public:
        double price;

        Product(double prc) {


            for( ; ; ){

            price=prc;
            int Num;
            cout << "How many would you like to add to the cart: ";
            cin >> Num;
            printf("Total Price for this item : %f $", Num*prc) ;
            cout<<endl;
            double total_price=Num*prc;
            Sub_total = Sub_total+total_price;
                printf("Sub Total of all added items so far in the cart: %f $", Sub_total);



            string finalizer;
            cout << "\n-->DO YOU WANT TO CONTINUE PURCHASE (y/n)? ";
            cin >> finalizer;

            if(finalizer=="y")
            {
                Purchase();
            }


            else if (finalizer=="n")
            {
                cout << "\n\nTHANKS FOR THE PURCHASE, HEADING TO HOME-PAGE"<<endl ;
                cout<<endl;
                Online_Shopping();
            };
            }

            /*for(;finalizer!="n";){
                double Total_price=Num*prc;
                double Sub_Total =Sub_Total+Total_price;
                printf("Sub Total of all items added so far in the cart: %f,Sub_Total ");
            }*/
        }
    };

    cout<<endl; cout<<endl;
    cout << "==========WOW==========" << endl;
    cout << "   1. Ready Made Foods " << endl;
    cout << "   2. Packaged Foods" << endl;
    cout << "   3. Frozen Foods" << endl;
    cout << "   4. Fast Foods" << endl;
    cout << "   5. Drinks" << endl;
    cout<<endl;
    cout << "Which one to start with: " << endl;
    cout << "Press 1/ 2/ 3/ 4/ 5 " << endl;
    cout<<endl;

    int choice; cin>> choice;

    if(choice ==1) {
        class Ready_Made_Food : public Product {};
        cout<<endl;
        cout<<"========READY MADE FOOD========"<<endl;
        cout<< "a) SALAD    b)Nodules"<<endl;
        cout<< "Select Your Choice: "<<endl;
        string select; cin>>select;

        if(select=="a"){
            cout<<endl;
            cout<<"********SALAD********"<<endl;
            cout<<"*** WEIGHT: 300 gm***"<<endl;
            cout<<"****PRICE: 3.00 $****"<<endl;
            Product salad(3);
            system("pause");

        }

        else if(select=="b") {
            cout<<endl;
            cout<<"*******NODULES*******"<<endl;
            cout<<"*** WEIGHT: 250 gm***"<<endl;
            cout<<"****PRICE: 2.50 $****"<<endl;
            Product nodules(2.5);
        }
    }

    else if(choice == 2){
        class Packaged_Food : public Product{};
        cout<<endl;
        cout<<"===================Packaged FOOD=================="<< endl;
        cout<< "a) VEGETABLE    b) BREAD    c) CAKE    d) BISCUIT" <<endl;
        cout<<endl;
        cout<< "Select Your Choice: "<<endl;
        string select; cin>>select;

        if(select=="a") {
            cout<<endl;
            cout<<"******VEGETABLE******"<<endl;
            cout<<"*** WEIGHT: 500 gm***"<<endl;
            cout<<"****PRICE: 3.50 $****"<<endl;
            Product vegetable(3.5);
        }

        else if(select=="b") {
            cout<<endl;
            cout<<"********BREAD*********"<<endl;
            cout<<"****WEIGHT: 1000 gm***"<<endl;
            cout<<"****PRICE: 1.50 $*****"<<endl;
            Product bread(1.5);
        }

        else if(select=="c") {
            cout<<endl;
            cout<<"*********CAKE*********"<<endl;
            cout<<"****WEIGHT: 1000 gm***"<<endl;
            cout<<"****PRICE: 2.50 $*****"<<endl;
            Product cake(2.5);
        }

        else if(select=="d") {
            cout<<endl;
            cout<<"*******BISCUIT*******"<<endl;
            cout<<"****WEIGHT: 500 gm***"<<endl;
            cout<<"****PRICE: 2.00 $****"<<endl;
            Product biscuit(2);
        }
    }

    else if(choice == 3){

        class Frozen_Food : public Product{};
        cout<<endl;
        cout<<"===================FROZEN FOOD===================="<<endl;
        cout<< "a) CHICKEN    b) BEEF    c) FISH    d) ICE CREAM "<<endl;
        cout<<endl;
        cout<< "Select Your Choice: "<<endl;

        string select; cin>>select;

        if(select=="a") {
            cout<<endl;
            cout<<"********CHICKEN*******"<<endl;
            cout<<"****WEIGHT: 1000 gm***"<<endl;
            cout<<"****PRICE: 4.50 $*****"<<endl;
            Product chicken(4.5);
        }

        if(select=="b") {
            cout<<endl;
            cout<<"*********BEEF*********"<<endl;
            cout<<"****WEIGHT: 1000 gm***"<<endl;
            cout<<"****PRICE: 6.00 $*****"<<endl;
            Product beef(6);
        }

        if(select=="c") {
            cout<<endl;
            cout<<"*********FISH*********"<<endl;
            cout<<"****WEIGHT: 1000 gm***"<<endl;
            cout<<"****PRICE: 7.00 $*****"<<endl;
            Product fish(7);
        }

        if(select=="d") {
            cout<<endl;
            cout<<"******ICE CREAM******"<<endl;
            cout<<"****WEIGHT: 1 lit****"<<endl;
            cout<<"****PRICE: 2.00 $****"<<endl;
            Product ice_cream(2);
        }
    }

    else if(choice == 4) {

        class Fast_Food : public Product {};
        cout<<endl;
        cout<<"===============FAST FOOD============="<<endl;
        cout<< "a) BURGER    b) PIZZA    c) SANDWICH"<<endl;
        cout<<endl;
        cout<< "Select Your Choice: "<<endl;

        string select; cin>>select;
        if(select=="a") {
            cout<<endl;
            cout<<"******BURGER******"<<endl;
            cout<<"****WEIGHT: 200 gm****"<<endl;
            cout<<"****PRICE: 4.00 $*****"<<endl;
            Product burger(4);
        }

        if(select=="b") {
            cout<<endl;
            cout<<"********PIZZA********"<<endl;
            cout<<"****SIZE: 10 inch****"<<endl;
            cout<<"****PRICE: 6.00 $****"<<endl;
            Product pizza(6);
        }

        if(select=="c") {
            cout<<endl;
            cout<<"*******SANDWICH*******"<<endl;
            cout<<"****WEIGHT: 100 gm****"<<endl;
            cout<<"****PRICE: 3.00 $*****"<<endl;
            Product sandwich(3);
        }
    }

    else if(choice == 5){
        cout<<endl;
        class Drinks: public Product{};

        cout<<endl;
        cout<<"==================DRINKS====================" <<endl;
        cout<< "a) JUICE    b) MILK SHAKE    c) SOFT DRINKS" <<endl;
        cout<<endl;
        cout<< "Select Your Choice: "<<endl;

        string select; cin>>select;
        if(select=="a") {
            cout<<endl;
            cout<<"********JUICE*********"<<endl;
            cout<<"****WEIGHT: 250 lit***"<<endl;
            cout<<"****PRICE: 3.00 $*****"<<endl;
            Product juice(3);
        }

        if(select=="b") {
            cout<<endl;
            cout<<"******MILK SHAKE******"<<endl;
            cout<<"****WEIGHT: 250 lit***"<<endl;
            cout<<"****PRICE: 2.50 $*****"<<endl;
            Product milk_shake(2.5);
        }

        if(select=="c") {
            cout<<endl;
            cout<<"******SOFT DRINKS*****"<<endl;
            cout<<"****WEIGHT: 500 lit***"<<endl;
            cout<<"****PRICE: 3.00 $*****"<<endl;
            Product soft_drinks(3);
        }
    }
}

static const char pool[]=
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789";

int poolSize= sizeof (pool)-1;

//this function wil return a random charecter from pool
char getVoucher(){
    return pool[rand()% poolSize];
}


void Online_Shopping() {

    class Product {
    public:
        double price;

        Product(double prc) {


            for (;;) {

                price = prc;
                int Num;
                cout << "How many would you like to add to the cart: ";
                cin >> Num;
                cout << endl;
                printf("Total Price for this item : %f $", Num * prc);
                cout << endl;
                cout << endl;
                double total_price = Num * prc;
                Sub_total = Sub_total + total_price;
                printf("SUB TOTAL OF ALL ADDED ITEMS: %f $", Sub_total);
                cout << endl;


                string finalizer;
                cout << "\n-->DO YOU WANT TO CONTINUE PURCHASE PRODUCTS (y/n)? ";
                cin >> finalizer;

                if (finalizer == "y") {
                    Purchase();
                } else if (finalizer == "n") {
                    cout << "\n\nTHANKS FOR THE PURCHASE, HEADING TO HOME-PAGE" << endl;
                    cout << endl;
                    Online_Shopping();
                };
            }

            /*for(;finalizer!="n";){
                double Total_price=Num*prc;
                double Sub_Total =Sub_Total+Total_price;
                printf("Sub Total of all items added so far in the cart: %f,Sub_Total ");
            }*/
        }
    };


    while (true) {
        cout << endl;
        cout << "*******************************" << endl;
        cout << "*         Heading to          *" << endl;
        cout << "*      ABC Online Home-Page   *" << endl;
        cout << "*******************************" << endl;
        cout << endl;

        printf("Daily Purchase Limit: %d$ \n\n ", LIMIT);

        cout << "Please Select Your Choice: " << endl;

        cout << "   1. Purchase" << endl;
        cout << "   2. Online Gift Voucher" << endl;
        cout << "   3. Check Out" << endl;
        cout << "   4. Log out" << endl;
        cout << endl;

        string option;
        cout << "Please Enter Your Option: ";
        cin >> option;

        if (option == "1") {
            cout << endl;
            Purchase();
        }

        else if (option == "2") {
            cout << endl;
            voucher();

            system("pause");
        }

        else if (option == "3") {
            string Address;
            cout << endl;
            cout << "**********CHECKING OUT*************" << endl;
            printf(" SUB TOTAL OF ALL ADDED ITEMS: %f $", Sub_total);
            cout << endl;
            cout << endl;
            cout << "PLEASE ENTER THE DELIVERY ADDRESS" << endl;
            cin >> Address;
            getline(cin, Address);
            cout << endl;

            if (Sub_total > 100) {
                smiley();
                cout << endl;

                cout << "NO Shipment Fee Required" << endl;
                printf("TOTAL AMOUNT TO PAY: %f $", Sub_total);
                cout << endl;
            } else if (Sub_total < 100) {
                cout<<"Your Total Bill is Lower than 100$"<<endl;
                cout << "Shipment Fee of 5$ is required" << endl;
                Sub_total = Sub_total + 5;
                printf("TOTAL AMOUNT TO PAY: %f $", Sub_total);
                cout << endl;
            } else if (Sub_total > LIMIT) {
                cout << "PAYMENT lIMIT GETS EXITED" << endl;
            }

            cout << endl;
            cout << "**************** PAYMENT METHOOD ***************" << endl;
            cout << "a) Online Banking    b) Credit Card    c) Paypal" << endl;

            string payment_system;
            //int No;
            cout << "Please Select Your Payment System: ";
            cin >> payment_system;
            cout << endl;

            if (payment_system == "a") {
                char choice;
                cout << "************ Welcome to Online Banking **************" << endl;
                cout << endl;
                cout << "################# Our Bank Details ##################" << endl;
                cout << "######## IBAN: 1234567890   and   BIC: abcABC #######" << endl;
                printf("******* PLEASE SEND %f $ TO OUR BANK ACCOUNT *******", Sub_total);
                cout << endl;

                {
                    cout << "\n\n-->HAVE YOU ALREADY TRANSFERED (y/n)? ";
                    cin >> choice;

                    smiley();
                    cout << endl;


                    cout << "Your Products will be delivered within 3 working days" << endl;
                    cout << "***** Thanks for Shopping with ABC Online Shop ******" << endl;
                    cout << endl;
                }
                while (choice == 'Y' || choice == 'y');

                cout << endl;
                if (choice == 'N' || choice == 'n') {
                    printf("PLEASE PAY %f $ TO OUR BANK ACCOUNT", Sub_total);
                    cout << endl;

                }

                //system("pause");
                //Online_Shopping();
            }

            else if (payment_system == "b") {
                double available_amount;
                int card_number, cvc;
                cout << "********* Welcome to Credit Card Payment ************" << endl;
                cout << endl;
                cout << "##### Enter Your Available Amount in Credit Card ####" << endl;
                cin >> available_amount;
                printf("***** YOUR AVAILABLE AMOUNT IN CREDIT CARD: %f $ ****", available_amount);
                cout << endl;

                printf("*** DO YOU WANT TO PAY %f $ WITH YOUR CREDIT CARD ***", Sub_total);
                cout << endl;

                cout << "######## Please Enter Your Credit Card Number #######" << endl;
                cin >> card_number;
                cout << "########### Please Enter Your CVC Number ############" << endl;
                cin >> cvc;

                smiley();
                cout << endl;
                printf(" YOUR UPDATED AVAILABLE AMOUNT IN CREDIT CARD: %f $ ", available_amount - Sub_total);
                cout << endl;

                cout << "Your Products will be delivered within 3 working days" << endl;
                cout << "***** Thanks for Shopping with ABC Online Shop ******" << endl;
                cout << endl;

                //system("pause");
                //Online_Shopping();
            };


            if (payment_system == "c") {
                char choice;
                cout << "************ Welcome to Paypal Payment **************" << endl;
                cout << endl;
                cout << "############### Our Paypal Account ##################" << endl;
                cout << "#### Paypal Email Address: abc_online@ abc.shop  ####" << endl;
                printf("***** PLEASE TRANSFER %f $ TO OUR PAYPAL ACCOUNT ****", Sub_total);
                cout << endl;

                {
                    cout << "\n\n-->HAVE YOU ALREADY TRANSFERED (y/n)? ";
                    cin >> choice;

                    smiley();
                    cout << endl;
                    cout << "Your Products will be delivered within 3 working days" << endl;
                    cout << "***** Thanks for Shopping with ABC Online Shop ******" << endl;
                    cout << endl;

                    //system("pause");
                   // Online_Shopping();
                }

                cout << endl;
                if (choice == 'N' || choice == 'n') {
                    printf("PLEASE PAY %f $ TO OUR BANK ACCOUNT", Sub_total);
                    cout << endl;

                }


            }

        } else if (option == "4") {
            cout << "Signed Out" << endl;
            cout << "Thanks for Visiting Us" << endl;
            break;
        }
        break;
        /*else {
            cout << "Logged Out" << endl;
            cout << "Thanks for Visiting Us" << endl;
            break;
        }*/
        break;
        cout << endl;

        //system("pause");
        //system("cls");
    }
}


    int main() {
        cout << endl;
        cout << "|=============================|" << endl;
        cout << "|         WELCOME TO          |" << endl;
        cout << "|      ABC ONLINE SHOP        |" << endl;
        cout << "|=============================|" << endl;

        int choice;
        cout << "1. Register\n2: Login\n Your choice: ";
        cin >> choice;

        if (choice == 1) {
            string username, password;

            cout << "Select an Username (without null charecter ) : ";
            cin >> username;
            //getline( cin, username );
            cout << "Select a Password : ";
            cin >> password;
            //getline( cin, password);

            ofstream file;
            file.open("c:\\" + username + ".txt");
            file << username << endl << password;
            file.close();

            main();
        } else if (choice == 2) {
            bool status = IsLoggeedIn();


            if (!status) {
                cout << "False Login!" << endl;
                system("PAUSE");
                return 0;
            } else {
                cout << "Successfully Logged In!" << endl;
                system("PAUSE");
                return 1;
            }
        }

        Online_Shopping();
    }
