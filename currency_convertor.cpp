#include<iostream>
using namespace std;
class converter
{
	private:
    string currency, currency2,start,end;
    float amount,amount2;
    
    void getdata()
    {
    
    cout<< "To start Converter Enter 'yes' to stop enter 'no': ";
    cin>>start;
	}
    public:
    	void displaydata()
    	{
    		getdata();
    		 if(start == "yes")
    {
    
    cout<<"What currency would you like to convert? \n";
    cout<< "The currencies are: Rupees, Dollars, Yen, and Euros. \n";
    cin>> currency;
    cout<< "What currency would you like to convert to? \n";
    cin>> currency2;
    cout<< "How much money would you like to convert? \n";
    cin>> amount;
    
    if (currency == "rupees"){
        
        if (currency2 == "dollars"){

            amount2 = amount * .012;
            cout << amount << " rs is equal to " << amount2 << "$\n";

        }else if (currency2 == "yen"){

            amount2 = amount * 1.73;
            cout << amount << " rs is equal to " << amount2 << "yen\n";

        }else if (currency2 == "euros"){

            amount2 = amount * .012;
            cout << amount << " rs is equal to " << amount2 << "�\n";
        }else{

        cout << "Invalid entry. (check spelling!)\n";

    }


    }else if (currency == "dollars"){

        if (currency2 == "rupees"){

            amount2 = amount * 79.86;
            cout << amount << "$ is equal to " << amount2 << " rs\n";

        }else if (currency2 == "yen"){

            amount2 = amount * 138.64;
            cout << amount << "$ is equal to " << amount2 << "yen\n";

        }else if (currency2 == "euros"){

            amount2 = amount * .98;
            cout << amount << "$ is equal to " << amount2 << "�\n";
        }else{

        cout << "Invalid entry. (check spelling!)\n";

    }

    }else if (currency == "yen"){

            if (currency2 == "dollars"){

                amount2 = amount * .0072;
                cout << amount << " yen is equal to " << amount2 << "$\n";

            }else if (currency2 == "rupees"){

                amount2 = amount * 0.576;
                cout << amount << " yen is equal to " << amount2 << " rs\n";

            }else if (currency2 == "euros"){

                amount2 = amount * .0071;
                cout << amount << " yen is equal to " << amount2 << "�\n\n";
            }else{

        cout << "Invalid entry. (check spelling!)\n";

    }

    }else if (currency == "euros"){

        if (currency2 == "dollars"){
            amount2 = amount * 1.01;
            cout << amount << "� is equal to " << amount2 << "$\n\n";
        }else if (currency2 == "yen"){
            amount2 = amount * 141.21;
            cout << amount << "� is equal to " << amount2 << "yen\n\n";
        }else if (currency2 == "rupees"){
        	
            amount2 = amount * 81.34;
            cout << amount << "� is equal to " << amount2 << " rs\n\n";
        }else{
        cout << "Invalid entry. (check spelling!)\n";
    }
    }
	else{

        cout << "Invalid entry. (check spelling!)\n";

    };
    	cout<<"\nEnter 'y' to restart Enter 'n' to Stop  :";
	cin>>end;
	if(end=="n")
	{
		exit(0);
	}
	else(end=="y");
	{
		displaydata();
	}
    
    
    }
    else{
    	cout<<"YOU HAVE STOPPED TO CONVERTER !";
	}
		}
   
};
int main()
{
	cout<<"Roll : 2452\n";
    cout<<"Name : Jatin Gangare\n";
    cout<<"class : FY.IT / A\n\n";
    cout<<"----------- Currency Converter -------------\n\n";
	converter c;
	c.displaydata();
    return 0;
}