//
// Created by sorre on 02.11.2018.
//

#ifndef DATA_STRUCTURES_ARRAY_H
#define DATA_STRUCTURES_ARRAY_H

class Array {
    int *arrPtr;
public:
    void sort(); //sorts array by value in acending order
    int searchByIndex(int t); // returns element at index = t, -1 otherwise
    int searchByValue(int t); // returns first element with = t, -1 otherwise
    void insert(int t, int n); // inserts value=t at index=n
    void deleteByIndex(int t); // deletes element at index = t, does nothing if t is out of array
    void deleteByValue(int t); // deletes first element with value = t, does nothing if t isn't in array
    void updateByIndex(int t, int n); // updates element at index = t with value = n, does nothing if t is out of array
    void updateByValue(int t, int n); // updates first element with value = t with value = n, does nothing if t isn't in array
    void traverse(); // print all array elements
};

#endif //DATA_STRUCTURES_ARRAY_H
