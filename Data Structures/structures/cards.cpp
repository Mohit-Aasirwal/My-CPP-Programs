#include <iostream>
using namespace std;

struct card{
    int no;
    char color;
    char type;   
};
int main(){
    struct card c1= {2,'r','s'};
    cout<<c1.color<<endl<<c1.no<<endl<<c1.type<<endl<<sizeof(c1.color)<<endl<<sizeof(c1.no)<<endl<<sizeof(c1.type)<<endl<<sizeof(c1);

    //the extra size character takes is known as memory padding
    //here char takes 2 bytes of memory instead of one
}