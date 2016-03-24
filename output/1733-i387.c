/Users/wpf/Desktop/log/test/linux-2.6.9/arch/i386/kernel/i387.c
static int convert_fxsr_from_user( struct i387_fxsave_struct *fxsave,
{
copy_from_user( env, buf, 7 * sizeof(long) ) )
get_user(*t, f) ||
get_user(*(t + 1), f + 1) ||
get_user(to->exponent, &from->exponent))
}
