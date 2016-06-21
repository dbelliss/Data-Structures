//
//  node.hpp
//  Linked List
//
//  Created by Davey Jay Belliss on 6/20/16.
//  Copyright © 2016 Davey Jay Belliss. All rights reserved.
//

#ifndef node_hpp
#define node_hpp

#include <stdio.h>

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
class node
{
    friend class list;
    node *next;
    int data;
    
public:
    
    node(int dat);
    bool operator <(node rhs);
    bool operator >(node rhs);
    void print();

    
};
#endif /* node_hpp */
