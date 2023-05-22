
//C++ calculator by Arn Kenneth C.

#include <iostream>
using namespace std;
int main()
{
    float n1, n2;
    int choice;
    char again;
        do{
        cout<<"============\n";
        cout<<"|CALCULATOR|\n";
        cout<<"============\n";
        cout<<"1. Addition\n";
        cout<<"2. Substraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"choose your desired equation (1-5):";
        cin>>choice;
        if(choice>=1 && choice <=4)
        {
        cout<<endl;
        cout<<"======================";
        cout<<" \nEnter any two Numbers\n";
        cout<<"======================\n";
        cout<<"Please enter the 1st number: ";
        cin>>n1;
        cout<<endl;
        cout<<"Please enter the 2nd number: ";
        cin>>n2;
        cout<<"The answer is: ";
        }
        switch(choice)
    {
    //formulas
    case 1:
      cout <<n1<<"+"<<n2<<"="<< n1 + n2<<endl;
      break;

    case 2:
      cout <<n1<<"-"<<n2<<"="<<n1-n2<<endl;
      break;

    case 3:
      cout <<n1<<"*"<<n2<<"="<<n1*n2<<endl;
      break;

    case 4:
      cout <<n1<<"/"<<n2<<"="<<n1/n2<<endl;
      break;
    case 5:
        cout<<"Thank You for using my calculator :D"<<endl;
        return 0;
    default:
        cout<<"Please select a number within 1-5 only :D"<<endl;
        break;
    }
    cout<<"\nDo you wish to continue? press 'y' if yes and 'n' if no"<<endl;
    cin>>again;
    }while(again =='y' ||again == 'Y');
    cout<<"\nGoodbye and thank you for using my calculator :D\n";

return 0;
}
