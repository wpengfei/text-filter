/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/isdn/sc/ioctl.c
int sc_ioctl(int card, scs_ioctl *data)
{
copy_from_user(srec, data->dataptr, sizeof(srec))) {
copy_from_user(&switchtype, data->dataptr, sizeof(char))) {
copy_from_user(spid, data->dataptr, SCIOC_SPIDSIZE)) {
copy_from_user(dn, data->dataptr, SCIOC_DNSIZE)) {
}
