/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/acpi/custom_method.c
static ssize_t cm_write(struct file *file, const char __user * user_buf,
{
copy_from_user(&table, user_buf,
copy_from_user(buf + (*ppos), user_buf, count)) {
}
