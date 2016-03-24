/Users/wpf/Desktop/log/test/linux-2.6.9/kernel/futex.c
static int futex_requeue(unsigned long uaddr1, unsigned long uaddr2,
{
get_user while
get_user(curval, (int __user *)uaddr1) != 0) {
}
static int futex_wait(unsigned long uaddr, int val, unsigned long time)
{
get_user(curval, (int __user *)uaddr) != 0) {
get_user() in case it
}
