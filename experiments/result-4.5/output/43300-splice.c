/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/fs/splice.c
static long do_splice(struct file *in, loff_t __user *off_in,
{
copy_from_user(&offset, off_out, sizeof(loff_t)))
copy_from_user(&offset, off_in, sizeof(loff_t)))
}
static int get_iovec_page_array(const struct iovec __user *iov,
{
copy_from_user(&entry, iov, sizeof(entry)))
get_user_pages_fast((unsigned long)base, npages,
}
