/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/block/mtip32xx/mtip32xx.c
static int mtip_block_compat_ioctl(struct block_device *dev,
{
case HDIO_DRIVE_TASKFILE: {
copy_from_user(&req_task, (void __user *) arg,
get_user(req_task.out_size, &compat_req_task->out_size))
get_user(req_task.in_size, &compat_req_task->in_size))
}
