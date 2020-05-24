#include<bits/stdc++.h>

using namespace std;

#define ll long long int

const ll MOD = 1e9 + 7; 

bool isSmaller(string str1, string str2) 
{ 
    int n1 = str1.length(), n2 = str2.length(); 
  
    if (n1 < n2) 
    return true; 
    if (n2 < n1) 
    return false; 
  
    for (int i=0; i<n1; i++) 
    if (str1[i] < str2[i]) 
        return true; 
    else if (str1[i] > str2[i]) 
        return false; 
  
    return false; 
} 


int mod(string num, int a) 
{ 
    // Initialize result 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
} 

  
ll powerLL(ll x, ll n) 
{ 
    ll result = 1; 
    while (n) { 
        if (n & 1) 
            result = result * x % MOD; 
        n = n / 2; 
        x = x * x % MOD; 
    } 
    return result; 
} 
  
ll powerStrings(string sa, string sb) 
{ 
    // We convert strings to number  
  
    ll a = 0, b = 0; 
  
    // calculating  a % MOD 
    for (int i = 0; i < sa.length(); i++) 
        a = (a * 10 + (sa[i] - '0')) % MOD; 
  
    // calculating  b % (MOD - 1) 
    for (int i = 0; i < sb.length(); i++) 
        b = (b * 10 + (sb[i] - '0')) % (MOD - 1); 
  
    // Now a and b are long long int. We 
    // calculate a^b using modulo exponentiation 
    return powerLL(a, b); 
} 

string findSum(string str1, string str2) 
{ 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
  
    string str = ""; 
    int n1 = str1.length(), n2 = str2.length(); 
  
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0');
        carry = sum/10; 
    } 
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    if (carry) 
        str.push_back(carry+'0');  
    reverse(str.begin(), str.end()); 
  
    return str; 
} 


string longDivision(string number, int divisor) 
{ 
    string ans; 
    int idx = 0; 
    int temp = number[idx] - '0'; 
    while (temp < divisor) 
       temp = temp * 10 + (number[++idx] - '0'); 
      
    while (number.size() > idx) 
    { 
        ans += (temp / divisor) + '0'; 
        temp = (temp % divisor) * 10 + number[++idx] - '0'; 
    } 
    if (ans.length() == 0) 
        return "0"; 
      
    return ans; 
} 
 
string multiply(string num1, string num2) 
{ 
    int len1 = num1.size(); 
    int len2 = num2.size(); 
    if (len1 == 0 || len2 == 0) return "0"; 
    vector<int> result(len1 + len2, 0); 
    int i_n1 = 0;  
    int i_n2 = 0;  
      
    for (int i=len1-1; i>=0; i--) 
    { 
        int carry = 0; 
        int n1 = num1[i] - '0'; 
  
        i_n2 = 0;  
                     
        for (int j=len2-1; j>=0; j--) 
        { 
            int n2 = num2[j] - '0'; 
            int sum = n1*n2 + result[i_n1 + i_n2] + carry; 
  
            carry = sum/10; 
  
            result[i_n1 + i_n2] = sum % 10; 
  
            i_n2++; 
        } 
        if (carry > 0) 
            result[i_n1 + i_n2] += carry; 
        i_n1++; 
    } 
    int i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--; 
    if (i == -1) return "0"; 
  
    string s = ""; 
      
    while (i >= 0) 
        s += std::to_string(result[i--]); 
  
    return s; 
}


int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    string a,b,c;
    long long d;
    string l[] = {"5","8","13","16","21","24","29","32","37","40"};
    cin >> a;	

	c = longDivision(findSum(multiply("3",multiply(a,a)),a),2); 
    while(mod(c,4) != 0)
    {
    	a = findSum(a,"1");
    	c = longDivision(findSum(multiply("3",multiply(a,a)),a),2);	
    }
    cout << a << endl;

}