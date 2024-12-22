#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned short int t, i;
    string line;
    char aux;

    cin >> t;
    while(t--) {
        cin >> line;
        size_t size = line.length();
        for(i = 0; i < size; i++) {
            if(line[i] == 'p') {
                line[i] = 'q';
            } else if (line[i] == 'q') {
                line[i] = 'p';
            }
        }
        for(i = 0; i < size/2; i++) {
            aux = line[i];
            line[i] = line[size-i-1];
            line[size-i-1] = aux;
        }
        cout << line << '\n';
    }
    return 0;
}