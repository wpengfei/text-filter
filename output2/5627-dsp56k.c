/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/dsp56k.c

static int dsp56k_upload(u_char *bin, int len)
{
get_user(dsp56k_host_interface.data.b[1], bin++);
get_user(dsp56k_host_interface.data.b[2], bin++);
get_user(dsp56k_host_interface.data.b[3], bin++);
get_user(dsp56k_host_interface.data.b[2], bin++);
get_user(dsp56k_host_interface.data.b[3], bin++);
}
static ssize_t dsp56k_write(struct file *file, const char *buf, size_t count,
{
get_user(dsp56k_host_interface.data.b[3], buf+n++));
get_user(dsp56k_host_interface.data.b[1], buf+n++);
get_user(dsp56k_host_interface.data.b[2], buf+n++);
get_user(dsp56k_host_interface.data.b[3], buf+n++));
get_user(dsp56k_host_interface.data.b[1], buf+n++);
get_user(dsp56k_host_interface.data.b[2], buf+n++);
get_user(dsp56k_host_interface.data.b[3], buf+n++));
get_user(dsp56k_host_interface.data.b[2], buf+n++);
get_user(dsp56k_host_interface.data.b[3], buf+n++));
}
