#include<bits/stdc++.h>
using namespace std;
int keypad(int num, string s[]){
    string s1;
    if(num == 0){
        s[0] = "";
        return 1;
    }
    
        int n = num%10;
        num = num/10;
        int smallout = keypad(num, s);
        switch(n){
            case 2: s1 = "abc";
                break;
            case 3: s1 = "def";
                break;
            case 4: s1 = "ghi";
                break;
            case 5: s1 = "jkl";
                break;
            case 6: s1 = "mno";
                break;
            case 7: s1 = "pqrs";
                break;
            case 8: s1 = "tuv";
                break;
            case 9: s1 = "wxyz";
                break;
               
    }
    int main_size=smallout * (s1.size());
    string ans[main_size];
    int k=0;
    for(int i=0; i<smallout; i++){
        for(int j=0; j<s1.size(); j++){
            ans[k] = s[i] + s1[j];
            k++;
        }
        
    }
    for(int i=0; i<main_size; i++){
        s[i] = ans[i];
    }
    return s1.size()*smallout;
}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}