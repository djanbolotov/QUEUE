//#include <iostream>
//using namespace std;
//
//struct Queue {
//	int value;
//	int key;
//	Queue* next;
//};
//
//bool isUnique(Queue*, int*, int);
//void print(Queue*, int*);
//void initialize(Queue**, Queue**, int*, int, int);
//Queue* add(Queue*, Queue*, int*, int, int);
//Queue* deleteElement(Queue*, int*);
//void clearQueue(Queue*, int*);
//Queue* destroyQueue(Queue*, int*);
//void Size(int*);
//void searchValue(Queue*, int*, int);
//void searchKey(Queue*, int*, int);
//
//void printMenu();
//void printSearchMenu();
//int getValue();
//int getKey();
//int getVariant(int);
//void queueIsEmpty();
//void alreadyInitialized();
//void deletedElement(int);
//
//int main()
//{
//    Queue* pbeg = NULL;
//    Queue* pend = NULL;
//    Queue** pBeg = &pbeg;
//    Queue** pEnd = &pend;
//    int count = 0, v = 0, v2 = 0, value, key;
//    int* Count = &count;
//    bool unique = false;
//    do {
//        system("CLS");
//        printMenu();
//        v = getVariant(9);
//        switch (v)
//        {
//        case 1:
//            value = getValue();
//            key = getKey();
//            initialize(pBeg, pEnd, Count, value, key);
//            break;
//        case 2:
//            value = getValue();
//            while (!unique)
//            {
//                key = getKey();
//                unique = isUnique(pbeg, Count, key);
//            }
//            pend = add(pend, pbeg, Count, value, key);
//            unique = false;
//            break;
//        case 3:
//            pbeg = deleteElement(pbeg, Count);
//            if (count == 0)
//                pend = pbeg;
//            break;
//        case 4:
//            printSearchMenu();
//            v2 = getVariant(2);
//            switch (v2)
//            {
//            case 1:
//                value = getValue();
//                searchValue(pbeg, Count, value);
//                break;
//            case 2:
//                key = getKey();
//                searchKey(pbeg, Count, key);
//                break;
//            }
//            break;
//        case 5:
//            clearQueue(pbeg, Count);
//            pbeg = pend;
//            break;
//        case 6:
//            pbeg = destroyQueue(pbeg, Count);
//            pend = pbeg;
//            break;
//        case 7:
//            print(pbeg, Count);
//            break;
//        case 8:
//            Size(Count);
//            break;
//        }
//        if (v != 7)
//        {
//            print(pbeg, Count);
//        }
//        system("pause");
//    } while (v < 9);
//}
//
//bool isUnique(Queue* pbeg, int* Count, int key)
//{
//    if (*Count)
//    {
//        Queue* pv = pbeg;
//        while (pv != NULL)
//        {
//            if (pv->key == key)
//            {
//                cout << "Key that you entered is already exsist!!!" << endl;
//                return false;
//            }
//            pv = pv->next;
//        }
//        return true;
//    }
//}
//
//void printMenu()
//{
//    cout << "(1: INITIALIZE, 2: ADD, 3: DELETE, 4: SEARCH, 5: CLEAR, 6: DESTROY, 7: OUTPUT, 8: SIZE, 9: EXIT)" << endl;
//    cout << "Select any value you want:";
//}
//void printSearchMenu()
//{
//    cout << "(1: SEARCH VALUE, 2: SEARCH KEY)" << endl;
//    cout << "Select any value you want:";
//}
//int getValue()
//{
//    int m;
//    cout << "Enter value: ";
//    cin >> m;
//    return m;
//}
//int getKey()
//{
//    int p;
//    cout << "Enter key: ";
//    cin >> p;
//    return p;
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
//void deletedElement(int value)
//{
//    cout << "Deleted element is " << value << endl;
//}
//
//void print(Queue* pbeg, int* Count)
//{
//    if (*Count)
//    {
//        Queue* pv = pbeg;
//        while (pv != NULL)
//        {
//            cout << "Q[v:" << pv->value << ", k:" << pv->key << "], ";
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
//void initialize(Queue** pbeg, Queue** pend, int* Count,  int value, int key)
//{
//    if (*Count == 0)
//    {
//        Queue* pv = new Queue;
//        pv->value = value;
//        pv->key = key;
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
//Queue* add(Queue* pend, Queue* pbeg, int* Count, int value, int key)
//{
//    if (*Count)
//    {
//        Queue* pv = new Queue;
//        pv->value = value;
//        pv->key = key;
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
//        deletedElement(value);
//    }
//    return pbeg;
//}
//
//void clearQueue(Queue* pbeg, int* Count)
//{
//    if (*Count)
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
//Queue* destroyQueue(Queue* pbeg, int* Count)
//{
//    if (*Count)
//    {
//        Queue* pv = new Queue;
//        pv = pbeg;
//        while (pv != NULL)
//        {
//            Queue* temp = pv->next;
//            delete pv;
//            pv = temp;
//        }
//        *Count = 0;
//        cout << "Queue is destroyed!" << endl;
//        return pv;
//   }
//}
//
//void Size(int* Count)
//{
//    cout << "Size of queue is: " << *Count << endl;
//}
//
//void searchValue(Queue* pbeg, int* Count, int value)
//{
//    if (*Count)
//    {
//        Queue* pv = pbeg;
//        bool found = false;
//        while (pv != NULL)
//        {
//            if (pv->value == value)
//            {
//                found = true;
//                cout << "The value that you entered is found: Q[v:" << pv->value << ", k:" << pv->key << "]" << endl;
//                break;
//            }
//            pv = pv->next;
//        }
//        if (!found)
//        {
//            cout << "Value that you entered is not found!!!" << endl;
//        }
//    }
//}
//
//void searchKey(Queue* pbeg, int* Count, int key)
//{
//    if (*Count)
//    {
//        Queue* pv = pbeg;
//        bool found = false;
//        while (pv != NULL)
//        {
//            if (pv->key == key)
//            {
//                found = true;
//                cout << "The key that you entered is found: Q[v:" << pv->value << ", k:" << pv->key << "]" << endl;
//                break;
//            }
//            pv = pv->next;
//        }
//        if (!found)
//        {
//            cout << "Key that you entered is not found!!!" << endl;
//        }
//    }
//}