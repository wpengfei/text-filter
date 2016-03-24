/Users/wpf/Desktop/log/test/linux-2.6.9/mm/filemap.c

static inline size_t
{
copy_from_user_inatomic(kaddr + offset, buf, bytes);
copy_from_user(kaddr + offset, buf, bytes);
}
static inline size_t
{
copy_from_user_iovec(kaddr + offset, iov,
copy_from_user_iovec(kaddr + offset, iov,
}
