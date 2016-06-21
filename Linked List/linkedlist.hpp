//
//  linkedlist.hpp
//  Linked List
//
//  Created by Davey Jay Belliss on 6/20/16.
//  Copyright © 2016 Davey Jay Belliss. All rights reserved.
//

#ifndef linkedlist_hpp
#define linkedlist_hpp
#include <iostream>
#include "node.hpp"
#include <stdio.h>
using namespace std;
class list
{
    node* head;
    node* tail;
    
public:
    list();
    void addNode(int data);
    void print();
};


#endif /* linkedlist_hpp */
