#include "header.h"

int main(){
string input;   
   cout << "Hello World \n";

   while (true)
   {
    cout << " Enter User or (type 'exit' to quit) \n";
    getline(cin, input);

    cout << "Hello, " + input <<"\n";

    if (input == "exit"){
        break;
    }
   }
   
   return 0; 
}