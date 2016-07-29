/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/scsi/st.c
static ssize_t
{
cases where copy_user might catch
copy_from_user(&i, buf, 1) != 0 ||
copy_from_user(&i, buf + count - 1, 1) != 0)) {
}
static ssize_t
{
copy_from_user(&i, buf, 1) != 0 ||
copy_from_user(&i, buf + count - 1, 1) != 0 ||
}
