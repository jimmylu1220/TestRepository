#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <unordered_set>
#include <map>
#include <algorithm>

using namespace std;


string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry {0};
        string result  = "";

        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0 && a[i] == '1')
                    ++carry;
            if (j >= 0 && b[j] == '1')
                    ++carry;

            result.insert(result.begin(), carry % 2 == 1 ? '1' : '0');
            carry /= 2;
            if(i>=0)
                i--;
            if(j>=0)
                j--;
        }
        return result;
    }

int main() {
    string a = "1010",b = "1011";
    cout<<addBinary(a,b);
    cout<<"hi!";


	return 0;
}
