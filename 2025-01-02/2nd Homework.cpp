#include <iostream>
#include <vector>
using namespace std;

// 클래스의 이름은 SimpleVector 입니다
// 타입에 의존하지 않고 데이터를 받을수 있는 배열을 멤버변수로 갖습니다.(템플릿)

// 생성자는 아래와 같이 구현합니다
// ㄴ 기본 생성자는 크기가 10인 배열을 만듭니다
// ㄴㄴ 숫자를 하나 받는 생성자는 해당 숫자에 해당되는 크기의 배열을 만듭니다

// 아래와 같은 멤버함수를 구현 합니다.
// push_back  인자로 받은 원소를  맨 뒤에 추가 합니다. 반환값은 없습니다. 배열의 크기가 꽉 찼는데 원소가 더 들어올경우 아무 동작도 하지 않습니다.
// pop_back은 벡터의 마지막 원소를 제거 합니다. 만약 제거할 원소가 없다면 아무 동작도 하지 않으며, 인자 및 반환값은 없습니다.
// size는 인자가 없고 현재 원소의 개수를 반환합니다.
// ㄴ size라는 함수를 구현하세요 그 함수는 인자를 사용하지 않고 현재 원소의 개수를 반환합니다.(라는 뜻인가?)
// capacity 현재 내부 배열의 크기를 반환합니다.

template <typename T>

class SimpleVector
{
private:
	// 템플릿 T를 사용하여 배열 생성(이제 int bool등 타입에 구분받지 않음)
	T* arr; // 여기다 포인트 쓴 이유: 처음부터 초기화 하지 않고 생성자에서 값을 정하기 때문에
	int currentSize; //현재 사이즈
	int currentCapacity; //전체 용량

public:
	// 생성자는 아래와 같이 구현합니다
	// // ㄴ 기본 생성자는 크기가 10인 배열을 만듭니다
	// // ㄴㄴ 숫자를 하나 받는 생성자는 해당 숫자에 해당되는 크기의 배열을 만듭니다
	SimpleVector() : currentCapacity(10), currentSize(0)
	{
		arr = new T[currentCapacity];
	}

	SimpleVector(int i)
	{
		currentSize = 0;
		currentCapacity = i;
		arr = new T[currentCapacity];
	}

	~SimpleVector()
	{
		delete[] arr;
		arr = nullptr;
	}

	// ㄴㄴ 숫자를 하나 받는 생성자는 해당 숫자에 해당되는 크기의 배열을 만듭니다
	// push_back 인자로 받은 원소를  맨 뒤에 추가 합니다. 
	// 반환값은 없습니다. 배열의 크기가 꽉 찼는데 원소가 더 들어올경우 아무 동작도 하지 않습니다.

	void push_back(T asdf)
	{
		if (currentSize < currentCapacity)
		{
			arr[currentSize] = asdf;
			++currentSize;
		}
		else
		{
			cout << "배열이 가득 찼습니다!" << endl;
		}
	}

	// pop_back은 벡터의 마지막 원소를 제거 합니다. 
	// 만약 제거할 원소가 없다면 아무 동작도 하지 않으며, 인자 및 반환값은 없습니다.
	void pop_back()
	{
		if (currentSize == 0)
		{
			cout << "제거 할 배열이 없습니다!" << endl;
		}
		else
		{
			--currentSize;
		}
	}
	// size는 인자가 없고 현재 원소의 개수를 반환합니다.
	int size()
	{
		cout << "현재 원소의 개수는 " << currentSize << " 입니다." << endl;
		return currentSize;
	}
	// capacity 현재 내부 배열의 크기를 반환합니다.
	int capacity()
	{
		cout << "현재 내부 배열의 크기는 " << currentCapacity << " 입니다." << endl;
		return currentCapacity;
	}
};

int main()
{
	//클래스 불러와서 클래스 안에 있는 함수 호출? 해야됨
	// 푸쉬백 팝백
	SimpleVector<int> simple;
	
	simple.pop_back();
	simple.push_back(0);
	simple.size();
	simple.capacity();
	simple.push_back(1);
	simple.push_back(2);
	simple.push_back(3);
	simple.push_back(4);
	simple.push_back(5);
	simple.push_back(6);
	simple.push_back(7);
	simple.push_back(8);
	simple.push_back(9);
	simple.push_back(10);
	simple.push_back(11);
	simple.pop_back();
	simple.pop_back();
	simple.pop_back();
	simple.size();
	simple.capacity();
	simple.push_back(12);
	simple.push_back(13);
	simple.push_back(14);
	simple.push_back(15);
	simple.size();
	simple.capacity();

	// size는 인자가 없고 현재 원소의 개수를 반환합니다.
	
	// capacity 현재 내부 배열의 크기를 반환합니다.

	return 0;
}
