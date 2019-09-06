#include<iostream>

struct ListNode
{
    int value;
    ListNode *next = nullptr;
};

/*
This function count how mutch element are in the list and it returns it
*/
int lengthOfList( ListNode *firstNode  )
{
    //TODO: Implement
    return 0;
}

/*
    Delete the n-th element from list
    The function returns false, if fail, or true otherwise
*/
bool deleteElementFromList( ListNode *firstNode, int n )
{
    //TODO: Implement
    return true;
}

void deleteList(ListNode *firstNode)
{
    //TODO: implement
}

bool expectedEqual(int expectation, int current )
{
    if(expectation == current)
    {
        std::cout << "OK: " << expectation << " == " << current << std::endl;
        return true;
    }
    else
    {
        std::cout << "FAILURE: expectation is " << expectation << " and NOT equal current  " << current << std::endl;
        return false;
    }
} // end of expectedEqual

bool expectedTrue(int expectation )
{
    if(expectation)
    {
        std::cout << "OK: The exeptation is TRUE and the current is TRUE" << std::endl;
        return true;
    }
    else
    {
        std::cout << "FAILURE: The exeptation is TRUE and the current is FALSE" << std::endl;
        return false;
    }
} // end of expectedTrue

bool expectedFalse(int expectation )
{
    if(!expectation)
    {
        std::cout << "OK: The exeptation is FALSE and the current is FALSE" << std::endl;
        return true;
    }
    else
    {
        std::cout << "FAILURE: The exeptation is FALSE and the current is TRUE" << std::endl;
        return false;
    }
} // end of expectedTrue

int main()
{
    ListNode *testList1 = new ListNode();
    testList1->next = new ListNode();
    testList1->next->next = new ListNode();
    testList1->next->next->next = new ListNode();

    ListNode *testList2 = nullptr;

    expectedEqual(4, lengthOfList( testList1 ) );
    expectedEqual(0, lengthOfList( testList2 ) );

    expectedTrue( deleteElementFromList(testList1, 2) );
    expectedFalse( deleteElementFromList(testList2, 2) );
    // TODO: check more the deleteElementFromList function

    deleteList(testList1);
    expectedEqual(0, lengthOfList(testList1));
    deleteList(testList2);
    expectedEqual(0, lengthOfList(testList2));
    // TODO: check more the deleteList function
}