// 字符串反转
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string input;
//	getline(cin,input);
//	string reversed;
//	for(int i=input.size()-1;i>=0;i--){
//		reversed+=input[i];
//	}
//	cout<<"反转字符串为： "<<reversed<<endl;
//	return 0;
//}
//双指针
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//	string input;
//	getline(cin,input);
//	int l=0,r=input.size()-1;
//	while(l<r){
//		swap(input[l],input[r]);
//		l++;
//		r--;
//	}
//	cout<<"反转字符串为： "<<input<<endl;
//	return 0;
//}


//三国游戏
//#include <iostream>
//#include <string>
//using namespace std;
//const int N = 100010;
//int n;
//int a[N],b[N],c[N],w[N];
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i ++ ) scanf("%d", &a[i]);
//	for (int i = 0; i < n; i ++ ) scanf("%d", &b[i]);
//	for (int i = 0; i < n; i ++ ) scanf("%d", &c[i]);
//
//	return 0;
//}

//填充，贪心
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//	int num = 0;
//	for (std::string::size_type i = 0; i < s.size() - 1; i++) {
//		if (s[i] == s[i + 1] || s[i] == '?'||s[i+1]=='?') {
//			num++;
//			i++;
//		}
//	}
//	cout << num;
//	return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n, q;
//	cin >> n >> q;
//
//	vector<int> arr(n);
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < q; ++i) {
//		int k;
//		cin >> k;
//		int start = -1, end = -1;
//		for (int j = 0; j < n; ++j) {
//			if (arr[j] == k) {
//				if (start == -1) {
//					start = j;
//				}
//				end = j;
//			}
//		}
//		if (start == -1) {
//			cout << "-1 -1" << endl;
//		} else {
//			cout << start << " " << end << endl;
//		}
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//#include<cstring>
//
//using namespace std;
//
//const int N = 100010;  //根据题目中n的范围来确定数组应该开多大, 开的范围必须比n要大一点
//
//int n, q; //n个数, q次询问
//int arr[N];  //array
//
////第一个二分查找找的是: 被询问数的第一次出现的位置(下标)
//int binary_search1(int arr[], int len, int x) {
//	int l = -1, r = len;
//	while(l + 1 < r)   //   l + 1 != r
//	{
//		int mid = (l + r) / 2;
//		if(arr[mid] < x) {
//			l = mid;
//		}
//		else r = mid;
//	}
//	if(arr[r] == x) return r;
//	else return -1;  //找不到就返回-1
//}
//
////第二个二分查找找的是: 被询问数的最后一次出现的位置(下标)
//int binary_search2(int arr[], int len, int x) {
//	int l = -1, r = len;
//	while(l + 1 < r) {
//		int mid = (l + r) / 2;
//		 {
//			l = mid;
//		}
//		else r = mid;
//	}
//	if(arr[l] == x) return l;
//	else return -1;  //找不到就返回-1
//}
//
//int main() {
//	scanf("%d %d", &n, &q);
//	for(int i = 0; i < n; i ++) {
//		scanf("%d", &arr[i]);
//	}
//
//	while(q --) {
//		int x;
//		scanf("%d", &x);
//		int res1 = binary_search1(arr, n, x);
//		if(res1 == -1) {
//			printf("-1 -1\n");
//			continue;
//		}
//		int res2 = binary_search2(arr, n, x);
//		printf("%d %d\n", res1, res2);
//	}
//	return 0;
//}


//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	int l=1189,r=594;
//	scanf("%d", &n);
//	for (int i = 1; i <=n; i ++ )
//	{
//		int l=r;
//		r=l/2;
//	}
//	printf("")
//}

//#include <iostream>
//using namespace std;
//int main() {
//for(int i=1;i<=6;i++){
//	for(int j=1;j<=12;j++){
//		if(i==1||i==2){
//			if(j==6||j==7){
//				cout<<"*";
//			} else cout<<" ";
//		}
//
//	}
//	cout<<endl;
//}
//}


#include <iostream>
#include <stack>
#include <string>

using namespace std;

//双指针
// class Solution {
// public:
//     string reverseWords(string s) {

// };



// class Solution {
// public:
// 	string reverseWords(string s) {
// 		stack<string> wordStack;
// 		string word = "";
// 		for(auto c:s.size())//在此for循环中完成s的单次逆序进栈，例如s为"all in"进栈后在栈内为"lla ni"这样出栈即可得到反转字符串中 单词
// 		{
// 			if (c == ' ') {
// 				// 遇到空格，将当前单词存入栈中
// 				if (!word.empty()) {
// 					wordStack.push(word);
// 					word = ""; // 重置单词
// 				}else{
// 					word+=c;
// 				}
// 			}
			
// 			//出栈，得出结果
// 			string result;
// 			while(!wordStack.empty()){
// 				result+=wordStack.top()+" ";
// 				wordStack.pop();
// 			}
// 			//删除多余空格
// 			if(!result.empty()){
// 				result.pop_back();
// 			}
// 			return result;
// 		}};

int main() {
	string s = "the sky is blue";
	cout << "原始字符串：" << s << endl;
	// cout << "反转后的字符串：" << reverseWords(s) << endl;

	return 0;
}



