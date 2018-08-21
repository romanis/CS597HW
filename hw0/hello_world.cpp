/* hello_world.cpp
 *
 * Roman Istomin
 * rji5040@psu.edu
 *
 * Written for PSU CSE 597-002, Fall 2018
 * August 2018
 */

#include <iostream>
#include <string>

using namespace std;
int main()
{
    printf("What is your name?\n");
    std::string name;    
    cin>>name;
    cout<< "hello, " << name<<endl;
    return 0;
}
