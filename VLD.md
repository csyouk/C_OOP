# Visual Leak Detector 사용법
- **Memory Leak** 을 감지하는 써드파티 라이브러리.
- VLD 설치 후.
- Program Files(x86)에 있는 **Visual Leak Detector** 파일을 찾아간 후,
**bin, include, lib** 폴더에 있는 내용을 **사용중인 Microsoft Visual Studio**  
의 **VC 폴더 에 있는 bin, include, lib** 폴더에 복사해서 붙여넣는다.
- 그 후, **include** 폴더에 들어가 있는 **vld.h** 의 경로를 붙여서 디버깅 하고자 하는
파일에 **include** 시킨다.
- 다음은 코드에 붙여놓은 경로이다.

```cpp
#include <C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include\vld.h>
```

- 다음은 메모리 누수가 생기지 않은 코드의 결과이다.
![No Memory Leak](./img/memory-leak1.PNG)

- 다음은 메모리 누수가 생긴 코드의 결과이다.
- struct_new.cpp 21번째 줄과 45번째 줄에서 메모리 누수를 감지했다는 결과가 나왔다.
![Memory Leak](./img/memory-leak2.PNG)
