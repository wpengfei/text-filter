/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/fs/select.c
static long do_pselect(int n, fd_set __user *inp, fd_set __user *outp,
{
copy_from_user(&ts, tsp, sizeof(ts)))
copy_from_user(&ksigmask, sigmask, sizeof(ksigmask)))
}
