#include<iostream>
using namespace std;

namespace Variable_Scope{
    string _name_space_variable="Namespace Variable";
}
string _globle_variable="Global Variable";

void localFunction(){
    string _local_variable="Local Variable";
    string _block_variable="Block Variable";
    cout<<_local_variable<<"\n"
        <<_globle_variable<<"\n"
        <<Variable_Scope::_name_space_variable<<"\n";
    {
        cout<<_block_variable<<"/n";
    }

}

int main(){
    localFunction();    
    return 0;
}