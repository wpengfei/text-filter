/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/crypto/qat/qat_common/adf_ctl_drv.c
static int adf_copy_key_value_data(struct adf_accel_dev *accel_dev,
{
copy_from_user(&section, (void __user *)section_head,
copy_from_user(&key_val, (void __user *)params_head,
}
