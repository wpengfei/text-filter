/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/x86/kernel/cpu/perf_event.c
static inline int
{
copy_from_user_nmi(&frame.next_frame, fp, 4);
copy_from_user_nmi(&frame.return_address, fp+4, 4);
}
void
{
copy_from_user_nmi(&frame.next_frame, fp, 8);
copy_from_user_nmi(&frame.return_address, fp+8, 8);
}
