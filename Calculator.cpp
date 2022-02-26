#include <iostream>
using namespace std;


int main()
{
    cout<<"                         Calculator                           \n\n\n";

    int ch;
    float x, y, z;
    char c;

    cout<<"Enter first number: ";
    cin>>x;
    
     cout<<"Enter second number: ";
     cin>>y;
   
        cout<<"\n1. Addition \n";
        cout<<"2. Subtraction \n";
        cout<<"3. Multiplication \n";
        cout<<"4. Division \n";
        cout<<"5. Exit \n";
    
        cout<<"Enter your choice: ";
        cin>>ch;

    
        switch(ch)
        {
            case 1: z = x+y;
                cout<<"Addition is="<<z;
            break;

            case 2: z=x-y;
                cout<<"Subtraction is="<< z;
            break;
            case 3: z=x*y;
                cout<<"Multiplication is="<< z;
            break;

            case 4: z=x/y;
                cout<<"Division is="<<z;
            break;

            case 5: 
            break; 
        
            default: cout<<"Please Enter correct choice: ";

        }    

}