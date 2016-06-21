//
//  node.cpp
//  Linked List
//
//  Created by Davey Jay Belliss on 6/20/16.
//  Copyright © 2016 Davey Jay Belliss. All rights reserved.
//

#include "node.hpp"
#include <iostream>
using namespace std;

node::node(int dat)
{
    data = dat;
}
    
bool node::operator <(node rhs)
{
    if (data < rhs.data)
        return true;
    else
        return false;
    
}
    
bool node::operator >(node rhs)
{
    if (data > rhs.data)
        return true;
    else
        return false;
        
}
    
void node::print()
{
    cout << data << endl;
}
    
    
