#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
int main()
{
	// 맵의 구성요소는 페어(두 자료형의 쌍)
	map<int, string> dictionary; // dictionary : 사전, 언어에 따라 맵이라는 자료형을 이렇게 표현한다

	// 페어 만들기
	pair<int, string> samplePair1;
	samplePair1.first = 0;
	samplePair1.second = "SGA";

	pair<int, string> samplePair2(1, "서울게임아카데미");

	// 맵에 자료를 추가
	dictionary.insert(samplePair1); // 만들어진 페어 넣기
	dictionary.insert(samplePair2); // 생성자를 통해서 만들어진 페어 넣기
	dictionary.insert(pair<int, string>(2, "Seoul")); // 생성자를 통해서 페어를 곧바로 만들기

	// 추가한 맵의 자료를 출력

	for (int i = 0; i < dictionary.size(); ++i) // 벡터처럼 순번으로 출력해보기
	{
		cout << dictionary[i] << endl;
	}

	dictionary.insert(pair<int, string>(3088, "말뚝이"));
	dictionary.insert(pair<int, string>(5047, "길동이"));
	dictionary.insert(pair<int, string>(20000, "김재호"));
	dictionary.insert(pair<int, string>(17827, "이재호"));

	
	for (int i = 0; i < dictionary.size(); ++i) // 벡터처럼 순번으로 출력해보기
	{
		cout << dictionary[i] << endl;
	}
	

	// 그러면 맵을 출력할 때는 반복자를 써야한다
	for (map<int, string>::iterator it = dictionary.begin(); // 반복자와 시작지점 지정
		it != dictionary.end(); // 반복자가 맵의 끝에 갈 때까지 반복
		++it)
	{
		cout << it->first << ", " << it->second << endl; // 반복자로 찾아간 메모리 주소의 두 페어
	}

	// 지울 때는
	dictionary.erase(1); // 1로 대변되는 뭔가 -> 1로 페어의 첫 번째를 작성한 데이터를 지우기

	for (map<int, string>::iterator it = dictionary.begin(); // 반복자와 시작지점 지정
		it != dictionary.end(); // 반복자가 맵의 끝에 갈 때까지 반복
		++it)
	{
		cout << it->first << ", " << it->second << endl;
	}

	// 맵에서 자료를 찾을 때는

	cout << dictionary.find(2)->first << endl;
	cout << dictionary.find(2)->second << endl;

	cout << endl;

	cout << dictionary.find(2)->first << endl;
	cout << dictionary.find(0)->second << endl;

	cout << "===" << endl;

	// 새로운 맵 작성

	map<string, string> newDic; // 숫자가 없는 맵 생성 ([] 안에 숫자를 넣어서 사용 불가)

	newDic["길동이"] = "는 못생겼다";
	newDic["이순신"] = "은 유명한 장군이다";
	newDic["김춘삼"] = "은 이름난 거지다";

	newDic["길동이"] = "는 잘생겼다";

	// 위에서 작성한 [] 안의 문자열로 맵 찾기와 출력 
	cout << newDic.find("길동이")->first << newDic.find("길동이")->second << endl;
	cout << newDic.find("이순신")->first << newDic.find("이순신")->second << endl;
	cout << newDic.find("김춘삼")->first << newDic.find("김춘삼")->second << endl;

	cout << newDic["길동이"] << endl;
	cout << newDic["이순신"] << endl;
	cout << newDic["김춘삼"] << endl;

	cout << "===" << endl;

	// ID로 캐릭터 찾기 (의 간단한 모형)

	map<int, string> charList; // 캐릭터 리스트
	// []를 써서 캐릭터 등록
	charList[0] = "캐릭터1";
	charList[1] = "캐릭터2";
	charList[2] = "캐릭터3";
	charList[3] = "캐릭터4";
	charList[4] = "캐릭터5";
	charList[5] = "캐릭터6";

	int input;

	cout << "찾으려는 캐릭터의 ID를 입력하시오(0 ~ 5) : ";
	cin >> input;

	// 캐릭터를 찾아서 출력
	cout << "찾은 캐릭터 : " << charList[input] << endl;
	// cout << "찾은 캐릭터 : " << charList.find(input)->second << endl;

	//  for (map<int, string>::iterator it = charList.begin();
	//  	it != charList.end();
	//  	++it)
	//  {
	//  	if (it->first == input)
	//  	{
	//  		cout << "찾은 캐릭터는 " << it->second << endl;
	//  	}
}
*/