// 멍멍이와 관련된 것들
namespace Dog
{
	// 멍멍이 한 마리 정보
	struct Info
	{
		char name[20];
		int age;
	};

	Info dogs[20];	// 멍멍이 리스트
	int count;		// 전체 멍멍이들의 수

	void CreateAll();	// 모든 멍멍이 생성 함수
}

// 야용이와 관련된 것들
namespace Cat
{
	// 야옹이 한 마리 정보
	class Info
	{
	public:
		void Meow();
	protected:
		char name[20];
	};

	Info cats[20];	// 야옹이 리스트
	int count;		// 전체 야옹이 들의 수

	void CreateAll();	// 모든 야옹이 생성 함수
}

// 전체 멍멍이와 야옹이들의 수
int count; 

using namespace Cat;
using namespace Dog;

int main()
{
	// 멍멍이의 수일까?
	// 야옹이의 수일까?
	// 아니면 모든 합한 수일까?
	int what_count = count;

	return 0;
}

namespace Dog
{
	void CreateAll()
	{
		// 아무것도 하지 않는다. 예제니까.
	}
}

namespace Cat
{
	void Info::Meow()
	{
		// 아무것도 하지 않는다. 예제니까.
	}

	void CreateAll()
	{
		// 아무것도 하지 않는다. 예제니까.
	}
}
