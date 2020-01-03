#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    vector<int> bagOfLettersA(27);
    vector<int> bagOfLettersB(27);
    
    for(int i = 0 ; i < a.length() ; i++){
        bagOfLettersA[a[i]-97] +=1;
    }

    for(int i = 0 ; i < b.length() ; i++){
        bagOfLettersB[b[i]-97] +=1;
    }
    int deletes = 0;
    for(int i = 0 ; i < bagOfLettersA.size() ; i++){
        deletes+=abs(bagOfLettersA[i]-bagOfLettersB[i]);
    }

    return deletes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
