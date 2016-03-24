/Users/wpf/Desktop/log/test/linux-2.6.9/kernel/ptrace.c
int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write)
{
get_user_pages(tsk, mm, addr, 1,
copy_from_user_page(vma, page, addr,
}
