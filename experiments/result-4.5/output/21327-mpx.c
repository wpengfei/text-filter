/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/x86/mm/mpx.c
static int mpx_insn_decode(struct insn *insn,
{
copy_from_user(buf, (void __user *)regs->ip, sizeof(buf));
copy_from_user() tries to get as many bytes as we could see in
}
static int mpx_resolve_fault(long __user *addr, int write)
{
get_user_pages(current, current->mm, (unsigned long)addr,
get_user_pages() returns number of pages gotten.
}
int get_user_bd_entry(struct mm_struct *mm, unsigned long *bd_entry_ret,
{
get_user(*bd_entry_ret, bd_entry_ptr);
get_user() uses the type of the *pointer* to
get_user(bd_entry_32, (u32 __user *)bd_entry_ptr);
}
