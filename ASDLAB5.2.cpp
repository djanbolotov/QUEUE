//#include <iostream>
//using namespace std;
//
//struct Queue {
//	int value;
//	Queue* next;
//};
//
//void print(Queue*, int*);
//void initialize(Queue**, Queue**, int*, int);
//Queue* add(Queue*, Queue*, int*, int);
//Queue* concatinate(Queue*, Queue*, Queue*, Queue*, int*, int);
//Queue* deleteElement(Queue*, int*);
//void clearQueue(Queue*, int*);
//void Size(int*);
//
//void printMenu();
//void printSimpleMenu();
//int getValue();
//int getVariant(int);
//void queueIsEmpty();
//void alreadyInitialized();
//
//int main()
//{
//    Queue* p1beg = NULL;
//    Queue* p1end = NULL;
//    Queue** p1Beg = &p1beg;
//    Queue** p1End = &p1end;
//    Queue* pbeg = NULL;
//    Queue* pend = NULL;
//    Queue** pBeg = &pbeg;
//    Queue** pEnd = &pend;
//    int count = 0, count2 = 0, variant = 0, value;
//    int* Count = &count;
//    int* Count2 = &count2;
//
//    do {
//        system("CLS");
//        cout << "First stack!" << endl;
//        printSimpleMenu();
//        variant = getVariant(4);
//        switch (variant)
//        {
//        case 1:
//            value = getValue();
//            initialize(p1Beg, p1End, Count2, value);
//            break;
//        case 2:
//            value = getValue();
//            p1end = add(p1end, p1beg, Count2, value);
//            break;
//        case 3:
//            p1beg = deleteElement(p1beg, Count2);
//            if (count2 == 0)
//                p1end = p1beg;
//            break;
//        }
//        print(p1beg, Count2);
//        system("pause");
//    } while (variant < 4);
//
//
//    do {
//        system("CLS");
//        cout << "Second stack!" << endl;
//        printSimpleMenu();
//        variant = getVariant(4);
//        switch (variant)
//        {
//        case 1:
//            value = getValue();
//            initialize(pBeg, pEnd, Count, value);
//            break;
//        case 2:
//            value = getValue();
//            pend = add(pend, pbeg, Count, value);
//            break;
//        case 3:
//            pbeg = deleteElement(pbeg, Count);
//            if (count == 0)
//                pend = pbeg;
//            break;
//        }
//        print(pbeg, Count);
//        system("pause");
//    } while (variant < 4);
//
//    cout << "Queue 2: " << p1beg << ", " << p1end << endl;
//    cout << "Queue 1: " << pbeg << ", " << pend << endl;
//
//    pend = concatinate(pbeg, pend, p1beg, p1end, Count, count2);
//    cout << "Concatinated: " << pbeg << ", " << pend << endl;
//    system("pause");
//    do {
//        system("CLS");
//        printMenu();
//        variant = getVariant(7);
//        switch (variant)
//        {
//        case 1:
//            value = getValue();
//            initialize(pBeg, pEnd, Count, value);
//            break;
//        case 2:
//            value = getValue();
//            pend = add(pend, pbeg, Count, value);
//            break;
//        case 3:
//            pbeg = deleteElement(pbeg, Count);
//            if (count == 0)
//                pend = pbeg;
//            break;
//        case 4:
//            clearQueue(pbeg, Count);
//            pbeg = pend;
//            break;
//        case 5:
//            print(pbeg, Count);
//            break;
//        case 6:
//            Size(Count);
//            break;
//        }
//        if (variant != 5)
//        {
//            print(pbeg, Count);
//        }
//        system("pause");
//    } while (variant < 7);
//}
//
//void printMenu()
//{
//    cout << "(1: INITIALIZE, 2: ADD, 3: DELETE, 4: CLEAR, 5: OUTPUT, 6: SIZE, 7: EXIT)" << endl;
//    cout << "Select any value you want:";
//}
//
//void printSimpleMenu()
//{
//    cout << "(1: INITIALIZE, 2: ADD, 3: DELETE, 4: EXIT)" << endl;
//    cout << "Select any value you want:";
//}
//
//int getValue()
//{
//    int m;
//    cout << "Enter value: ";
//    cin >> m;
//    return m;
//}
//int getVariant(int s)
//{
//    int k;
//    cin >> k;
//    while (k < 1 || k > s)
//    {
//        cout << "Incorrect input. Try again: ";
//        cin >> k;
//    }
//    return k;
//}
//void queueIsEmpty()
//{
//    cout << "Queue is empty!" << endl;
//}
//void alreadyInitialized()
//{
//    cout << "Queue is already initialized!" << endl;
//}
//
//void print(Queue* pbeg, int* Count)
//{
//    if (*Count > 0)
//    {
//        Queue* pv = pbeg;
//        while (pv != NULL)
//        {
//            cout << "Q[v:" << pv->value << "], ";
//            pv = pv->next;
//        }
//        cout << endl;
//        delete pv;
//    }
//    else
//    {
//        queueIsEmpty();
//    }
//}
//
//void initialize(Queue** pbeg, Queue** pend, int* Count,  int value)
//{
//    if (*Count == 0)
//    {
//        Queue* pv = new Queue;
//        pv->value = value;
//        pv->next = NULL;
//        *pbeg = pv;
//        *pend = *pbeg;
//        *Count += 1;
//    }
//    else
//    {
//        alreadyInitialized();
//    }
//}
//
//Queue* add(Queue* pend, Queue* pbeg, int* Count, int value)
//{
//    if (*Count > 0)
//    {
//        Queue* pv = new Queue;
//        pv->value = value;
//        pv->next = NULL;
//        pend->next = pv;
//        *Count += 1;
//        return pv;
//    }
//    return pbeg;
//}
//
//Queue* deleteElement(Queue* pbeg, int* Count)
//{
//    if (*Count)
//    {
//        Queue* pv = new Queue;
//        int value = pbeg->value;
//        if (*Count > 1)
//        {
//            pv = pbeg->next;
//            delete pbeg;
//            pbeg = pv;
//            *Count -= 1;
//        }
//        else if (*Count == 1)
//        {
//            *Count = 0;
//            delete pbeg;
//            pbeg = pv;
//        }
//        cout << "Deleted element is " << value << endl;
//    }
//    return pbeg;
//}
//
//void clearQueue(Queue* pbeg, int* Count)
//{
//    if (*Count > 0)
//    {
//        Queue* pv = new Queue;
//        pv = pbeg;
//        while (pv != NULL)
//        {
//            Queue* temp = pv->next;
//            *pv = {};
//            pv = temp;
//        }
//        *Count = 1;
//    }
//}
//
//void Size(int* Count)
//{
//    cout << "Size of queue is: " << *Count << endl;
//}
//
//Queue* concatinate(Queue* pbeg, Queue* pend, Queue* p2beg, Queue* p2end, int* Count, int Count2)
//{
//    if (*Count && Count2)
//    {
//        pend->next = p2beg;
//        *Count += Count2;
//        return p2end;
//    }
//    return pbeg;
//}