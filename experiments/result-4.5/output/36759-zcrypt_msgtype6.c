/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/s390/crypto/zcrypt_msgtype6.c
static int XCRB_msg_to_type6CPRB_msgX(struct zcrypt_device *zdev,
{
copy_from_user(&(msg->cprbx), xcRB->request_control_blk_addr,
copy_from_user(req_data, xcRB->request_data_address,
}
