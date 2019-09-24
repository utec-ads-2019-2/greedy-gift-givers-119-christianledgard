#include <iostream>
#include <map>

using namespace std;

int main() {

    unsigned int npeople, count =0;
    while(cin >> npeople){
        map <string, int> mapMoney;

        string people[npeople];
        int monyBalance[npeople];
        for (int i = 0; i < npeople; ++i) {
            cin >> people[i];
        }

        for (int j = 0; j < npeople; ++j) {
            mapMoney[people[j]] = 0;
        }

        for (int n = 0; n < npeople; ++n) {
            string nameFrom, nameTo;
            unsigned int money, split;
            cin >> nameFrom;
            cin >> money;
            cin >> split;
            if(split == 0) continue;
            unsigned int temp = money / split;
            mapMoney[nameFrom] -= temp * split;
            for (int l = 0; l < split; ++l) {
                cin >> nameTo;
                mapMoney[nameTo] += temp;
            }

        }

        if (count ++ > 0) cout << endl;


        for (int k = 0; k < npeople; ++k) {
            cout << people[k] << " " << mapMoney[people[k]] << endl;
        }


    }

    return 0;
}