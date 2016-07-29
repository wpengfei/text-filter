/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/x86/kernel/cpu/mtrr/if.c
static long
{
case MTRRIOC32_KILL_PAGE_ENTRY: {
get_user(sentry.base, &s32->base);
get_user(sentry.size, &s32->size);
get_user(sentry.type, &s32->type);
case MTRRIOC32_GET_PAGE_ENTRY: {
get_user(gentry.regnum, &g32->regnum);
get_user(gentry.base, &g32->base);
get_user(gentry.size, &g32->size);
get_user(gentry.type, &g32->type);
}
