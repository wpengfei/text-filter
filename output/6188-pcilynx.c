/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/ieee1394/pcilynx.c
static ssize_t mem_write(struct file *file, const char *buffer, size_t count,
{
copy_from_user(md->lynx->aux_port+(*offset), buffer, count))
copy_from_user(md->lynx->local_ram+(*offset), buffer, count))
copy_from_user(md->lynx->local_rom+(*offset), buffer, count))
}
