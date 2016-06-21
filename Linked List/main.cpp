//
//  main.cpp
//  Linked List
//
//  Created by Davey Jay Belliss on 6/20/16.
//  Copyright © 2016 Davey Jay Belliss. All rights reserved.
//

#include <iostream>
#include "linkedlist.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    list myList = *new list;
    for (int i = 3; i < 10; i++)
        myList.addNode(i);
    
    myList.print();
    return 0;
}
