/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/kernel/events/uprobes.c
static int is_trap_at_addr(struct mm_struct *mm, unsigned long vaddr)
{
copy_from_user_inatomic(&opcode, (void __user*)vaddr,
get_user_pages(NULL, mm, vaddr, 1, 0, 1, &page, NULL);
}
