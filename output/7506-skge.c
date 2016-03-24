/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/sk98lin/skge.c
static int SkGeIoctl(struct SK_NET_DEVICE *dev, struct ifreq *rq, int cmd)
{
copy_from_user(&Ioctl, rq->ifr_data, sizeof(SK_GE_IOCTL))) {
copy_from_user(&pAC->PnmiStruct, Ioctl.pData,
copy_from_user(pMemBuf, Ioctl.pData, Length)) {
copy_from_user(pMemBuf, Ioctl.pData, Length)) {
} /* SkGeIoctl */
