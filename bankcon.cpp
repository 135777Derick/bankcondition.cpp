#include <iostream>
   #include <string>
   using namespace std;
   int main() {
       // declare name
    int age, duration;
    double amount;
    string crb, name;
    // capture name
    cout<< "Please enter the childs name\n";
    cin>>name;
    //capture age
    cout<< "please enter your age\n";
    cin>>age;
    cout<< "How long has you been a customer in years\n";
    cin>>duration;
    cout<< "please enter your balance in the bank account\n";
    cin>>amount;
    // check condition
    if (age >= 22){
        if(amount >= 50000){
            if(crb == "good"){
                if (duration >= 0.5){
                cout<<" Eligible for loan\n";
                }
            }
        }
    }
else{
    cout<<"You are not eligible for a loan";
}
    

    return 0;
}
