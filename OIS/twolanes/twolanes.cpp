// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // uncomment the two following lines if you want to read/write from files
     ifstream cin("input.txt");
     ofstream cout("output.txt");

	// Intersections
    int N;
    cin >> N;

	// Left lane light G=Green, R=Red
    string L;
    cin >> L;

	// Right lane light G=Green, R=Red
    string R;
    cin >> R;

	// Distance he can travel before 2 Red Lights
    int ans = 0;

    // INSERT YOUR CODE HERE
	for(int i=0; i<N; i++){
		if(L[i] == 'R' && R[i] == 'R'){
			break;
		}else{
			ans++;
		}
	}

    cout << ans << endl;

    return 0;
}
