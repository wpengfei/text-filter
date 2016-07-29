/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/virt/fsl_hypervisor.c
static long ioctl_memcpy(struct fsl_hv_ioctl_memcpy __user *p)
{
get_user_pages() */
copy_from_user(&param, p, sizeof(struct fsl_hv_ioctl_memcpy)))
get_user_pages() covers only
get_user_pages().
get_user_pages(current, current->mm,
get_user_pages() failed */
}
static long ioctl_dtprop(struct fsl_hv_ioctl_prop __user *p, int set)
{
copy_from_user(&param, p, sizeof(struct fsl_hv_ioctl_prop)))
copy_from_user(propval, upropval, param.proplen)) {
}
