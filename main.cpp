#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
        cout<< "Hi I am the father \n";
        int pid= fork();
        for(int i=0;i<5;i++){
                cout << "I am the process with ID: "<<getpid();
                        sleep(1);
        }
        return 0;

}