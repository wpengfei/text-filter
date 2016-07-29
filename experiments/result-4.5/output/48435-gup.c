/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/mm/gup.c
static __always_inline long __get_user_pages_locked(struct task_struct *tsk,
{
get_user_pages(tsk, mm, start, nr_pages, flags, pages,
get_user_pages(tsk, mm, start, 1, flags | FOLL_TRIED,
}
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
{
get_user_pages_fast(start, nr_pages, write, pages);
get_user_pages */
get_user_pages_unlocked(current, mm, start,
}
