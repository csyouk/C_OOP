# STL
- 표준 템플릿 라이브러리(STL)는 C++ 표준 라이브러리의 일부로, 컨테이너, 알고리즘, 함수 객체 등을 포함하고 있다.

- STL (Standard Template Library) ?
  - Linked List 혹은 Map 같은 자료구조를 이용하여 특정 문제를 반복적으로 사용하려고 할 때,
  - 제공되는 라이브러리를 사용하여 쉽게 특정기능을 사용할 수 있게 한다.
  - STL는 바로 이런 사상에서 시작 된 C++ 라이브러리로 그의 목표는 오직 중복가용성이다.

- Generic Programming이란 무엇인가 ?
  - 모든 변수타입에 대해서도 똑같은 일을 할 수 있도록 설계하는 것이다.
  - C++에서 Template를 이용하면 이런 문제를 손쉽게 해결 할 수 있다

## Linked List
- [사용 예](./CH_29/STL_List.cpp)

## vector
- 배열을 대체할 수 있다.
- 동일 타입의 자료 집합이며 각 요소는 연속된 위치에 배치된다.
- 연속된 위치에 배치되므로 임의 위치를 빠른 속도로 액세스 한다
- 최상위 레벨의 임의 접근 반복자를 제공하므로 STL의 거의 모든 알고리즘 사용 가능하다.
- 삽입, 삭제 속도가 느리다. 중간 삽입, 삭제는 더 느리다.
- 배열의 크기는 고정이지만 std::vector는 요소 개수에 따라 자동(동적)으로 늘어난다.
  - 동적인 배열의 형태로 지원한다.

- [사용 예](./CH_29/STL_Vector.cpp)

## Deque    
- vector의 단점을 보완하기 위해서 만들어진 container 이다.
- deque도 vector와 마찬가지로 배열기반의 구조이다.
- vector는 새로운 원소가 추가 될때 메모리 재할당 후 이전 원소를 복사하는 방식으로 인하여,  삽입 시에 성능이 저하된다.
- deque는 이러한 vector의 단점을 보완하기 위해서 여러개의 메모리 블록을 할당하고 하나의 블록처럼 여기는 기능을 제공.
- deque는 메모리가 부족할때 마다 일정한 크기의 새로운 메모리 블록을 할당한다. 그럼으로, 이전 원소를 복사하지 않는다.

- [사용 예](./CH_29/STL_Deque.cpp)

## Map(해쉬테이블)
- map의 원소는 key, value 저장된다.
- key와 value 쌍으로 이루어진 데이터를 저장할 수 있는 자료구조.
- map의 key는 중복될 수 없다
- 데이터 삽입과 동시에 정렬이 일어난다.
- 정렬은 key를 기준으로 정렬되며 기본 정렬 기준은 오름차순  정렬이다.
- 빈번하게 삽입/삭제는 권장하지 않는다.
- 데이터를 찾는 속도가 개수의 영향을 거의 받지않아, 효율적이고 빠르게 데이터를 찾을 수 있다.
- 검색 또한 key를 기준으로 검색(이분검색)한다.
- 저장할 자료가 적을 때는 메모리 낭비와 검색 시 오버헤드가 심하게 발생한다.

- [사용 예](./CH_29/STL_Map.cpp)
