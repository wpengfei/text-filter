/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/lguest/hypercalls.c
static void do_async_hcalls(struct lg_cpu *cpu)
{
copy_from_user(&st, &cpu->lg->lguest_data->hcall_status, sizeof(st)))
copy_from_user(&args, &cpu->lg->lguest_data->hcalls[n],
}
