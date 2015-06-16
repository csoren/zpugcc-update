/* PR rtl-optimization/23098 */
/* { dg-do compile { target i?86-*-* x86_64-*-* } } */
/* { dg-options "-O2 -fPIC" } */
/* { dg-final { scan-assembler-not "\.LC\[0-9\]" } } */
/* { dg-require-effective-target ilp32 } */

double foo (float);

double
f1 (void)
{
  return foo (1.0);
}

double
f2 (void)
{
  return foo (0.0);
}

void
f3 (float *x, float t)
{
  *x = 0.0 + t;
}
