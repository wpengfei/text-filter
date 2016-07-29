/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/block/skd_main.c
static int skd_sg_io_get_and_check_args(struct skd_device *skdev,
{
copy_from_user(sgp, sksgio->argp, sizeof(sg_io_hdr_t))) {
copy_from_user sg failed %p\n",
default:
copy_from_user(sksgio->cdb, sgp->cmdp, sgp->cmd_len)) {
copy_from_user cmdp failed %p\n",
copy_from_user(iov, sgp->dxferp, nbytes)) {
copy_from_user iovec failed %p\n",
}
