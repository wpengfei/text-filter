/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/gpu/drm/vmwgfx/vmwgfx_execbuf.c
int vmw_execbuf_ioctl(struct drm_device *dev, unsigned long data,
{
copy_from_user(&arg, (void __user *) data, copy_offset[0]) != 0)
copy_from_user(&arg.context_handle,
}
