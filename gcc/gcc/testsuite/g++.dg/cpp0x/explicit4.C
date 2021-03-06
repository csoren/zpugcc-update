// Negative explicit conv test.
// { dg-options "-std=c++0x" }

struct A {
  A(const A&, int = 0);		// { dg-message "note" }
};
struct B
{
  explicit operator A();
};

int main()
{
  B b;
  (A(b));			// OK
  (A(b,1));			// { dg-error "no match" }
  // { dg-message "candidate" "candidate note" { target *-*-* } 16 }
}
