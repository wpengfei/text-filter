/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/st.c
static ssize_t
{
copy_from_user(&i, buf, 1) != 0 ||
copy_from_user(&i, buf + count - 1, 1) != 0)) {
}
static ssize_t
{
copy_from_user(&i, buf, 1) != 0 ||
copy_from_user(&i, buf + count - 1, 1) != 0 ||
}
