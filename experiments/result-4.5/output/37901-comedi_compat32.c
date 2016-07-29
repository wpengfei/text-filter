/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/staging/comedi/comedi_compat32.c
static int compat_chaninfo(struct file *file, unsigned long arg)
{
get_user(temp.uint, &chaninfo32->subdev);
get_user(temp.uptr, &chaninfo32->maxdata_list);
get_user(temp.uptr, &chaninfo32->flaglist);
get_user(temp.uptr, &chaninfo32->rangelist);
}
static int compat_rangeinfo(struct file *file, unsigned long arg)
{
get_user(temp.uint, &rangeinfo32->range_type);
get_user(temp.uptr, &rangeinfo32->range_ptr);
}
static int get_compat_cmd(struct comedi_cmd __user *cmd,
{
get_user(temp.uint, &cmd32->subdev);
get_user(temp.uint, &cmd32->flags);
get_user(temp.uint, &cmd32->start_src);
get_user(temp.uint, &cmd32->start_arg);
get_user(temp.uint, &cmd32->scan_begin_src);
get_user(temp.uint, &cmd32->scan_begin_arg);
get_user(temp.uint, &cmd32->convert_src);
get_user(temp.uint, &cmd32->convert_arg);
get_user(temp.uint, &cmd32->scan_end_src);
get_user(temp.uint, &cmd32->scan_end_arg);
get_user(temp.uint, &cmd32->stop_src);
get_user(temp.uint, &cmd32->stop_arg);
get_user(temp.uptr, &cmd32->chanlist);
get_user(temp.uint, &cmd32->chanlist_len);
get_user(temp.uptr, &cmd32->data);
get_user(temp.uint, &cmd32->data_len);
}
static int put_compat_cmd(struct comedi32_cmd_struct __user *cmd32,
{
get_user(temp, &cmd->subdev);
get_user(temp, &cmd->flags);
get_user(temp, &cmd->start_src);
get_user(temp, &cmd->start_arg);
get_user(temp, &cmd->scan_begin_src);
get_user(temp, &cmd->scan_begin_arg);
get_user(temp, &cmd->convert_src);
get_user(temp, &cmd->convert_arg);
get_user(temp, &cmd->scan_end_src);
get_user(temp, &cmd->scan_end_arg);
get_user(temp, &cmd->stop_src);
get_user(temp, &cmd->stop_arg);
get_user(temp, &cmd->chanlist_len);
get_user(temp, &cmd->data_len);
}
static int get_compat_insn(struct comedi_insn __user *insn,
{
get_user(temp.uint, &insn32->insn);
get_user(temp.uint, &insn32->n);
get_user(temp.uptr, &insn32->data);
get_user(temp.uint, &insn32->subdev);
get_user(temp.uint, &insn32->chanspec);
}
static int compat_insnlist(struct file *file, unsigned long arg)
{
get_user(n_insns, &insnlist32->n_insns);
get_user(uptr, &insnlist32->insns);
}
