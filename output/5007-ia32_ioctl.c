/Users/wpf/Desktop/log/test/linux-2.6.9/arch/x86_64/ia32/ia32_ioctl.c
static int mtrr_ioctl32(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(g.regnum, &g32->regnum);
get_user(g.base, &g32->base);
get_user(g.size, &g32->size);
get_user(g.type, &g32->type); 
get_user(s.base, &s32->base);
get_user(s.size, &s32->size);
get_user(s.type, &s32->type);
} 
