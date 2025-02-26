/*
   Copyright (C) 2019-2022 Xcalibyte (Shenzhen) Limited.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */

// ==================================================================================================
// DEF_RBC_OP Eval fptr in Init dna Phase Eval fptr in model/assert phase Rbc interface_name
// ==================================================================================================
DEF_RBC_OP(RBC_OP_NONE, NULL, NULL, "None")
DEF_RBC_OP(RBC_OP_RBC_ASSERT, &RBC_BASE::Process_rbc_assert_func, NULL, "Rbc_assert")
DEF_RBC_OP(RBC_OP_RBC_RULE_EXCEPTION, NULL, NULL, "Rbc_rule_exception")
DEF_RBC_OP(RBC_OP_RBC_ANNOTATE, &RBC_BASE::Process_rbc_annotate, NULL, "Rbc_annotate")
DEF_RBC_OP(RBC_OP_RBC_DISABLE_RULE, NULL, NULL, "Rbc_disable_rule")
DEF_RBC_OP(RBC_OP_RBC_APPLY_RULE, NULL, NULL, "Rbc_apply_rule")
DEF_RBC_OP(RBC_OP_RBC_ENABLE_BUILTIN, NULL, NULL, "Rbc_enable_builtin")
DEF_RBC_OP(RBC_OP_FOR_ALL_EXEC_PATH, NULL, NULL, "For_all_exec_path")
DEF_RBC_OP(RBC_OP_RBC_SAME_AS_FUNC, NULL, NULL, "Rbc_same_as_func")
DEF_RBC_OP(RBC_OP_RBC_GLOBAL_USED, NULL, NULL, "Rbc_global_used")
DEF_RBC_OP(RBC_OP_RBC_DEFINE_CALL, NULL, NULL, "Rbc_define_call")
DEF_RBC_OP(RBC_OP_FOR_ALL_FUNC, &RBC_BASE::Process_rbc_for_all_func, NULL, "For_all_func")
DEF_RBC_OP(RBC_OP_RBC_SET_RULE_SET, &RBC_BASE::Process_rbc_rule_set, NULL, "Rbc_set_rule_set")
DEF_RBC_OP(RBC_OP_NOT, &RBC_BASE::Init__not, &RBC_BASE::Eval__not, "Not")
DEF_RBC_OP(RBC_OP_OR, NULL, &RBC_BASE::Eval__or, "Or")
DEF_RBC_OP(RBC_OP_AND, NULL, &RBC_BASE::Eval__and, "And")
DEF_RBC_OP(RBC_OP_IF, &RBC_BASE::Init__if, &RBC_BASE::Eval__if, "If")
DEF_RBC_OP(RBC_OP_PRE_SANITIZED, NULL, &RBC_BASE::Eval__pre_sanitized, "Pre_sanitized")
DEF_RBC_OP(RBC_OP_PRE_CALL, NULL, &RBC_BASE::Eval__pre_call, "Pre_call")
DEF_RBC_OP(RBC_OP_IS_ERRNO_CLEARED_BEFORE, NULL, &RBC_BASE::Eval__is_errno_cleared_before, "Is_errno_cleared_before")
DEF_RBC_OP(RBC_OP_PRE_CHECK_VAR_VALUE, NULL, &RBC_BASE::Eval__pre_check_var_value, "Pre_check_var_value")
DEF_RBC_OP(RBC_OP_POST_CHECK_VAR_VALUE, NULL, &RBC_BASE::Eval__post_check_var_value, "Post_check_var_value")
DEF_RBC_OP(RBC_OP_POST_CHECK_VAR_FUNC, NULL, &RBC_BASE::Eval__post_check_var_func, "Post_check_var_func")
DEF_RBC_OP(RBC_OP_POST_CALL, NULL, &RBC_BASE::Eval__post_call, "Post_call")
DEF_RBC_OP(RBC_OP_IS_FUNC_EXEC_SUCCESSFUL, NULL, &RBC_BASE::Eval__is_func_exec_successful, "Is_func_exec_successful")
DEF_RBC_OP(RBC_OP_IS_RETURN_CHECKED_PROPERLY, NULL, &RBC_BASE::Eval__is_return_checked_properly, "Is_return_checked_properly")
DEF_RBC_OP(RBC_OP_IS_VAR_USED_AFTER, NULL, &RBC_BASE::Eval__is_var_used_after, "Is_var_used_after")
DEF_RBC_OP(RBC_OP_IS_VAR_DEFINED_AFTER, NULL, &RBC_BASE::Eval__is_var_defined_after, "Is_var_defined_after")
DEF_RBC_OP(RBC_OP_IS_VAR_INVALID_AND_USED_AFTER, NULL, &RBC_BASE::Eval__is_var_invalid_and_used_after, "Is_var_invalid_and_used_after")
DEF_RBC_OP(RBC_OP_IS_ERRNO_CHECKED_AFTER, NULL, &RBC_BASE::Eval__is_errno_checked_after, "Is_errno_checked_after")
DEF_RBC_OP(RBC_OP_PARM_IS_DEF_BY_FUNC, NULL, &RBC_BASE::Eval__parm_is_def_by_func, "Parm_is_def_by_func")
DEF_RBC_OP(RBC_OP_IS_CALLED_BY, NULL, &RBC_BASE::Eval__is_called_by, "Is_called_by")
DEF_RBC_OP(RBC_OP_IS_CALLED_IN_THREAD, NULL, &RBC_BASE::Eval__is_called_in_thread, "Is_called_in_thread")
DEF_RBC_OP(RBC_OP_IS_CALLED_IN_ISR, NULL, &RBC_BASE::Eval__is_called_in_isr, "Is_called_in_isr")
DEF_RBC_OP(RBC_OP_IS_CALLED_IN_LOOP, NULL, &RBC_BASE::Eval__is_called_in_loop, "Is_called_in_loop")
DEF_RBC_OP(RBC_OP_IS_MEMORY_OVERLAP, NULL, &RBC_BASE::Eval__is_memory_overlap, "Is_memory_overlap")
DEF_RBC_OP(RBC_OP_IS_MEMORY_BIG_ENOUGH, NULL, &RBC_BASE::Eval__is_memory_big_enough, "Is_memory_big_enough")
DEF_RBC_OP(RBC_OP_FUNC_MAY_ENTER_RECURSION, NULL, &RBC_BASE::Eval__func_may_enter_recursion, "Func_may_enter_recursion")
DEF_RBC_OP(RBC_OP_FUNC_MAY_NOT_RETURN, NULL, &RBC_BASE::Eval__func_may_not_return, "Func_may_not_return")
DEF_RBC_OP(RBC_OP_FUNC_IS_ASYNCHRONOUS_SAFE, NULL, &RBC_BASE::Eval__func_is_asynchronous_safe, "Func_is_asynchronous_safe")
DEF_RBC_OP(RBC_OP_FUNC_PERFORMS_SANITIZE, NULL, &RBC_BASE::Eval__func_performs_sanitize, "Func_performs_sanitize")
DEF_RBC_OP(RBC_OP_IS_AUTOMATIC_VARIABLE, NULL, &RBC_BASE::Eval__is_automatic_variable, "Is_automatic_variable")
DEF_RBC_OP(RBC_OP_IS_DYNAMICALLY_ALLOCATED_IF_COPIED, NULL, &RBC_BASE::Eval__is_dynamically_allocated_if_copied, "Is_dynamically_allocated_if_copied")
DEF_RBC_OP(RBC_OP_IS_COMPATIBLE_PARM_TYPE, NULL, &RBC_BASE::Eval__is_compatible_parm_type, "Is_compatible_parm_type")
DEF_RBC_OP(RBC_OP_IS_PARM_TAINTED, NULL, &RBC_BASE::Eval__is_parm_tainted, "Is_parm_tainted")
DEF_RBC_OP(RBC_OP_IS_STD_OUTPUT, NULL, &RBC_BASE::Eval__is_std_output, "Is_std_output")
DEF_RBC_OP(RBC_OP_DO_NOT_GET_CALLED, NULL, &RBC_BASE::Eval__do_not_get_called, "Do_not_get_called")
DEF_RBC_OP(RBC_OP_DO_NOT_CALL, &RBC_BASE::Init__do_not_call, &RBC_BASE::Eval__do_not_call, "Do_not_call")
DEF_RBC_OP(RBC_OP_DO_NOT_ACCESS_SHARED_OBJ, NULL, &RBC_BASE::Eval__do_not_access_shared_obj, "Do_not_access_shared_obj")
DEF_RBC_OP(RBC_OP_DO_NOT_CALL_SLEEP_IN_ATM, NULL, &RBC_BASE::Eval__do_not_call_sleep_in_atm, "Do_not_call_sleep_in_atm")
DEF_RBC_OP(RBC_OP_IMPLICIT_CALL, NULL, &RBC_BASE::Eval__implicit_call, "Implicit_call")
DEF_RBC_OP(RBC_OP_CALL_SUPER, NULL, &RBC_BASE::Eval__call_super, "Call_super")
DEF_RBC_OP(RBC_OP_FUNC_INVOKED_BY_SUBCLASS, NULL, &RBC_BASE::Eval__func_invoked_by_subclass, "Func_invoked_by_subclass")
DEF_RBC_OP(RBC_OP_IS_OBJ_METH_OVERRIDE, NULL, &RBC_BASE::Eval__is_obj_meth_override, "Is_obj_meth_override")
DEF_RBC_OP(RBC_OP_MODEL_DECL, NULL, NULL, "Model_decl")
DEF_RBC_OP(RBC_OP_ASSUME_PARM, NULL, &RBC_BASE::Eval__assume_parm, "Assume_parm")
DEF_RBC_OP(RBC_OP_ASSUME_VAR, NULL, &RBC_BASE::Eval__assume_var, "Assume_var")
DEF_RBC_OP(RBC_OP_ASSUME_RET, NULL, &RBC_BASE::Eval__assume_ret, "Assume_ret")
DEF_RBC_OP(RBC_OP_DECLARE_MALLOC_SIMILAR, NULL, &RBC_BASE::Eval__declare_malloc_similar, "Declare_malloc_similar")
DEF_RBC_OP(RBC_OP_DECLARE_FREE_SIMILAR, NULL, &RBC_BASE::Eval__declare_free_similar, "Declare_free_similar")
DEF_RBC_OP(RBC_OP_SET_TAG, &RBC_BASE::Init__set_tag, &RBC_BASE::Eval__set_tag, "Set_tag")
DEF_RBC_OP(RBC_OP_SET_TAG_FOR_ALL_PARM, NULL, &RBC_BASE::Eval__set_tag_for_all_parm, "Set_tag_for_all_parm")
DEF_RBC_OP(RBC_OP_UNSET_TAG, NULL, &RBC_BASE::Eval__unset_tag, "Unset_tag")
DEF_RBC_OP(RBC_OP_SET_TAG_ATTR, &RBC_BASE::Init__set_tag_attr, &RBC_BASE::Eval__set_tag_attr, "Set_tag_attr")
DEF_RBC_OP(RBC_OP_IS_TAG_SET, &RBC_BASE::Init__is_tag_set, &RBC_BASE::Eval__is_tag_set, "Is_tag_set")
DEF_RBC_OP(RBC_OP_IS_TAG_ATTR_SET, &RBC_BASE::Init__is_tag_attr_set, &RBC_BASE::Eval__is_tag_attr_set, "Is_tag_attr_set")
DEF_RBC_OP(RBC_OP_IS_TAG_ATTR_SET_FOR_ALL_PARM, &RBC_BASE::Init__set_tag_for_all_parm, &RBC_BASE::Eval__is_tag_attr_set_for_all_parm, "Is_tag_attr_set_for_all_parm")
DEF_RBC_OP(RBC_OP_OR_TAG, &RBC_BASE::Init__or_tag, &RBC_BASE::Eval__or_tag, "Or_tag")
DEF_RBC_OP(RBC_OP_MERGE_TAG, &RBC_BASE::Init__merge_tag, &RBC_BASE::Eval__merge_tag, "Merge_tag")
DEF_RBC_OP(RBC_OP_COPY_TAG, &RBC_BASE::Init__copy_tag, &RBC_BASE::Eval__copy_tag, "Copy_tag")
DEF_RBC_OP(RBC_OP_EVAL_TAG, &RBC_BASE::Init__eval_tag, &RBC_BASE::Eval__eval_tag, "Eval_tag")
DEF_RBC_OP(RBC_OP_SET_TAG_CONST_DEFVAL, &RBC_BASE::Init__set_tag_const_defval, NULL, "Set_tag_const_defval")
DEF_RBC_OP(RBC_OP_SET_TAG_INPUT_DEFVAL, &RBC_BASE::Init__set_tag_input_defval, NULL, "Set_tag_input_defval")
DEF_RBC_OP(RBC_OP_DECL_TAG_EQUAL, NULL, &RBC_BASE::Eval__decl_tag_equal, "Decl_tag_equal")
DEF_RBC_OP(RBC_OP_SET_FUNC_TAG, &RBC_BASE::Init__set_func_tag, &RBC_BASE::Eval__set_func_tag, "Set_func_tag")
DEF_RBC_OP(RBC_OP_SET_TY_IS_MUTEX, &RBC_BASE::Init__set_ty_is_mutex, &RBC_BASE::Eval__set_ty_is_mutex, "Set_TY_is_mutex")
DEF_RBC_OP(RBC_OP_SET_TY_IS_ATOMIC, &RBC_BASE::Init__set_ty_is_atomic, &RBC_BASE::Eval__set_ty_is_atomic, "Set_TY_is_atomic")
DEF_RBC_OP(RBC_OP_SET_TY_IS_THREAD, &RBC_BASE::Init__set_ty_is_thread, &RBC_BASE::Eval__set_ty_is_thread, "Set_TY_is_thread")
DEF_RBC_OP(RBC_OP_GET_TYPE_NAME, NULL, &RBC_BASE::Eval__get_type_name, "Get_type_name")
DEF_RBC_OP(RBC_OP_GET_TYPE_KIND, NULL, &RBC_BASE::Eval__get_type_kind, "Get_type_kind")
DEF_RBC_OP(RBC_OP_GET_THIS_POINTER, NULL, &RBC_BASE::Eval__get_this_pointer, "Get_this_pointer")
DEF_RBC_OP(RBC_OP_GET_ARG, NULL, &RBC_BASE::Eval__get_arg, "Get_arg")
DEF_RBC_OP(RBC_OP_GET_RET, NULL, &RBC_BASE::Eval__get_ret, "Get_ret")
DEF_RBC_OP(RBC_OP_GET_ARGCNT, NULL, &RBC_BASE::Eval__get_argcnt, "Get_argcnt")
DEF_RBC_OP(RBC_OP_GET_MEM_SIZE, NULL, &RBC_BASE::Eval__get_mem_size, "Get_mem_size")
DEF_RBC_OP(RBC_OP_GET_VALUE, NULL, &RBC_BASE::Eval__get_value, "Get_value")
DEF_RBC_OP(RBC_OP_GET_ELEM_COUNT, NULL, &RBC_BASE::Eval__get_elem_count, "Get_elem_count")
DEF_RBC_OP(RBC_OP_GET_STRLEN, NULL, &RBC_BASE::Eval__get_strlen, "Get_strlen")
DEF_RBC_OP(RBC_OP_GET_MAX_CALL_DEPTH, NULL, NULL, "Get_max_call_depth")
DEF_RBC_OP(RBC_OP_GET_MAX_STACK_SIZE, NULL, &RBC_BASE::Eval__get_max_stack_size, "Get_max_stack_size")
DEF_RBC_OP(RBC_OP_SET_PARM_TAINTED, NULL, &RBC_BASE::Eval__set_parm_tainted, "Set_parm_tainted")
DEF_RBC_OP(RBC_OP_SET_IMPLICIT_ASSIGN, NULL, &RBC_BASE::Eval__set_implicit_assign, "Set_implicit_assign")
DEF_RBC_OP(RBC_OP_SET_PARM_DEREF, &RBC_BASE::Init__set_parm_deref, &RBC_BASE::Eval__set_parm_deref, "Set_parm_deref")
DEF_RBC_OP(RBC_OP_SET_PARM_MOD, &RBC_BASE::Init__set_parm_mod, &RBC_BASE::Eval__set_parm_mod, "Set_parm_mod")
DEF_RBC_OP(RBC_OP_SET_PARM_BASE_AND_FLD_NAME, NULL, &RBC_BASE::Eval__set_parm_base_and_fld_name, "Set_parm_base_and_fld_name")
DEF_RBC_OP(RBC_OP_SET_FUNC_MAY_SLEEP, NULL, &RBC_BASE::Eval__set_func_may_sleep, "Set_func_may_sleep")
DEF_RBC_OP(RBC_OP_SET_ATOMIC_REGION_BEGIN, NULL, &RBC_BASE::Eval__set_atomic_region_begin, "Set_atomic_region_begin")
DEF_RBC_OP(RBC_OP_SET_ATOMIC_REGION_END, NULL, &RBC_BASE::Eval__set_atomic_region_end, "Set_atomic_region_end")
DEF_RBC_OP(RBC_OP_SET_FUNC_ATOMIC, NULL, &RBC_BASE::Eval__set_func_atomic, "Set_func_atomic")
DEF_RBC_OP(RBC_OP_SET_FUNC_SHUTDOWN, NULL, &RBC_BASE::Eval__set_func_shutdown, "Set_func_shutdown")
DEF_RBC_OP(RBC_OP_SET_FUNC_ERRNO_SETTING, NULL, &RBC_BASE::Eval__set_func_errno_setting, "Set_func_errno_setting")
DEF_RBC_OP(RBC_OP_SET_FUNC_CONTAINER_INIT, NULL, &RBC_BASE::Eval__set_func_container_init, "Set_func_container_init")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_APPEND, NULL, &RBC_BASE::Eval__set_func_coll_append, "Set_func_coll_append")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_INSERT, NULL, &RBC_BASE::Eval__set_func_coll_insert, "Set_func_coll_insert")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_REMOVE, NULL, &RBC_BASE::Eval__set_func_coll_remove, "Set_func_coll_remove")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_GET, NULL, &RBC_BASE::Eval__set_func_coll_get, "Set_func_coll_get")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_BACK, NULL, &RBC_BASE::Eval__set_func_coll_back, "Set_func_coll_back")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_END, NULL, &RBC_BASE::Eval__set_func_coll_end, "Set_func_coll_end")
DEF_RBC_OP(RBC_OP_SET_FUNC_MAP_PUT, NULL, &RBC_BASE::Eval__set_func_map_put, "Set_func_map_put")
DEF_RBC_OP(RBC_OP_SET_FUNC_MAP_GET, NULL, &RBC_BASE::Eval__set_func_map_get, "Set_func_map_get")
DEF_RBC_OP(RBC_OP_SET_FUNC_STR_GET, NULL, &RBC_BASE::Eval__set_func_str_get, "Set_func_str_get")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_APPEND_REF, NULL, &RBC_BASE::Eval__set_func_coll_append_ref, "Set_func_coll_append_ref")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_GET_REF, NULL, &RBC_BASE::Eval__set_func_coll_get_ref, "Set_func_coll_get_ref")
DEF_RBC_OP(RBC_OP_SET_FUNC_COLL_BACK_REF, NULL, &RBC_BASE::Eval__set_func_coll_back_ref, "Set_func_coll_back_ref")
DEF_RBC_OP(RBC_OP_SET_FUNC_MAP_PUT_REF, NULL, &RBC_BASE::Eval__set_func_map_put_ref, "Set_func_map_put_ref")
DEF_RBC_OP(RBC_OP_SET_FUNC_MAP_GET_REF, NULL, &RBC_BASE::Eval__set_func_map_get_ref, "Set_func_map_get_ref")
DEF_RBC_OP(RBC_OP_SET_FUNC_THREAD, &RBC_BASE::Init__set_func_thread, NULL, "Set_func_thread")
DEF_RBC_OP(RBC_OP_SET_CLASS_SENSITIVE, &RBC_BASE::Init__set_class_sensitive, &RBC_BASE::Eval__set_class_sensitive, "Set_class_sensitive")
DEF_RBC_OP(RBC_OP_HARD_CODED_PASSWORD, NULL, &RBC_BASE::Eval__hard_coded_password, "Hard_coded_password")
DEF_RBC_OP(RBC_OP_IS_NULL_TERM_STR, NULL, &RBC_BASE::Eval__is_null_term_str, "Is_null_term_str")
DEF_RBC_OP(RBC_OP_IS_NULL_TERM_SET, NULL, &RBC_BASE::Eval__is_null_term_set, "Is_null_term_set")
DEF_RBC_OP(RBC_OP_IS_CONST_STR_EQ, NULL, &RBC_BASE::Eval__is_cst_str_eq, "Is_const_str_eq")
DEF_RBC_OP(RBC_OP_IS_STR_EQ, NULL, &RBC_BASE::Eval__is_str_eq, "Is_str_eq")
DEF_RBC_OP(RBC_OP_IS_STR_SUB, NULL, &RBC_BASE::Eval__is_str_sub, "Is_str_sub")
DEF_RBC_OP(RBC_OP_IS_STR_MATCH, NULL, &RBC_BASE::Eval__is_str_match, "Is_str_match")
DEF_RBC_OP(RBC_OP_IS_PARM_CONSTANT, NULL, &RBC_BASE::Eval__is_parm_constant, "Is_parm_constant")
DEF_RBC_OP(RBC_OP_IS_INIT_BY_CONST_STR, NULL, &RBC_BASE::Eval__is_init_by_const_str, "Is_init_by_const_str")
DEF_RBC_OP(RBC_OP_IS_COMPRESSION_EXTRACTION_SAFE, NULL, &RBC_BASE::Eval__is_compression_extraction_safe, "Is_compression_extraction_safe")
DEF_RBC_OP(RBC_OP_IS_PARM_PLAIN_OLD_FUNC, NULL, &RBC_BASE::Eval__is_parm_plain_old_func, "Is_parm_plain_old_func")
DEF_RBC_OP(RBC_OP_IS_RETURN_VALUE_CHECKED, NULL, &RBC_BASE::Eval__is_return_value_checked, "Is_return_value_checked")
DEF_RBC_OP(RBC_OP_IS_PARM_TYPE_ADDR_PASSED, &RBC_BASE::Init__is_parm_type_addr_passed,&RBC_BASE::Eval__is_parm_type_addr_passed, "Is_parm_type_addr_passed")
DEF_RBC_OP(RBC_OP_FSM_USE, &RBC_BASE::Init__fsm_use, NULL, "Fsm_use")
DEF_RBC_OP(RBC_OP_FSM_BUILD_BEGIN, &RBC_BASE::Init__fsm_build_begin, NULL, "Fsm_build_begin")
DEF_RBC_OP(RBC_OP_FSM_NEW_START_STATE, &RBC_BASE::Init__fsm_new_start_state, NULL, "Fsm_new_start_state")
DEF_RBC_OP(RBC_OP_FSM_NEW_FINAL_STATE, &RBC_BASE::Init__fsm_new_final_state, NULL, "Fsm_new_final_state")
DEF_RBC_OP(RBC_OP_FSM_ADD_TRANSITION, &RBC_BASE::Init__fsm_add_transition, NULL, "Fsm_add_transition")
DEF_RBC_OP(RBC_OP_FSM_SET_DEFAULT_ACTION, &RBC_BASE::Init__fsm_set_default_action, NULL, "Fsm_set_default_action")
DEF_RBC_OP(RBC_OP_FSM_BUILD_END, &RBC_BASE::Init__fsm_build_end, NULL, "Fsm_build_end")
DEF_RBC_OP(RBC_OP_EXEC_EVAL, NULL, &RBC_BASE::Eval__exec_eval, "Exec_eval")
DEF_RBC_OP(RBC_OP_JNI_MODEL_PRAGMA, NULL, &RBC_BASE::Eval__jni_model_pragma, "Jni_model_pragma")
// builtin xvsa range operation
DEF_RBC_OP(RBC_OP_XVSA_RANGE, NULL, NULL, BUILTIN_XVSA_RANGE)
DEF_RBC_OP(RBC_OP_XVSA_NE, NULL, NULL, BUILTIN_XVSA_NE)
DEF_RBC_OP(RBC_OP_XVSA_COMPARE, NULL, NULL, BUILTIN_XVSA_COMPARE)
// special rbc op
DEF_RBC_OP(RBC_OP_VALUE_OF, NULL, &RBC_BASE::Eval__valueof, "valueOf")  // convert INT64->java object
