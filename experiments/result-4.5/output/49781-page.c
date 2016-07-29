/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/rds/page.c
int rds_page_copy_user(struct page *page, unsigned long offset,
{
copy_from_user, bytes);
copy_from_user(addr + offset, ptr, bytes);
}
