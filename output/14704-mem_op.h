/Users/wpf/Desktop/log/test/linux-2.6.9/include/pcmcia/mem_op.h
static inline void copy_user_to_pc(void *to, const void *from, size_t n)
{
get_user(l, (int *)from);
get_user(c, (char *)from++);
}
static inline void copy_user_to_pc(void *to, const void *from, size_t n)
{
get_user(s, (short *)from);
get_user(c, (char *)from);
}
