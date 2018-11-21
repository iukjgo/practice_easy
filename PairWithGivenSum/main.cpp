#include <iostream>
#include <vector>

using namespace std;

int main () {
    int  T = 0;
    cin >> T;
    
    while (T--) {
        int N;
        int K;
        cin >> N;
        
        vector<int> array(N);
        
        for (int i=0; i<N; i++) {
            cin >> array[i];
        }
        
        cin >> K;
        int a=0;
        int b=N-1;
        bool found = false;
        while (a < b) {
            int sum = array[a] + array[b];
            if (sum == K) {
                found = true;
                cout << to_string(array[a]) << " " << to_string(array[b]) << " " << K << endl;
                a++;
                b--;
            }
            else if (sum < K)
                a++;
            else
                b--;
        }
        if (!found)
            cout << "-1" << endl;
    }
    
    return 0;
}
