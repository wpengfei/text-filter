/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/gpu/drm/radeon/radeon_ioc32.c
static int compat_radeon_cp_texture(struct file *file, unsigned int cmd,
{
copy_from_user(&req32, (void __user *)arg, sizeof(req32)))
copy_from_user(&img32, (void __user *)(unsigned long)req32.image,
}
