/*int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            if (i == j) {
				continue;
            } else {
              if (arr[i] == arr[j]) {
              return arr[i];}
            }
          }
                }
}*/
#include <bits/stdc++.h> 



int findDuplicate(vector<int> &arr, int n){

    sort(arr.begin(),arr.end());

    for(int i = 0; i<n; i++)

    {

        if(arr[i]==arr[i+1])

        {

            return arr[i];

            break;

        }

    }

}
