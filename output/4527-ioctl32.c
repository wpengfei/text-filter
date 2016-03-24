/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/kernel/ioctl32.c
static int fbiogetputcmap(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(addr, &argp->red);
get_user(addr, &argp->green);
get_user(addr, &argp->blue);
}
static int fbiogscursor(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(addr, &argp->cmap.red);
get_user(addr, &argp->cmap.green);
get_user(addr, &argp->cmap.blue);
get_user(addr, &argp->mask);
get_user(addr, &argp->image);
}
static int drm32_version(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(n, &uversion->name_len) ||
get_user(addr, &uversion->name) ||
get_user(n, &uversion->date_len) ||
get_user(addr, &uversion->date) ||
get_user(n, &uversion->desc_len) ||
get_user(addr, &uversion->desc) ||
get_user(n, &p->name_len) ||
get_user(n, &p->date_len) ||
get_user(n, &p->desc_len) ||
}
static int drm32_getsetunique(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(n, &uarg->unique_len) ||
get_user(addr, &uarg->unique) ||
get_user(n, &p->unique_len) || put_user(n, &uarg->unique_len))
}
static int drm32_addmap(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(karg.offset, &uarg->offset);
get_user(karg.size, &uarg->size);
get_user(karg.type, &uarg->type);
get_user(karg.flags, &uarg->flags);
get_user(tmp, &uarg->handle);
get_user(karg.mtrr, &uarg->mtrr);
}
static int drm32_info_bufs(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(n, &uarg->count) || put_user(n, &p->count) ||
get_user(addr, &uarg->list) || put_user(compat_ptr(addr), &p->list))
get_user(n, &p->count) || put_user(n, &uarg->count))
}
static int drm32_free_bufs(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(n, &uarg->count) || put_user(n, &p->count) ||
get_user(addr, &uarg->list) || put_user(compat_ptr(addr), &p->list))
}
static int drm32_map_bufs(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(orig_count, &uarg->count))
get_user(addr, &uarg->virtual) ||
get_user(addr, &uarg->list))
get_user(n, &ulist[i].idx) ||
get_user(n, &ulist[i].total) ||
get_user(n, &ulist[i].used) ||
get_user(addr, &ulist[i].address) ||
get_user(n, &list[i].idx) ||
get_user(n, &list[i].total) ||
get_user(n, &list[i].used) ||
get_user(p, &list[i].address) ||
get_user(n, &arg64->count) || put_user(n, &uarg->count))
}
static int drm32_dma(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(addr, &uarg->send_indices) ||
get_user(addr, &uarg->send_sizes) ||
get_user(addr, &uarg->request_indices) ||
get_user(addr, &uarg->request_sizes) ||
}
