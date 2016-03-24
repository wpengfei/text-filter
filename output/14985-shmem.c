/Users/wpf/Desktop/log/test/linux-2.6.9/mm/shmem.c
static ssize_t
{
get_user(dummy, buf);
get_user(dummy, buf + bytes - 1);
copy_from_user_inatomic(kaddr + offset,
copy_from_user(kaddr + offset, buf, bytes);
}
