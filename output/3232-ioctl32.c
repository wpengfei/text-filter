/Users/wpf/Desktop/log/test/linux-2.6.9/arch/parisc/kernel/ioctl32.c
static int drm32_version(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(kversion.name_len, &uversion->name_len) ||
get_user(kversion.date_len, &uversion->date_len) ||
get_user(kversion.desc_len, &uversion->desc_len) ||
get_user(tmp1, &uversion->name) ||
get_user(tmp2, &uversion->date) ||
get_user(tmp3, &uversion->desc))
}
static int drm32_getsetunique(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(karg.unique_len, &uarg->unique_len))
get_user(tmp, &uarg->unique))
copy_from_user(karg.unique, uptr, karg.unique_len)) {
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
get_user(karg.count, &uarg->count) ||
get_user(tmp, &uarg->list))
}
static int drm32_free_bufs(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(karg.count, &uarg->count) ||
get_user(tmp, &uarg->list))
copy_from_user(karg.list, ulist, (karg.count * sizeof(int))))
}
static int drm32_map_bufs(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(karg.count, &uarg->count) ||
get_user(tmp1, &uarg->virtual) ||
get_user(tmp2, &uarg->list))
get_user(karg.list[i].idx, &ulist[i].idx) ||
get_user(karg.list[i].total, &ulist[i].total) ||
get_user(karg.list[i].used, &ulist[i].used) ||
get_user(tmp1, &ulist[i].address))
}
static int drm32_dma(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(karg.context, &uarg->context) ||
get_user(karg.send_count, &uarg->send_count) ||
get_user(tmp1, &uarg->send_indices) ||
get_user(tmp2, &uarg->send_sizes) ||
get_user(karg.flags, &uarg->flags) ||
get_user(karg.request_count, &uarg->request_count) ||
get_user(karg.request_size, &uarg->request_size) ||
get_user(tmp3, &uarg->request_indices) ||
get_user(tmp4, &uarg->request_sizes) ||
get_user(karg.granted_count, &uarg->granted_count))
copy_from_user(karg.send_indices, u_si,
copy_from_user(karg.send_sizes, u_ss,
copy_from_user(karg.request_indices, u_ri,
copy_from_user(karg.request_sizes, u_rs,
}
static int drm32_res_ctx(unsigned int fd, unsigned int cmd, unsigned long arg)
{
get_user(karg.count, &uarg->count) ||
get_user(tmp, &uarg->contexts))
copy_from_user(karg.contexts, ulist,
}
