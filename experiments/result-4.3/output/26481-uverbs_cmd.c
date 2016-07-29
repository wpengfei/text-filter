/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/infiniband/core/uverbs_cmd.c
static struct ib_recv_wr *ib_uverbs_unmarshall_recv(const char __user *buf,
{
copy_from_user(user_wr, buf + i * wqe_size,
copy_from_user(next->sg_list,
}
