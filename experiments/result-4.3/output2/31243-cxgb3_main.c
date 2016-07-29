/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/net/ethernet/chelsio/cxgb3/cxgb3_main.c
static int cxgb_extension_ioctl(struct net_device *dev, void __user *useraddr)
{
copy_from_user(&cmd, useraddr, sizeof(cmd)))
case CHELSIO_SET_QSET_PARAMS:{
copy_from_user(&t, useraddr, sizeof(t)))
case CHELSIO_GET_QSET_PARAMS:{
copy_from_user(&t, useraddr, sizeof(t)))
case CHELSIO_SET_QSET_NUM:{
copy_from_user(&edata, useraddr, sizeof(edata)))
case CHELSIO_LOAD_FW:{
copy_from_user(&t, useraddr, sizeof(t)))
case CHELSIO_SETMTUTAB:{
copy_from_user(&m, useraddr, sizeof(m)))
case CHELSIO_SET_PM:{
copy_from_user(&m, useraddr, sizeof(m)))
case CHELSIO_GET_MEM:{
copy_from_user(&t, useraddr, sizeof(t)))
case CHELSIO_SET_TRACE_FILTER:{
copy_from_user(&t, useraddr, sizeof(t)))
}
