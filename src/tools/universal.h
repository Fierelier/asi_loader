#undef func_concat
#undef func_concat_exp
#define func_concat(a, b) a##b
#define func_concat_exp(a, b) func_concat(a, b)

#undef func_stringify
#undef func_stringify_exp
#define func_stringify(x) #x
#define func_stringify_exp(x) func_stringify(x)

#undef func_arg
#undef func_arg_call
#define func_arg(type,name) type name
#define func_call_arg(type,name) name

#undef func_args
#undef func_call_args
#define func_args func_args_proto(func_arg)
#define func_call_args func_args_proto(func_call_arg)

#undef func_tool
