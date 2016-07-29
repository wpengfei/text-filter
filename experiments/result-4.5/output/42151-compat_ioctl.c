/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/fs/compat_ioctl.c
static int do_video_stillpicture(struct file *file,
{
get_user(fp, &up->iFrame);
get_user(size, &up->size);
}
static int do_video_set_spu_palette(struct file *file,
{
get_user(palp, &up->palette);
get_user(length, &up->length);
}
static int sg_build_iovec(sg_io_hdr_t __user *sgio, void __user *dxferp, u16 iovec_count)
{
get_user(base, &iov32[i].iov_base) ||
get_user(len, &iov32[i].iov_len) ||
}
static int sg_ioctl_trans(struct file *file, unsigned int cmd,
{
get_user(interface_id, &sgio32->interface_id))
get_user(iovec_count, &sgio32->iovec_count))
get_user(data, &sgio32->dxferp))
get_user(data, &sgio32->cmdp))
get_user(data, &sgio32->sbp))
get_user(data, &sgio32->usr_ptr))
get_user(datap, &sgio->usr_ptr) ||
}
static int sg_grt_trans(struct file *file,
{
get_user(ptr, &r[i].usr_ptr) ||
get_user(d, &r[i].duration) ||
}
static int ppp_sock_fprog_ioctl_trans(struct file *file,
{
get_user(flen, &u_fprog32->len) ||
get_user(fptr32, &u_fprog32->filter))
}
static int ppp_gidle(struct file *file, unsigned int cmd,
{
get_user(xmit, &idle->xmit_idle) ||
get_user(recv, &idle->recv_idle) ||
}
static int serial_struct_ioctl(struct file *file,
{
get_user(udata, &ss32->iomem_base))
get_user(iomem_base, &ss->iomem_base))
}
static int do_i2c_rdwr_ioctl(struct file *file,
{
get_user(nmsgs, &udata->nmsgs))
get_user(datap, &udata->msgs))
get_user(datap, &umsgs[i].buf) ||
}
