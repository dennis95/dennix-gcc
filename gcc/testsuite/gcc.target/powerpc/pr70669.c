/* { dg-do compile { target { powerpc*-*-linux* && lp64 } } } */
/* { dg-require-effective-target powerpc_p8vector_ok } */
/* { dg-skip-if "do not override -mcpu" { powerpc*-*-* } { "-mcpu=*" } { "-mcpu=power8" } } */
/* { dg-options "-O2 -mcpu=power8 -mfloat128" } */

#ifndef TYPE
#define TYPE __float128
#endif

void foo (TYPE *p, TYPE *q)
{
  TYPE r = *q;
#ifndef NO_ASM
  __asm__ (" # %0" : "+r" (r));
#endif
  *p = r;
}

/* { dg-final { scan-assembler       "mfvsrd"    } } */
/* { dg-final { scan-assembler       "mtvsrd"    } } */
/* { dg-final { scan-assembler-times "stxvd2x" 1 } } */
/* { dg-final { scan-assembler-times "lxvd2x"  1 } } */
