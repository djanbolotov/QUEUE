//#include <iostream>
//using namespace std;
//
//struct Queue {
//	int value;
//};
//
//void print(Queue*, int);
//void initialize(Queue*, int*, int);
//void add(Queue*, int*, int, int);
//void deleteElement(Queue*, int*);
//void clearQueue(Queue*, int*);
//void Size(int);
//
//void printMenu();
//void printMenu();
//int getValue();
//int getVariant(int);
//void queueIsEmpty();
//
//int main()
//{
//    int const maxSize = 100;
//    Queue qarray[maxSize];
//    Queue* Qarray = &qarray[maxSize];
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
//            initialize(Qarray, Count, value);
//            break;
//        case 2:
//            value = getValue();
//            add(Qarray, Count, maxSize, value);
//            break;
//        case 3:
//            deleteElement(Qarray, Count);
//            break;
//        case 4:
//            clearQueue(Qarray, Count);
//            break;
//        case 5:
//            print(Qarray, count);
//            break;
//        case 6:
//            Size(count);
//            break;
//        }
//        if (variant != 5)
//        {
//            print(Qarray, count);
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
//void print(Queue* qArray, int count)
//{
//    if (count)
//    {
//        for (int i = 0; i < count; i++)
//        {
//            cout << "Q[" << qArray[i].value << "], ";
//        }
//        cout << endl;
//    }
//    else
//    {
//        queueIsEmpty();
//    }
//}
//
//void initialize(Queue* qArray, int* count, int value)
//{
//    if (*count == 0)
//    {
//        qArray[0].value = value;
//        *count += 1;
//    }
//    else
//    {
//        alreadyInitialized();
//    }
//}
//
//void add(Queue* qArray, int* count, int maxSize, int value)
//{
//    if (*count < maxSize)
//    {
//        qArray[*count].value = value;
//        *count += 1;
//    }
//}
//
//void deleteElement(Queue* qArray, int* count)
//{
//    for (int i = 0; i < *count - 1; i++)
//    {
//        qArray[i].value = qArray[i + 1].value;
//    }
//    *count -= 1;
//}
//
//void Size(int count)
//{
//    cout << "Size of queue is: " << count << endl;
//}
//
//void clearQueue(Queue* qArray, int* count)
//{
//    for (int i = *count - 1; i > -1; i--)
//    {
//        qArray[i].value = 0;
//    }
//    *count = 1;
//}