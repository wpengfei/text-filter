/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/infiniband/hw/qib/qib_user_sdma.c
static int qib_user_sdma_queue_pkts(const struct qib_devdata *dd,
{
copy_from_user(pbc, iov[idx].iov_base, len);
copy_from_user(tidsm,
}
