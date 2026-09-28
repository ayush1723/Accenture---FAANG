void solve(){
int a,b,c;
cin >> a >> b >> c;
if(a < b){
swap(a,b);
}
if(a < c) swap (a,c);
int cnt = 0;
while(a){
if(b > c){
if(b == 0) break;
b--;
a--;
cnt++;
}
else{
if(c == 0) break;
c--;
a--;
cnt++;
}
}
while(b && c){
c--;
b--;
cnt++;
}
if(a > 0){
if(a % 2 == 0){
cout << cnt<<ed;
return;
}
cout << -1 <<ed;
return;
}
if( b % 2 == 0 && c % 2 ==0){
cout << cnt <<ed;
}
else cout << -1<<ed;
}