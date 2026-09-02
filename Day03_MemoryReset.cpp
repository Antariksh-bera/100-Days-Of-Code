#include <bits/stdc++.h>
using namespace std;

void resetBallotBox(int &votes) {
    votes = 0; // Hard-resetting the memory value to 0
    cout << "System: Ballot box memory wiped inside function." << endl;
}

int main() {
    int totalVotes = 542;
    
    cout << "Before Reset: Total votes = " << totalVotes << endl;
    resetBallotBox(totalVotes);
    cout << "After Reset: Total votes = " << totalVotes << endl;
    
    return 0;
}
