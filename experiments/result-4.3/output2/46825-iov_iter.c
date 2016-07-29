/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/lib/iov_iter.c
static size_t copy_page_from_iter_iovec(struct page *page, size_t offset, size_t bytes,
{
copy_from_user_inatomic(to, buf, copy);
copy_from_user_inatomic(to, buf, copy);
copy_from_user(to, buf, copy);
copy_from_user(to, buf, copy);
}
