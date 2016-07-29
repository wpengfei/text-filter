/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/sh/mm/gup.c
static inline pte_t gup_get_pte(pte_t *ptep)
{
get_user_pages_fast, we walk down the pagetables without
get_user_pages_fast only operates on present ptes, so
}
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
{
get_user_pages */
get_user_pages_unlocked(current, mm, start,
}
