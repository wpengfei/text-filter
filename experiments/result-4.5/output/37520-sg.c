/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/scsi/sg.c
static ssize_t
{
copy_from_user(old_hdr, buf, SZ_SG_HEADER)) {
copy_from_user
}
static ssize_t
{
get_user()s */
copy_from_user(&old_hdr, buf, SZ_SG_HEADER))
get_user(opcode, buf);
copy_from_user(cmnd, buf, cmd_size))
}
static ssize_t
{
get_user()s */
copy_from_user(hp, buf, SZ_SG_IO_HDR)) {
get_user()s */
copy_from_user(cmnd, hp->cmdp, hp->cmd_len)) {
}
