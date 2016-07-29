/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/infiniband/core/uverbs_cmd.c
static void *alloc_wr(size_t wr_size, __u32 num_sge)
{
copy_from_user(&cmd, buf, sizeof cmd))
copy_from_user(user_wr,
copy_from_user(next->sg_list,
}
static struct ib_recv_wr *ib_uverbs_unmarshall_recv(const char __user *buf,
{
copy_from_user(user_wr, buf + i * wqe_size,
copy_from_user(next->sg_list,
}
