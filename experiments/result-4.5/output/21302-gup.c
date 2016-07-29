/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/x86/mm/gup.c
static inline pte_t gup_get_pte(pte_t *ptep)
{
get_user_pages_fast, we walk down the pagetables without taking
get_user_pages_fast only operates on present ptes, so
}
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
{
get_user_pages, and even
get_user_pages */
get_user_pages_unlocked(current, mm, start,
}
