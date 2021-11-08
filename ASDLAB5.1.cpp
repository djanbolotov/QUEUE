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
//Queue* deleteElement(Queue*, Queue*, Queue**, int*);
//void clearQueue(Queue*, int*);
//void Size(int*);
//
//void printMenu();
//int getValue();
//int getVariant(int);
//void queueIsEmpty();
//void alreadyInitialized();
//
//int main()
//{
//    Queue* pbeg = NULL;
//    Queue* pend = NULL;
//    Queue** pBeg = &pbeg;
//    Queue** pEnd = &pend;
//    int count = 0, variant = 0, value;
//    int* Count = &count;
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
//            cout << "Before Queue beg: " << pbeg << ". pbeg.next: " << pbeg->next << endl;
//            pbeg = deleteElement(pbeg, pend, pEnd, Count);
//            cout << "After Queue beg: " << pbeg << ". pend: " << pend << endl;
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
//Queue* deleteElement(Queue* pbeg, Queue* pend, Queue** pEnd, int* Count)
//{
//    if (*Count > 1)
//    {
//        Queue* pv = new Queue;
//        pv = pbeg;
//        pbeg = pbeg->next;
//        pv->next = NULL;
//        pend->next = pv;
//        *pEnd = pv;
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