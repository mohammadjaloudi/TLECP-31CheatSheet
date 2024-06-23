#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a; cin >> a;
    a += '{';
    sort(a.begin(),a.end());
    int cnt = 1;
    
    for(char s : a){
        if(s !='a' && cnt == 1) {
        cout<<'a';
        break;
        }
        if(s !='b' && cnt == 2){
        cout<<'b';
        break;
        }
         if(s !='c' && cnt == 3) {
        cout<<'c';
        break;
         }
         if(s !='d' && cnt == 4){
         cout<<'d';
        break;
         }
         if(s !='e' && cnt == 5) {
        cout<<'e';
        break;
         }
         if(s !='f' && cnt == 6) {
         cout<<'f';
        break;
         }
         if(s !='g' && cnt == 7) {
         cout<<'g';
        break;
         }
         if(s !='h' && cnt == 8) {
         cout<<'h';
        break;
         }
         if(s !='i' && cnt == 9){
         cout<<'i';
        break;
         }
         if(s !='j' && cnt == 10){
         cout<<'j';
        break;
         }
         if(s !='k' && cnt == 11) {
         cout<<'k';
        break;
         }
         if(s !='l' && cnt == 12){
          cout<<'l';
        break;
         }
         if(s !='m' && cnt == 13) {
         cout<<'m';
        break;
         }
         if(s !='n' && cnt == 14) {
         cout<<'n';
        break;
         }
         if(s !='o' && cnt == 15) {
         cout<<'o';
        break;
         }
         if(s !='p' && cnt == 16) {
         cout<<'p';
        break;
         }
         if(s !='q' && cnt == 17) {
         cout<<'q';
        break;
         }
         if(s !='r' && cnt == 18) {
         cout<<'r';
        break;
         }
         if(s !='s' && cnt == 19){
         cout<<'s';
        break;
         }
         if(s !='t' && cnt == 20) {
         cout<<'t';
         break;
         }
         if(s !='u' && cnt == 21) {
         cout<<'u';
        break;
         }
         if(s !='v' && cnt == 22){
          cout<<'v';
        break;
         }
         if(s !='w' && cnt == 23) {
         cout<<'w';
        break;
         }
         if(s !='x' && cnt == 24) {
         cout<<'x';
        break;
         }
         if(s !='y' && cnt == 25) {
         cout<<'y';
        break;
         }
        if(s != 'z' && cnt == 26) {
        cout <<'z';
        break;
        }
        cnt++;
    

    }


    return 0;
}

