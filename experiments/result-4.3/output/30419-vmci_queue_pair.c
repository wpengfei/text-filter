/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/misc/vmw_vmci/vmci_queue_pair.c
static int qp_host_get_user_memory(u64 produce_uva,
{
get_user_pages_fast((uintptr_t) produce_uva,
get_user_pages_fast(produce) failed (retval=%d)",
get_user_pages_fast((uintptr_t) consume_uva,
get_user_pages_fast(consume) failed (retval=%d)",
}
