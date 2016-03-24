/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/char/drm/i810_dma.c
int i810_dma_init_compat(drm_i810_init_t *init, unsigned long arg)
{
copy_from_user(init, (drm_i810_pre12_init_t __user *)arg,
copy_from_user(init, (drm_i810_init_t __user *)arg,
}
int i810_dma_init(struct inode *inode, struct file *filp,
{
copy_from_user(&init, (void __user *)arg, sizeof(drm_i810_init_func_t))) 
copy_from_user(&init, (drm_i810_init_t __user *)arg,
}
