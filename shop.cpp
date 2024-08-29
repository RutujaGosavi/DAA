/*Implement a problem of activity selection problem with K persons.
Statement: Given two arrays S[] and E[] of size N denoting starting and closing time of the shops and an integer value K denoting the number of people, the task is to find out the maximurn number of shops they can visit in total if they visit each shop optimally based on the followi the following conditions:
A shop can be visited by only one person
A person cannot visit another shop if its timing collide with it
*/


#include<iostream>
#include<algorithm>

using namespace std;

int no_of_shops(int S[], int E[], int k, int n) {
    int cnt = 0;
    int arr[k] = {0};  // Array to keep track of the end time for each shopkeeper

    for(int i = 0; i < n; i++) {
        int start = S[i];
        int end = E[i];

        // Find a shopkeeper that can take this shop (i.e., one that is free before the shop starts)
        for(int j = 0; j < k; j++) {
            if (arr[j] <= start) { // Shopkeeper j can visit this shop
                arr[j] = end;
                cnt++;
                break;
            }
        }
    }

    return cnt;
}

int main() {
    int S[] = {1, 2, 3};
    int E[] = {3, 4, 5};
    int k = 2;

    cout << "Max shops that can be visited: " << no_of_shops(S, E, k, 3) << endl;
    return 0;
}
