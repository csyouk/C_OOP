# Rule of three
- The Rule of Three is a rule of thumb for C++, basically saying
- If your class needs any of
  - a copy constructor,
  - an assignment operator,
  - or a destructor,
- defined explictly, then it is likely to need all three of them.


> The reasons for this is that all three of them are usually used to manage a resource, and if your class manages a resource, it usually needs to manage copying as well as freeing.

> If there is no good semantic for copying the resource your class manages, then consider to forbid copying by declaring (not defining) the copy constructor and assignment operator as private.

> (Note that the forthcoming new version of the C++ standard (which is C++11) adds move semantics to C++, which will likely change the Rule of Three. However, I know too little about this to write a C++11 section about the Rule of Three.)
