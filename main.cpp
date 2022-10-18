/*Task 2.Currency converter. */
#include <iostream>
using namespace std;

int main()
{
    const float USDTOUAH = 36.9f;
    const float EURTOUAH = 36.26f;
    const float USDTOEUR = 1.02f;
    const float EURTOUSD = 0.98f;
    int number;
    float uah�ash, eurCash, usdCash;
    bool cheker = true;

    cout << "Currency converter." << endl;
    cout << "Enter your amount of hryvnia (UAH) : ";
    cin >> uah�ash;
    cout << "Enter your dollar amount (USD) : ";
    cin >> usdCash;
    cout << "Enter your amount of euro (EUR) : ";
    cin >> eurCash;

    while (cheker)
    {
        float uahToUsd, uahToEur, usdToUah, usdToEur, eurToUah, eurToUsd;
        cout << "\n\nSelect a currency conversion option:"
            "\n 1) UAH --> USD \n 2) UAH --> EUR \n 3) USD --> UAH \n 4) USD --> EUR \n"
            " 5) EUR --> UAH \n 6) EUR --> USD \n 7) Get information on your accounts \n 8) Exit \n" << endl;
        cout << "Enter number --> ";
        cin >> number;
        switch (number)
        {
        case 1:
            cout << "How many hryvnias to convert to dollars? --> ";
            cin >> uahToUsd;
            if (uahToUsd <= uah�ash)
            {
                usdCash += uahToUsd / USDTOUAH;
                uah�ash -= uahToUsd;
                cout << "Conversion done!" << endl;
                break;
            }
            else
            {
                cout << "You entered an invalid value!" << endl;
                break;
            }
        case 2:
            cout << "How many hryvnias to convert to euros? --> ";
            cin >> uahToEur;
            if (uahToEur <= uah�ash)
            {
                eurCash += uahToEur / EURTOUAH;
                uah�ash -= uahToEur;
                cout << "Conversion done!" << endl;
                break;
            }
            else
            {
                cout << "You entered an invalid value!" << endl;
                break;
            }
        case 3:
            cout << "How many dollars to convert to hryvnia? --> ";
            cin >> usdToUah;
            if (usdToUah <= usdCash)
            {
                uah�ash += usdToUah * USDTOUAH;
                usdCash -= usdToUah;
                cout << "Conversion done!" << endl;
                break;
            }
            else
            {
                cout << "You entered an invalid value!" << endl;
                break;
            }
        case 4:
            cout << "How many dollars to convert to euros? --> ";
            cin >> usdToEur;
            if (usdToEur <= usdCash)
            {
                eurCash += usdToEur * USDTOEUR;
                usdCash -= usdToEur;
                cout << "Conversion done!" << endl;
                break;
            }
            else
            {
                cout << "You entered an invalid value!" << endl;
                break;
            }
        case 5:
            cout << "How many euros to convert to hryvnia? --> ";
            cin >> eurToUah;
            if (eurToUah <= eurCash)
            {
                uah�ash += eurToUah * EURTOUAH;
                eurCash -= eurToUah;
                cout << "Conversion done!" << endl;
                break;
            }
            else
            {
                cout << "You entered an invalid value!" << endl;
                break;
            }
        case 6:
            cout << "How many euros to convert to dollars? --> ";
            cin >> eurToUsd;
            if (eurToUsd <= eurCash)
            {
                usdCash += eurToUsd * EURTOUSD;
                eurCash -= eurToUsd;
                cout << "Conversion done!" << endl;
                break;
            }
            else
            {
                cout << "You entered an invalid value!" << endl;
                break;
            }
        case 7:
            cout << "#----------------------------------------------------------------------------------------------------------->";
            cout << "\nInformation on your accounts:\n UAH : " << uah�ash << " \n USD : " << usdCash << " \n EUR : " << eurCash << endl;
            cout << "#----------------------------------------------------------------------------------------------------------->";

            break;
        case 8:
            cheker = false;
            break;
        default:
            cout << "There is no such option.";
            break;
        }
    }
	return 0;
}