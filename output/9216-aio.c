/Users/wpf/Desktop/log/test/linux-2.6.9/fs/aio.c
asmlinkage long sys_io_submit(aio_context_t ctx_id, long nr,
{
get_user(user_iocb, iocbpp + i))) {
copy_from_user(&tmp, user_iocb, sizeof(tmp)))) {
}
