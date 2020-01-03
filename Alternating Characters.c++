#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    bool aFound = false;
    bool bFound = false;
    int deletions = 0;
    for(int i = 0 ; i < s.length(); i++){

        if(aFound && s[i]=='A'){
            deletions++;
        }
        if(bFound && s[i]=='B'){
            deletions++;
        }
        if(s[i]=='A' && aFound==false){
            aFound = true;
            bFound = false;
        }
        if(s[i]=='B' && bFound==false){
            aFound = false;
            bFound = true;
        }
    }

    return deletions;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
