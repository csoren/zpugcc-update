// Test that we properly clean up if we get an exception in the middle of
// constructing the closure object.
// { dg-options -std=c++0x }

// This test fails because of PR 41449; it isn't a lambda issue.
// { dg-do run { xfail *-*-* } }

struct A
{
  A() {}
  A(const A&) { throw 1; }
};

int bs;
struct B
{
  B() { ++bs; }
  B(const B&) { ++bs; }
  ~B() { --bs; }
};

int main()
{
  {
    B b1, b2;
    A a;

    try
      {
	[b1, a, b2]{ };
      }
    catch(...) {}
  }
  return bs;
}
