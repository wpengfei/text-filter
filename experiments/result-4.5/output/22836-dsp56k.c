/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/char/dsp56k.c
static int dsp56k_upload(u_char __user *bin, int len)
{
get_user(dsp56k_host_interface.data.b[1], bin++);
get_user(dsp56k_host_interface.data.b[2], bin++);
get_user(dsp56k_host_interface.data.b[3], bin++);
}
static ssize_t dsp56k_write(struct file *file, const char __user *buf, size_t count,
{
case 3:  /* 24 bit */
get_user(dsp56k_host_interface.data.b[1], buf+n++);
get_user(dsp56k_host_interface.data.b[2], buf+n++);
get_user(dsp56k_host_interface.data.b[3], buf+n++));
}
static long dsp56k_ioctl(struct file *file, unsigned int cmd,
{
case DSP56K_UPLOAD:
get_user(len, &binary->len) < 0)
get_user(bin, &binary->bin) < 0)
case DSP56K_HOST_FLAGS:
get_user(dir, &hf->dir) < 0)
get_user(out, &hf->out) < 0)
}
