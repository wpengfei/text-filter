/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/tty/vt/consolemap.c
int con_set_unimap(struct vc_data *vc, ushort ct, struct unipair __user *list)
{
case we allocate a new one */
get_user(unicode, &list->unicode);
get_user(fontpos, &list->fontpos);
}
