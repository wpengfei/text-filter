/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/metag/oprofile/backtrace.c
static void user_backtrace_fp(unsigned long __user *fp, unsigned int depth)
{
copy_from_user_inatomic(&addr, fp + 1, sizeof(addr)))
copy_from_user_inatomic(&fpnew, fp + 0, sizeof(fpnew)))
}
