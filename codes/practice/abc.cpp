#include<stdio.h>

//please return proper index which matched in arr1
int findIndexInArr1(int arr[5], int indexToStartSearch, int toBeMatchEle) {
    while(indexToStartSearch < 5) {
        if(toBeMatchEle = arr[indexToStartSearch]) {
            return indexToStartSearch;
        }
    }
    return 5;
}

bool isPatternFullyMatched(int arr1[5], int arr2[5], int indexMatchedPatternMayMatch) {
    //core logic
    int ptr2 = 0;
    while(ptr2 < 5) {
        if(indexMatchedPatternMayMatch == 5) {
            indexMatchedPatternMayMatch = (indexMatchedPatternMayMatch) % 5;
        }
        if(arr2[ptr2] != arr1[indexMatchedPatternMayMatch]) {
            return false;
        }
        ptr2++;
        indexMatchedPatternMayMatch++;
    }

    return 0;
}

int main() {
     int arr1[5] = {42, 34, 56, 67, 56};
     int arr2[5] = {56, 42 ,34, 56, 67};

     int ptr1 = 0, ptr2 = 0;
    
    // find a match of ptr2 value inside arr1
    int curr = -1;
    while(ptr2 < 5) {
        int indexMatchedPatternMayMatch = findIndexInArr1(arr1, curr+1, arr2[ptr2]);
        bool isMatched = isPatternFullyMatched(arr1, arr2, indexMatchedPatternMayMatch);
        if(isMatched) {
            return true;
        } else {
            curr = indexMatchedPatternMayMatch;
        }
    }
    return false;
}