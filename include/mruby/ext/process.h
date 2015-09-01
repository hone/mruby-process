/*
** proocess.h
*/

#ifndef MRUBY_PROCESS_H
#define MRUBY_PROCESS_H

mrb_value mrb_procstat_new(mrb_state *mrb, mrb_int pid, mrb_int status);

#endif /* MRUBY_PROCESS_H */
