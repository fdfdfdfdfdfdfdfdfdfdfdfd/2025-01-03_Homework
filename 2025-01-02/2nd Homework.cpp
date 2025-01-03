#include <iostream>
#include <vector>
using namespace std;

// Ŭ������ �̸��� SimpleVector �Դϴ�
// Ÿ�Կ� �������� �ʰ� �����͸� ������ �ִ� �迭�� ��������� �����ϴ�.(���ø�)

// �����ڴ� �Ʒ��� ���� �����մϴ�
// �� �⺻ �����ڴ� ũ�Ⱑ 10�� �迭�� ����ϴ�
// ���� ���ڸ� �ϳ� �޴� �����ڴ� �ش� ���ڿ� �ش�Ǵ� ũ���� �迭�� ����ϴ�

// �Ʒ��� ���� ����Լ��� ���� �մϴ�.
// push_back  ���ڷ� ���� ���Ҹ�  �� �ڿ� �߰� �մϴ�. ��ȯ���� �����ϴ�. �迭�� ũ�Ⱑ �� á�µ� ���Ұ� �� ���ð�� �ƹ� ���۵� ���� �ʽ��ϴ�.
// pop_back�� ������ ������ ���Ҹ� ���� �մϴ�. ���� ������ ���Ұ� ���ٸ� �ƹ� ���۵� ���� ������, ���� �� ��ȯ���� �����ϴ�.
// size�� ���ڰ� ���� ���� ������ ������ ��ȯ�մϴ�.
// �� size��� �Լ��� �����ϼ��� �� �Լ��� ���ڸ� ������� �ʰ� ���� ������ ������ ��ȯ�մϴ�.(��� ���ΰ�?)
// capacity ���� ���� �迭�� ũ�⸦ ��ȯ�մϴ�.

template <typename T>

class SimpleVector
{
private:
	// ���ø� T�� ����Ͽ� �迭 ����(���� int bool�� Ÿ�Կ� ���й��� ����)
	T* arr; // ����� ����Ʈ �� ����: ó������ �ʱ�ȭ ���� �ʰ� �����ڿ��� ���� ���ϱ� ������
	int currentSize; //���� ������
	int currentCapacity; //��ü �뷮

public:
	// �����ڴ� �Ʒ��� ���� �����մϴ�
	// // �� �⺻ �����ڴ� ũ�Ⱑ 10�� �迭�� ����ϴ�
	// // ���� ���ڸ� �ϳ� �޴� �����ڴ� �ش� ���ڿ� �ش�Ǵ� ũ���� �迭�� ����ϴ�
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

	// ���� ���ڸ� �ϳ� �޴� �����ڴ� �ش� ���ڿ� �ش�Ǵ� ũ���� �迭�� ����ϴ�
	// push_back ���ڷ� ���� ���Ҹ�  �� �ڿ� �߰� �մϴ�. 
	// ��ȯ���� �����ϴ�. �迭�� ũ�Ⱑ �� á�µ� ���Ұ� �� ���ð�� �ƹ� ���۵� ���� �ʽ��ϴ�.

	void push_back(T asdf)
	{
		if (currentSize < currentCapacity)
		{
			arr[currentSize] = asdf;
			++currentSize;
		}
		else
		{
			cout << "�迭�� ���� á���ϴ�!" << endl;
		}
	}

	// pop_back�� ������ ������ ���Ҹ� ���� �մϴ�. 
	// ���� ������ ���Ұ� ���ٸ� �ƹ� ���۵� ���� ������, ���� �� ��ȯ���� �����ϴ�.
	void pop_back()
	{
		if (currentSize == 0)
		{
			cout << "���� �� �迭�� �����ϴ�!" << endl;
		}
		else
		{
			--currentSize;
		}
	}
	// size�� ���ڰ� ���� ���� ������ ������ ��ȯ�մϴ�.
	int size()
	{
		cout << "���� ������ ������ " << currentSize << " �Դϴ�." << endl;
		return currentSize;
	}
	// capacity ���� ���� �迭�� ũ�⸦ ��ȯ�մϴ�.
	int capacity()
	{
		cout << "���� ���� �迭�� ũ��� " << currentCapacity << " �Դϴ�." << endl;
		return currentCapacity;
	}
};

int main()
{
	//Ŭ���� �ҷ��ͼ� Ŭ���� �ȿ� �ִ� �Լ� ȣ��? �ؾߵ�
	// Ǫ���� �˹�
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

	// size�� ���ڰ� ���� ���� ������ ������ ��ȯ�մϴ�.
	
	// capacity ���� ���� �迭�� ũ�⸦ ��ȯ�մϴ�.

	return 0;
}
