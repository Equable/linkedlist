#include <cstdlib>
 
#include "list.h"

using namespace std;

int main(int argc, char** argv){

    list test;

    test.AddNode(3);
    test.AddNode(5);
    test.AddNode(7);
    test.printlist();
}
