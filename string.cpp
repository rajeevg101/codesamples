// strings class in STL
#include <bits/stdc++.h>
// #include<cstring>
using namespace std;

void i_o_f()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    //input.txt = for input
    freopen("input.txt", "r", stdin);
    //output.txt = for output
    freopen("output.txt", "w", stdout);
#endif
}

char* mystrtok(char* str, char delimit)
{
    static char* input = NULL;

    if(str!=NULL){
        // we are making the first call
        input = str;
    }
    // check the base case
    // after the final token has been extracted
    if(input == NULL){
        return NULL;
    }
    
    // start extracting tokens frm the str
    char * output = new char[strlen(input) + 1];
    int i = 0;
    for( ; input[i] != '\0'; i++){
        if(input[i] != delimit){
            output[i] = input[i];
        }
        else{
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }

    }
    //corner case
    output[i] = '\0';
    input = NULL;
    return output;

}

// new stl functions added 


int main()
{
    i_o_f();

    char s[100] = "today, is a rainy day";
    cout << ptr << endl;

    while(ptr!=NULL){
        ptr = mystrtok(NULL,' ');
        cout << ptr << endl;
    }

    return 0;
}
