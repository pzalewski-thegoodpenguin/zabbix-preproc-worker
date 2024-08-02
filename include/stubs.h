
#define DBadd_condition_alloc(...) stub(__FILE__, __LINE__, __func__)
#define DBadd_str_condition_alloc(...) stub(__FILE__, __LINE__, __func__)
#define DBbegin(...) stub(__FILE__, __LINE__, __func__)
#define DBcommit(...) stub(__FILE__, __LINE__, __func__)
#define DBdyn_escape_string(...) stub_str(__FILE__, __LINE__, __func__)
#define DBexecute(...) stub_i(__FILE__, __LINE__, __func__)
#define DBexecute_overflowed_sql(...) stub_i(__FILE__, __LINE__, __func__)
#define DBfetch(...) stub_ptr(__FILE__, __LINE__, __func__)
#define DBfree_result(...) stub(__FILE__, __LINE__, __func__)
#define DBget_maxid_num(...) stub_i(__FILE__, __LINE__, __func__)
#define DBselect(...) stub_ptr(__FILE__, __LINE__, __func__)
#define DBselectN(...) stub_ptr(__FILE__, __LINE__, __func__)
#define DBselect_uint64(...) stub(__FILE__, __LINE__, __func__)
#define DBupdate_itservices(...) stub(__FILE__, __LINE__, __func__)
#define DCconfig_clean_triggers(...) stub(__FILE__, __LINE__, __func__)
#define DCconfig_get_triggers_by_triggerids(...) stub(__FILE__, __LINE__, __func__)
#define DCconfig_lock_triggers_by_triggerids(...) stub(__FILE__, __LINE__, __func__)
#define DCconfig_triggers_apply_changes(...) stub(__FILE__, __LINE__, __func__)
#define DCget_hosts_by_functionids(...) stub(__FILE__, __LINE__, __func__)
#define DCget_internal_action_count(...) stub_i(__FILE__, __LINE__, __func__)
#define get_functionids(...) stub(__FILE__, __LINE__, __func__)
#define process_actions(...) stub(__FILE__, __LINE__, __func__)
//#define stub(...) stub(__FILE__, __LINE__, __func__)
#define zbx_append_trigger_diff(...) stub(__FILE__, __LINE__, __func__)
#define zbx_db_insert_add_values(...) stub(__FILE__, __LINE__, __func__)
#define zbx_db_insert_autoincrement(...) stub(__FILE__, __LINE__, __func__)
#define zbx_db_insert_clean(...) stub(__FILE__, __LINE__, __func__)
#define zbx_db_insert_execute(...) stub(__FILE__, __LINE__, __func__)
#define zbx_db_insert_prepare(...) stub(__FILE__, __LINE__, __func__)
#define zbx_db_lock_maintenanceids(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_db_save_trigger_changes(...) stub(__FILE__, __LINE__, __func__)
#define zbx_dc_config_history_sync_get_item_tags_by_functionids(...) stub(__FILE__, __LINE__, __func__)
#define zbx_dc_correlation_rules_free(...) stub(__FILE__, __LINE__, __func__)
#define zbx_dc_correlation_rules_get(...) stub(__FILE__, __LINE__, __func__)
#define zbx_dc_correlation_rules_init(...) stub(__FILE__, __LINE__, __func__)
#define zbx_dc_get_event_maintenances(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_dc_get_nested_hostgroupids(...) stub(__FILE__, __LINE__, __func__)
#define zbx_dc_get_running_maintenanceids(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_dc_get_trigger_dependencies(...) stub(__FILE__, __LINE__, __func__)
//#define zbx_event_suppress_query_free(...) stub(__FILE__, __LINE__, __func__)
#define zbx_free_item_tag(...) stub(__FILE__, __LINE__, __func__)
//#define zbx_free_tag(...) stub(__FILE__, __LINE__, __func__)
#define zbx_is_export_enabled(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_problems_export_flush(...) stub(__FILE__, __LINE__, __func__)
#define zbx_problems_export_write(...) stub(__FILE__, __LINE__, __func__)
//#define zbx_trigger_diff_free(...) stub(__FILE__, __LINE__, __func__)

#define zbx_db_strlen_n(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_db_mock_field_init(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_db_mock_field_append(...) stub_i(__FILE__, __LINE__, __func__)

#define zbx_ipc_service_start(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_service_recv(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_client_send(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_client_close(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_client_addref(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_client_connected(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_message_free(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_message_copy(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_message_clean(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_message_init(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_client_release(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_socket_open(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_socket_read(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_socket_write(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_ipc_async_exchange(...) stub_i(__FILE__, __LINE__, __func__)

#define update_selfmon_counter(...) stub_i(__FILE__, __LINE__, __func__)

#define init_result(...) stub(__FILE__, __LINE__, __func__)
#define dc_add_history(...) stub_i(__FILE__, __LINE__, __func__)
#define DCconfig_get_preprocessable_items(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_prometheus_pattern(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_prometheus_to_json(...) stub_i(__FILE__, __LINE__, __func__)
#define DBdyn_escape_string_len(...) stub_str(__FILE__, __LINE__, __func__)
#define DBrollback(...) stub_i(__FILE__, __LINE__, __func__)
#define dc_flush_history(...) stub_i(__FILE__, __LINE__, __func__)
#define free_result(...) stub_i(__FILE__, __LINE__, __func__)
#define substitute_simple_macros(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_db_trigger_clean(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_lld_process_agent_result(...) stub_i(__FILE__, __LINE__, __func__)
#define zbx_tls_version(...) stub(__FILE__, __LINE__, __func__)
#define test_parameter(...) stub(__FILE__, __LINE__, __func__)

#ifndef __STUB_H__
#define __STUB_H__


void stub(const char *file, int line, const char *func);
int stub_i(const char *file, int line, const char *func);
void *stub_ptr(const char *file, int line, const char *func);
char *stub_str(const char *file, int line, const char * func);
char *stub_allocstr(const char *file, int line, const char *func);


#ifdef __STUB_IMPL__
void stub(const char *file, int line, const char *func) {
    fprintf(stderr, "%s:%d: (in %s()): stub\n", file, line, func);
}

int stub_i(const char *file, int line, const char *func) {
    stub(file, line, func);
    return 0;
}

void *stub_ptr(const char *file, int line, const char *func) {
    stub(file, line, func);
    return NULL;
}

char *stub_str(const char *file, int line, const char * func) {
    stub(file, line, func);
    return "";
}

char *stub_allocstr(const char *file, int line, const char *func) {
    return strdup(stub_str(file, line, func));
}


void zbx_trigger_diff_free(zbx_trigger_diff_t *diff) {

}

void zbx_free_tag(zbx_tag_t *tag) {

}

void zbx_event_suppress_query_free(zbx_event_suppress_query_t *query) {

}

volatile sig_atomic_t   sig_exiting;
#endif /* __STUB_IMPL__ */

#endif /* __STUB_H__ */
