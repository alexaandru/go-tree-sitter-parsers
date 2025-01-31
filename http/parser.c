#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 306
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 64

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
  anon_sym_AT = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_EQ = 4,
  aux_sym_comment_token3 = 5,
  aux_sym_comment_token4 = 6,
  aux_sym_comment_token5 = 7,
  aux_sym_request_separator_token1 = 8,
  sym_method = 9,
  aux_sym_http_version_token1 = 10,
  aux_sym__target_url_line_token1 = 11,
  aux_sym__target_url_line_token2 = 12,
  sym_status_code = 13,
  sym_status_text = 14,
  anon_sym_COLON = 15,
  anon_sym_LBRACE_LBRACE = 16,
  anon_sym_RBRACE_RBRACE = 17,
  anon_sym_LT = 18,
  aux_sym_pre_request_script_token1 = 19,
  anon_sym_GT = 20,
  anon_sym_LBRACE_PERCENT = 21,
  anon_sym_PERCENT_RBRACE = 22,
  aux_sym_res_redirect_token1 = 23,
  anon_sym_AT2 = 24,
  aux_sym_xml_body_token1 = 25,
  aux_sym_json_body_token1 = 26,
  aux_sym_graphql_data_token1 = 27,
  aux_sym_graphql_json_body_token1 = 28,
  anon_sym_LT2 = 29,
  anon_sym_DASH_DASH = 30,
  aux_sym_multipart_form_data_token1 = 31,
  aux_sym_multipart_form_data_token2 = 32,
  aux_sym_raw_body_token1 = 33,
  aux_sym__raw_body_token1 = 34,
  sym__not_comment = 35,
  sym_header_entity = 36,
  sym_identifier = 37,
  aux_sym_path_token1 = 38,
  aux_sym__blank_line_token1 = 39,
  sym_document = 40,
  sym_comment = 41,
  sym_var_comment = 42,
  sym_request_separator = 43,
  sym_section = 44,
  sym__section_content = 45,
  sym_http_version = 46,
  aux_sym__target_url_line = 47,
  sym_target_url = 48,
  sym_response = 49,
  sym_request = 50,
  sym_header = 51,
  sym_variable = 52,
  sym_pre_request_script = 53,
  sym_res_handler_script = 54,
  sym_script = 55,
  sym_res_redirect = 56,
  sym_variable_declaration = 57,
  sym_xml_body = 58,
  sym_json_body = 59,
  sym_graphql_body = 60,
  sym_graphql_data = 61,
  sym_graphql_json_body = 62,
  sym__external_body = 63,
  sym_external_body = 64,
  sym_multipart_form_data = 65,
  sym_raw_body = 66,
  sym__raw_body = 67,
  sym_path = 68,
  sym_value = 69,
  sym__blank_line = 70,
  aux_sym_document_repeat1 = 71,
  aux_sym_target_url_repeat1 = 72,
  aux_sym_request_repeat1 = 73,
  aux_sym_request_repeat2 = 74,
  aux_sym_request_repeat3 = 75,
  aux_sym_request_repeat4 = 76,
  aux_sym_script_repeat1 = 77,
  aux_sym_multipart_form_data_repeat1 = 78,
  aux_sym_path_repeat1 = 79,
  aux_sym_value_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_AT] = "@",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_EQ] = "=",
  [aux_sym_comment_token3] = "comment_token3",
  [aux_sym_comment_token4] = "comment_token4",
  [aux_sym_comment_token5] = "comment_token5",
  [aux_sym_request_separator_token1] = "request_separator_token1",
  [sym_method] = "method",
  [aux_sym_http_version_token1] = "http_version_token1",
  [aux_sym__target_url_line_token1] = "_target_url_line_token1",
  [aux_sym__target_url_line_token2] = "_target_url_line_token2",
  [sym_status_code] = "status_code",
  [sym_status_text] = "status_text",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LT] = "<",
  [aux_sym_pre_request_script_token1] = "pre_request_script_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [aux_sym_res_redirect_token1] = "res_redirect_token1",
  [anon_sym_AT2] = "@",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_graphql_data_token1] = "graphql_data_token1",
  [aux_sym_graphql_json_body_token1] = "graphql_json_body_token1",
  [anon_sym_LT2] = "<",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_multipart_form_data_token1] = "multipart_form_data_token1",
  [aux_sym_multipart_form_data_token2] = "multipart_form_data_token2",
  [aux_sym_raw_body_token1] = "raw_body_token1",
  [aux_sym__raw_body_token1] = "_raw_body_token1",
  [sym__not_comment] = "_not_comment",
  [sym_header_entity] = "header_entity",
  [sym_identifier] = "identifier",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_document] = "document",
  [sym_comment] = "comment",
  [sym_var_comment] = "comment",
  [sym_request_separator] = "request_separator",
  [sym_section] = "section",
  [sym__section_content] = "_section_content",
  [sym_http_version] = "http_version",
  [aux_sym__target_url_line] = "_target_url_line",
  [sym_target_url] = "target_url",
  [sym_response] = "response",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_pre_request_script] = "pre_request_script",
  [sym_res_handler_script] = "res_handler_script",
  [sym_script] = "script",
  [sym_res_redirect] = "res_redirect",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_graphql_data] = "graphql_data",
  [sym_graphql_json_body] = "json_body",
  [sym__external_body] = "_external_body",
  [sym_external_body] = "external_body",
  [sym_multipart_form_data] = "multipart_form_data",
  [sym_raw_body] = "raw_body",
  [sym__raw_body] = "_raw_body",
  [sym_path] = "path",
  [sym_value] = "value",
  [sym__blank_line] = "_blank_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_request_repeat3] = "request_repeat3",
  [aux_sym_request_repeat4] = "request_repeat4",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_multipart_form_data_repeat1] = "multipart_form_data_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [aux_sym_comment_token4] = aux_sym_comment_token4,
  [aux_sym_comment_token5] = aux_sym_comment_token5,
  [aux_sym_request_separator_token1] = aux_sym_request_separator_token1,
  [sym_method] = sym_method,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [aux_sym__target_url_line_token1] = aux_sym__target_url_line_token1,
  [aux_sym__target_url_line_token2] = aux_sym__target_url_line_token2,
  [sym_status_code] = sym_status_code,
  [sym_status_text] = sym_status_text,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_pre_request_script_token1] = aux_sym_pre_request_script_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [aux_sym_res_redirect_token1] = aux_sym_res_redirect_token1,
  [anon_sym_AT2] = anon_sym_AT,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_graphql_data_token1] = aux_sym_graphql_data_token1,
  [aux_sym_graphql_json_body_token1] = aux_sym_graphql_json_body_token1,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_multipart_form_data_token1] = aux_sym_multipart_form_data_token1,
  [aux_sym_multipart_form_data_token2] = aux_sym_multipart_form_data_token2,
  [aux_sym_raw_body_token1] = aux_sym_raw_body_token1,
  [aux_sym__raw_body_token1] = aux_sym__raw_body_token1,
  [sym__not_comment] = sym__not_comment,
  [sym_header_entity] = sym_header_entity,
  [sym_identifier] = sym_identifier,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym_document] = sym_document,
  [sym_comment] = sym_comment,
  [sym_var_comment] = sym_comment,
  [sym_request_separator] = sym_request_separator,
  [sym_section] = sym_section,
  [sym__section_content] = sym__section_content,
  [sym_http_version] = sym_http_version,
  [aux_sym__target_url_line] = aux_sym__target_url_line,
  [sym_target_url] = sym_target_url,
  [sym_response] = sym_response,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_pre_request_script] = sym_pre_request_script,
  [sym_res_handler_script] = sym_res_handler_script,
  [sym_script] = sym_script,
  [sym_res_redirect] = sym_res_redirect,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_graphql_data] = sym_graphql_data,
  [sym_graphql_json_body] = sym_json_body,
  [sym__external_body] = sym__external_body,
  [sym_external_body] = sym_external_body,
  [sym_multipart_form_data] = sym_multipart_form_data,
  [sym_raw_body] = sym_raw_body,
  [sym__raw_body] = sym__raw_body,
  [sym_path] = sym_path,
  [sym_value] = sym_value,
  [sym__blank_line] = sym__blank_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_request_repeat3] = aux_sym_request_repeat3,
  [aux_sym_request_repeat4] = aux_sym_request_repeat4,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_multipart_form_data_repeat1] = aux_sym_multipart_form_data_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_separator_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__target_url_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__target_url_line_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pre_request_script_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_res_redirect_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graphql_data_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graphql_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multipart_form_data_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_body_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__not_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_header_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__blank_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_var_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_request_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_content] = {
    .visible = false,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__target_url_line] = {
    .visible = false,
    .named = false,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_request_script] = {
    .visible = true,
    .named = true,
  },
  [sym_res_handler_script] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_res_redirect] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_body] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_body] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_data] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym__external_body] = {
    .visible = false,
    .named = true,
  },
  [sym_external_body] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_body] = {
    .visible = false,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_header = 2,
  field_method = 3,
  field_name = 4,
  field_path = 5,
  field_request = 6,
  field_url = 7,
  field_value = 8,
  field_version = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_header] = "header",
  [field_method] = "method",
  [field_name] = "name",
  [field_path] = "path",
  [field_request] = "request",
  [field_url] = "url",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 3},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 3},
  [20] = {.index = 30, .length = 1},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 3},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 2},
  [26] = {.index = 42, .length = 3},
  [27] = {.index = 45, .length = 3},
  [28] = {.index = 48, .length = 3},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 3},
  [31] = {.index = 56, .length = 3},
  [32] = {.index = 59, .length = 2},
  [33] = {.index = 61, .length = 3},
  [34] = {.index = 64, .length = 2},
  [35] = {.index = 66, .length = 1},
  [36] = {.index = 67, .length = 2},
  [37] = {.index = 69, .length = 4},
  [38] = {.index = 73, .length = 3},
  [39] = {.index = 76, .length = 3},
  [40] = {.index = 79, .length = 4},
  [41] = {.index = 83, .length = 2},
  [42] = {.index = 85, .length = 3},
  [43] = {.index = 88, .length = 3},
  [44] = {.index = 91, .length = 4},
  [45] = {.index = 95, .length = 2},
  [46] = {.index = 97, .length = 3},
  [47] = {.index = 100, .length = 1},
  [48] = {.index = 101, .length = 4},
  [49] = {.index = 105, .length = 4},
  [50] = {.index = 109, .length = 4},
  [51] = {.index = 113, .length = 3},
  [52] = {.index = 116, .length = 4},
  [53] = {.index = 120, .length = 3},
  [54] = {.index = 123, .length = 2},
  [55] = {.index = 125, .length = 2},
  [56] = {.index = 127, .length = 4},
  [57] = {.index = 131, .length = 4},
  [58] = {.index = 135, .length = 5},
  [59] = {.index = 140, .length = 4},
  [60] = {.index = 144, .length = 4},
  [61] = {.index = 148, .length = 5},
  [62] = {.index = 153, .length = 4},
  [63] = {.index = 157, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_request, 0, .inherited = true},
  [1] =
    {field_request, 0},
  [2] =
    {field_request, 1, .inherited = true},
  [3] =
    {field_url, 0},
  [4] =
    {field_value, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_header, 0},
  [7] =
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [9] =
    {field_name, 2},
  [10] =
    {field_value, 2},
  [11] =
    {field_method, 0},
    {field_url, 2},
  [13] =
    {field_url, 0},
    {field_version, 2},
  [15] =
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [17] =
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
  [19] =
    {field_body, 0},
  [20] =
    {field_body, 3, .inherited = true},
    {field_url, 0},
  [22] =
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [25] =
    {field_name, 1},
    {field_value, 3},
  [27] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [30] =
    {field_name, 0},
  [31] =
    {field_body, 4, .inherited = true},
    {field_url, 0},
  [33] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [35] =
    {field_body, 4, .inherited = true},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [38] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
  [40] =
    {field_name, 2},
    {field_value, 4},
  [42] =
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [45] =
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [48] =
    {field_body, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [51] =
    {field_name, 1},
    {field_value, 4},
  [53] =
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [56] =
    {field_body, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [59] =
    {field_name, 0},
    {field_value, 2},
  [61] =
    {field_body, 5, .inherited = true},
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [64] =
    {field_body, 5, .inherited = true},
    {field_url, 0},
  [66] =
    {field_path, 2},
  [67] =
    {field_name, 2},
    {field_value, 5},
  [69] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [73] =
    {field_body, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [76] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [79] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [83] =
    {field_name, 1},
    {field_value, 5},
  [85] =
    {field_body, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [88] =
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [91] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [95] =
    {field_name, 0},
    {field_value, 3},
  [97] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [100] =
    {field_path, 3},
  [101] =
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [105] =
    {field_body, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [109] =
    {field_body, 7, .inherited = true},
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [113] =
    {field_body, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [116] =
    {field_body, 7, .inherited = true},
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [120] =
    {field_body, 7, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [123] =
    {field_name, 0},
    {field_value, 4},
  [125] =
    {field_name, 2},
    {field_path, 4},
  [127] =
    {field_body, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [131] =
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [135] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [140] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [144] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [148] =
    {field_body, 9, .inherited = true},
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [153] =
    {field_body, 9, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [157] =
    {field_body, 10, .inherited = true},
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 64,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 84,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 85,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 74,
  [133] = 76,
  [134] = 75,
  [135] = 73,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 75,
  [147] = 76,
  [148] = 148,
  [149] = 73,
  [150] = 150,
  [151] = 100,
  [152] = 152,
  [153] = 153,
  [154] = 74,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 171,
  [178] = 171,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 167,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 168,
  [194] = 192,
  [195] = 192,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 198,
  [203] = 200,
  [204] = 201,
  [205] = 201,
  [206] = 199,
  [207] = 199,
  [208] = 198,
  [209] = 200,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 211,
  [220] = 211,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 231,
  [241] = 241,
  [242] = 223,
  [243] = 231,
  [244] = 241,
  [245] = 245,
  [246] = 236,
  [247] = 241,
  [248] = 248,
  [249] = 236,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 259,
  [283] = 267,
  [284] = 262,
  [285] = 268,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 259,
  [292] = 267,
  [293] = 262,
  [294] = 286,
  [295] = 286,
  [296] = 251,
  [297] = 290,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 251,
  [302] = 290,
  [303] = 303,
  [304] = 304,
  [305] = 305,
};

static TSCharacterRange aux_sym__target_url_line_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5}, {0xb9, 0xba}, {0xbc, 0xbe},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x660, 0x669}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x966, 0x96f}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9e6, 0x9f1},
  {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36},
  {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa6f}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8},
  {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xae6, 0xaef}, {0xaf9, 0xaf9},
  {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d},
  {0xb5f, 0xb61}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xbe6, 0xbf2}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc66, 0xc6f},
  {0xc78, 0xc7e}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd58, 0xd61}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb},
  {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xde6, 0xdef}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x1049}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x1090, 0x1099}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1369, 0x137c}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x17e0, 0x17e9},
  {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1a80, 0x1a89},
  {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b83, 0x1ba0}, {0x1bae, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071}, {0x2074, 0x2079}, {0x207f, 0x2089},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2150, 0x2189}, {0x2460, 0x249b},
  {0x24ea, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27},
  {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe},
  {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x3192, 0x3195},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289}, {0x32b1, 0x32bf}, {0x3400, 0x3400},
  {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7},
  {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa900, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9e4},
  {0xa9e6, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf},
  {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4},
  {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2},
  {0xabf0, 0xabf9}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06},
  {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44},
  {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff10, 0xff19},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10107, 0x10133}, {0x10140, 0x10178},
  {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527},
  {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9},
  {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805},
  {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876}, {0x10879, 0x1089e}, {0x108a7, 0x108af},
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b},
};

static TSCharacterRange aux_sym__target_url_line_token2_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, 0x1f}, {'!', '/'}, {':', '@'}, {'[', '`'}, {'{', 0x9f}, {0xa1, 0xa9},
  {0xab, 0xb1}, {0xb4, 0xb4}, {0xb6, 0xb8}, {0xbb, 0xbb}, {0xbf, 0xbf}, {0xd7, 0xd7}, {0xf7, 0xf7}, {0x2c2, 0x2c5},
  {0x2d2, 0x2df}, {0x2e5, 0x2eb}, {0x2ed, 0x2ed}, {0x2ef, 0x36f}, {0x375, 0x375}, {0x378, 0x379}, {0x37e, 0x37e}, {0x380, 0x385},
  {0x387, 0x387}, {0x38b, 0x38b}, {0x38d, 0x38d}, {0x3a2, 0x3a2}, {0x3f6, 0x3f6}, {0x482, 0x489}, {0x530, 0x530}, {0x557, 0x558},
  {0x55a, 0x55f}, {0x589, 0x5cf}, {0x5eb, 0x5ee}, {0x5f3, 0x61f}, {0x64b, 0x65f}, {0x66a, 0x66d}, {0x670, 0x670}, {0x6d4, 0x6d4},
  {0x6d6, 0x6e4}, {0x6e7, 0x6ed}, {0x6fd, 0x6fe}, {0x700, 0x70f}, {0x711, 0x711}, {0x730, 0x74c}, {0x7a6, 0x7b0}, {0x7b2, 0x7bf},
  {0x7eb, 0x7f3}, {0x7f6, 0x7f9}, {0x7fb, 0x7ff}, {0x816, 0x819}, {0x81b, 0x823}, {0x825, 0x827}, {0x829, 0x83f}, {0x859, 0x85f},
  {0x86b, 0x86f}, {0x888, 0x888}, {0x88f, 0x89f}, {0x8ca, 0x903}, {0x93a, 0x93c}, {0x93e, 0x94f}, {0x951, 0x957}, {0x962, 0x965},
  {0x970, 0x970}, {0x981, 0x984}, {0x98d, 0x98e}, {0x991, 0x992}, {0x9a9, 0x9a9}, {0x9b1, 0x9b1}, {0x9b3, 0x9b5}, {0x9ba, 0x9bc},
  {0x9be, 0x9cd}, {0x9cf, 0x9db}, {0x9de, 0x9de}, {0x9e2, 0x9e5}, {0x9f2, 0x9f3}, {0x9fa, 0x9fb}, {0x9fd, 0xa04}, {0xa0b, 0xa0e},
  {0xa11, 0xa12}, {0xa29, 0xa29}, {0xa31, 0xa31}, {0xa34, 0xa34}, {0xa37, 0xa37}, {0xa3a, 0xa58}, {0xa5d, 0xa5d}, {0xa5f, 0xa65},
  {0xa70, 0xa71}, {0xa75, 0xa84}, {0xa8e, 0xa8e}, {0xa92, 0xa92}, {0xaa9, 0xaa9}, {0xab1, 0xab1}, {0xab4, 0xab4}, {0xaba, 0xabc},
  {0xabe, 0xacf}, {0xad1, 0xadf}, {0xae2, 0xae5}, {0xaf0, 0xaf8}, {0xafa, 0xb04}, {0xb0d, 0xb0e}, {0xb11, 0xb12}, {0xb29, 0xb29},
  {0xb31, 0xb31}, {0xb34, 0xb34}, {0xb3a, 0xb3c}, {0xb3e, 0xb5b}, {0xb5e, 0xb5e}, {0xb62, 0xb65}, {0xb70, 0xb70}, {0xb78, 0xb82},
  {0xb84, 0xb84}, {0xb8b, 0xb8d}, {0xb91, 0xb91}, {0xb96, 0xb98}, {0xb9b, 0xb9b}, {0xb9d, 0xb9d}, {0xba0, 0xba2}, {0xba5, 0xba7},
  {0xbab, 0xbad}, {0xbba, 0xbcf}, {0xbd1, 0xbe5}, {0xbf3, 0xc04}, {0xc0d, 0xc0d}, {0xc11, 0xc11}, {0xc29, 0xc29}, {0xc3a, 0xc3c},
  {0xc3e, 0xc57}, {0xc5b, 0xc5c}, {0xc5e, 0xc5f}, {0xc62, 0xc65}, {0xc70, 0xc77}, {0xc7f, 0xc7f}, {0xc81, 0xc84}, {0xc8d, 0xc8d},
  {0xc91, 0xc91}, {0xca9, 0xca9}, {0xcb4, 0xcb4}, {0xcba, 0xcbc}, {0xcbe, 0xcdc}, {0xcdf, 0xcdf}, {0xce2, 0xce5}, {0xcf0, 0xcf0},
  {0xcf3, 0xd03}, {0xd0d, 0xd0d}, {0xd11, 0xd11}, {0xd3b, 0xd3c}, {0xd3e, 0xd4d}, {0xd4f, 0xd53}, {0xd57, 0xd57}, {0xd62, 0xd65},
  {0xd79, 0xd79}, {0xd80, 0xd84}, {0xd97, 0xd99}, {0xdb2, 0xdb2}, {0xdbc, 0xdbc}, {0xdbe, 0xdbf}, {0xdc7, 0xde5}, {0xdf0, 0xe00},
  {0xe31, 0xe31}, {0xe34, 0xe3f}, {0xe47, 0xe4f}, {0xe5a, 0xe80}, {0xe83, 0xe83}, {0xe85, 0xe85}, {0xe8b, 0xe8b}, {0xea4, 0xea4},
  {0xea6, 0xea6}, {0xeb1, 0xeb1}, {0xeb4, 0xebc}, {0xebe, 0xebf}, {0xec5, 0xec5}, {0xec7, 0xecf}, {0xeda, 0xedb}, {0xee0, 0xeff},
  {0xf01, 0xf1f}, {0xf34, 0xf3f}, {0xf48, 0xf48}, {0xf6d, 0xf87}, {0xf8d, 0xfff}, {0x102b, 0x103e}, {0x104a, 0x104f}, {0x1056, 0x1059},
  {0x105e, 0x1060}, {0x1062, 0x1064}, {0x1067, 0x106d}, {0x1071, 0x1074}, {0x1082, 0x108d}, {0x108f, 0x108f}, {0x109a, 0x109f}, {0x10c6, 0x10c6},
  {0x10c8, 0x10cc}, {0x10ce, 0x10cf}, {0x10fb, 0x10fb}, {0x1249, 0x1249}, {0x124e, 0x124f}, {0x1257, 0x1257}, {0x1259, 0x1259}, {0x125e, 0x125f},
  {0x1289, 0x1289}, {0x128e, 0x128f}, {0x12b1, 0x12b1}, {0x12b6, 0x12b7}, {0x12bf, 0x12bf}, {0x12c1, 0x12c1}, {0x12c6, 0x12c7}, {0x12d7, 0x12d7},
  {0x1311, 0x1311}, {0x1316, 0x1317}, {0x135b, 0x1368}, {0x137d, 0x137f}, {0x1390, 0x139f}, {0x13f6, 0x13f7}, {0x13fe, 0x1400}, {0x166d, 0x166e},
  {0x169b, 0x169f}, {0x16eb, 0x16ed}, {0x16f9, 0x16ff}, {0x1712, 0x171e}, {0x1732, 0x173f}, {0x1752, 0x175f}, {0x176d, 0x176d}, {0x1771, 0x177f},
  {0x17b4, 0x17d6}, {0x17d8, 0x17db}, {0x17dd, 0x17df}, {0x17ea, 0x17ef}, {0x17fa, 0x180f}, {0x181a, 0x181f}, {0x1879, 0x187f}, {0x1885, 0x1886},
  {0x18a9, 0x18a9}, {0x18ab, 0x18af}, {0x18f6, 0x18ff}, {0x191f, 0x1945}, {0x196e, 0x196f}, {0x1975, 0x197f}, {0x19ac, 0x19af}, {0x19ca, 0x19cf},
  {0x19db, 0x19ff}, {0x1a17, 0x1a1f}, {0x1a55, 0x1a7f}, {0x1a8a, 0x1a8f}, {0x1a9a, 0x1aa6}, {0x1aa8, 0x1b04}, {0x1b34, 0x1b44}, {0x1b4d, 0x1b4f},
  {0x1b5a, 0x1b82}, {0x1ba1, 0x1bad}, {0x1be6, 0x1bff}, {0x1c24, 0x1c3f}, {0x1c4a, 0x1c4c}, {0x1c7e, 0x1c7f}, {0x1c89, 0x1c8f}, {0x1cbb, 0x1cbc},
  {0x1cc0, 0x1ce8}, {0x1ced, 0x1ced}, {0x1cf4, 0x1cf4}, {0x1cf7, 0x1cf9}, {0x1cfb, 0x1cff}, {0x1dc0, 0x1dff}, {0x1f16, 0x1f17}, {0x1f1e, 0x1f1f},
  {0x1f46, 0x1f47}, {0x1f4e, 0x1f4f}, {0x1f58, 0x1f58}, {0x1f5a, 0x1f5a}, {0x1f5c, 0x1f5c}, {0x1f5e, 0x1f5e}, {0x1f7e, 0x1f7f}, {0x1fb5, 0x1fb5},
  {0x1fbd, 0x1fbd}, {0x1fbf, 0x1fc1}, {0x1fc5, 0x1fc5}, {0x1fcd, 0x1fcf}, {0x1fd4, 0x1fd5}, {0x1fdc, 0x1fdf}, {0x1fed, 0x1ff1}, {0x1ff5, 0x1ff5},
  {0x1ffd, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x206f}, {0x2072, 0x2073}, {0x207a, 0x207e}, {0x208a, 0x208f},
  {0x209d, 0x2101}, {0x2103, 0x2106}, {0x2108, 0x2109}, {0x2114, 0x2114}, {0x2116, 0x2118}, {0x211e, 0x2123}, {0x2125, 0x2125}, {0x2127, 0x2127},
  {0x2129, 0x2129}, {0x212e, 0x212e}, {0x213a, 0x213b}, {0x2140, 0x2144}, {0x214a, 0x214d}, {0x214f, 0x214f}, {0x218a, 0x245f}, {0x249c, 0x24e9},
  {0x2500, 0x2775}, {0x2794, 0x2bff}, {0x2ce5, 0x2cea}, {0x2cef, 0x2cf1}, {0x2cf4, 0x2cfc}, {0x2cfe, 0x2cff}, {0x2d26, 0x2d26}, {0x2d28, 0x2d2c},
  {0x2d2e, 0x2d2f}, {0x2d68, 0x2d6e}, {0x2d70, 0x2d7f}, {0x2d97, 0x2d9f}, {0x2da7, 0x2da7}, {0x2daf, 0x2daf}, {0x2db7, 0x2db7}, {0x2dbf, 0x2dbf},
  {0x2dc7, 0x2dc7}, {0x2dcf, 0x2dcf}, {0x2dd7, 0x2dd7}, {0x2ddf, 0x2e2e}, {0x2e30, 0x2fff}, {0x3001, 0x3004}, {0x3008, 0x3020}, {0x302a, 0x3030},
  {0x3036, 0x3037}, {0x303d, 0x3040}, {0x3097, 0x309c}, {0x30a0, 0x30a0}, {0x30fb, 0x30fb}, {0x3100, 0x3104}, {0x3130, 0x3130}, {0x318f, 0x3191},
  {0x3196, 0x319f}, {0x31c0, 0x31ef}, {0x3200, 0x321f}, {0x322a, 0x3247}, {0x3250, 0x3250}, {0x3260, 0x327f}, {0x328a, 0x32b0}, {0x32c0, 0x33ff},
  {0x3401, 0x4dbe}, {0x4dc0, 0x4dff}, {0x4e01, 0x9ffe}, {0xa48d, 0xa4cf}, {0xa4fe, 0xa4ff}, {0xa60d, 0xa60f}, {0xa62c, 0xa63f}, {0xa66f, 0xa67e},
  {0xa69e, 0xa69f}, {0xa6f0, 0xa716}, {0xa720, 0xa721}, {0xa789, 0xa78a}, {0xa7cb, 0xa7cf}, {0xa7d2, 0xa7d2}, {0xa7d4, 0xa7d4}, {0xa7da, 0xa7f1},
  {0xa802, 0xa802}, {0xa806, 0xa806}, {0xa80b, 0xa80b}, {0xa823, 0xa82f}, {0xa836, 0xa83f}, {0xa874, 0xa881}, {0xa8b4, 0xa8cf}, {0xa8da, 0xa8f1},
  {0xa8f8, 0xa8fa}, {0xa8fc, 0xa8fc}, {0xa8ff, 0xa8ff}, {0xa926, 0xa92f}, {0xa947, 0xa95f}, {0xa97d, 0xa983}, {0xa9b3, 0xa9ce}, {0xa9da, 0xa9df},
  {0xa9e5, 0xa9e5}, {0xa9ff, 0xa9ff}, {0xaa29, 0xaa3f}, {0xaa43, 0xaa43}, {0xaa4c, 0xaa4f}, {0xaa5a, 0xaa5f}, {0xaa77, 0xaa79}, {0xaa7b, 0xaa7d},
  {0xaab0, 0xaab0}, {0xaab2, 0xaab4}, {0xaab7, 0xaab8}, {0xaabe, 0xaabf}, {0xaac1, 0xaac1}, {0xaac3, 0xaada}, {0xaade, 0xaadf}, {0xaaeb, 0xaaf1},
  {0xaaf5, 0xab00}, {0xab07, 0xab08}, {0xab0f, 0xab10}, {0xab17, 0xab1f}, {0xab27, 0xab27}, {0xab2f, 0xab2f}, {0xab5b, 0xab5b}, {0xab6a, 0xab6f},
  {0xabe3, 0xabef}, {0xabfa, 0xabff}, {0xac01, 0xd7a2}, {0xd7a4, 0xd7af}, {0xd7c7, 0xd7ca}, {0xd7fc, 0xf8ff}, {0xfa6e, 0xfa6f}, {0xfada, 0xfaff},
  {0xfb07, 0xfb12}, {0xfb18, 0xfb1c}, {0xfb1e, 0xfb1e}, {0xfb29, 0xfb29}, {0xfb37, 0xfb37}, {0xfb3d, 0xfb3d}, {0xfb3f, 0xfb3f}, {0xfb42, 0xfb42},
  {0xfb45, 0xfb45}, {0xfbb2, 0xfbd2}, {0xfd3e, 0xfd4f}, {0xfd90, 0xfd91}, {0xfdc8, 0xfdef}, {0xfdfc, 0xfe6f}, {0xfe75, 0xfe75}, {0xfefd, 0xff0f},
  {0xff1a, 0xff20}, {0xff3b, 0xff40}, {0xff5b, 0xff65}, {0xffbf, 0xffc1}, {0xffc8, 0xffc9}, {0xffd0, 0xffd1}, {0xffd8, 0xffd9}, {0xffdd, 0xffff},
  {0x1000c, 0x1000c}, {0x10027, 0x10027}, {0x1003b, 0x1003b}, {0x1003e, 0x1003e}, {0x1004e, 0x1004f}, {0x1005e, 0x1007f}, {0x100fb, 0x10106}, {0x10134, 0x1013f},
  {0x10179, 0x10189}, {0x1018c, 0x1027f}, {0x1029d, 0x1029f}, {0x102d1, 0x102e0}, {0x102fc, 0x102ff}, {0x10324, 0x1032c}, {0x1034b, 0x1034f}, {0x10376, 0x1037f},
  {0x1039e, 0x1039f}, {0x103c4, 0x103c7}, {0x103d0, 0x103d0}, {0x103d6, 0x103ff}, {0x1049e, 0x1049f}, {0x104aa, 0x104af}, {0x104d4, 0x104d7}, {0x104fc, 0x104ff},
  {0x10528, 0x1052f}, {0x10564, 0x1056f}, {0x1057b, 0x1057b}, {0x1058b, 0x1058b}, {0x10593, 0x10593}, {0x10596, 0x10596}, {0x105a2, 0x105a2}, {0x105b2, 0x105b2},
  {0x105ba, 0x105ba}, {0x105bd, 0x105ff}, {0x10737, 0x1073f}, {0x10756, 0x1075f}, {0x10768, 0x1077f}, {0x10786, 0x10786}, {0x107b1, 0x107b1}, {0x107bb, 0x107ff},
  {0x10806, 0x10807}, {0x10809, 0x10809}, {0x10836, 0x10836}, {0x10839, 0x1083b}, {0x1083d, 0x1083e}, {0x10856, 0x10857}, {0x10877, 0x10878}, {0x1089f, 0x108a6},
  {0x108b0, 0x108df}, {0x108f3, 0x108f3}, {0x108f6, 0x108fa}, {0x1091c, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 948,
        '\n', 948,
        '\r', 949,
        '#', 800,
        '-', 903,
        '/', 904,
        ':', 911,
        '<', 942,
        '=', 808,
        '>', 919,
        '@', 802,
        'C', 873,
        'D', 862,
        'G', 863,
        'H', 868,
        'L', 871,
        'O', 876,
        'P', 861,
        'T', 877,
        'W', 864,
        '[', 906,
        '\\', 908,
        '_', 907,
        '{', 902,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(810);
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(908);
      if (lookahead == '{') ADVANCE(905);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(810);
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(812);
      if (lookahead == '{') ADVANCE(905);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(810);
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(812);
      if (lookahead == '{') ADVANCE(905);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'D') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'E') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'H') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'K') ADVANCE(14);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'L') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'S') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'T') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'y') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 48:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(952);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(952);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 50:
      if ((!eof && lookahead == 00)) ADVANCE(952);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(952);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(935);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead == '\r') ADVANCE(934);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'B') ADVANCE(80);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'D') ADVANCE(819);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(819);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'H') ADVANCE(819);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'K') ADVANCE(63);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'L') ADVANCE(819);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'L') ADVANCE(65);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'Q') ADVANCE(70);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(819);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 92:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 93:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 94:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'y') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 95:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(97);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 96:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 98:
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 100:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == '#') ADVANCE(799);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 101:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == '/') ADVANCE(799);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 102:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 103:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 104:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 105:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'B') ADVANCE(129);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 106:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'C') ADVANCE(118);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 107:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 108:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 109:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 110:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'D') ADVANCE(820);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 111:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'E') ADVANCE(820);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 112:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 113:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 114:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 115:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'H') ADVANCE(820);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 116:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 117:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'I') ADVANCE(124);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 118:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'K') ADVANCE(112);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 119:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'L') ADVANCE(820);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 120:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 121:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 122:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 123:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 124:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 125:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 126:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'P') ADVANCE(116);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 127:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'Q') ADVANCE(119);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 128:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'S') ADVANCE(820);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 129:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 130:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'S') ADVANCE(131);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 131:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 132:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 133:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 134:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 135:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 136:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 137:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 138:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 139:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 140:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 141:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 142:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 143:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'y') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 144:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(146);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 145:
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 146:
      if ((!eof && lookahead == 00)) ADVANCE(956);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(956);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(146);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      if ((!eof && lookahead == 00)) ADVANCE(956);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(956);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      if ((!eof && lookahead == 00)) ADVANCE(900);
      if (lookahead == '\n') ADVANCE(918);
      if (lookahead == '\r') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(908);
      if (lookahead == '{') ADVANCE(905);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(880);
      END_STATE();
    case 149:
      if ((!eof && lookahead == 00)) ADVANCE(814);
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(814);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 150:
      if ((!eof && lookahead == 00)) ADVANCE(814);
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(814);
      if (lookahead == '@') ADVANCE(802);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 151:
      if ((!eof && lookahead == 00)) ADVANCE(814);
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(814);
      if (lookahead == '}') ADVANCE(921);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 152:
      if ((!eof && lookahead == 00)) ADVANCE(814);
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(814);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      if ((!eof && lookahead == 00)) ADVANCE(937);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead == '\r') ADVANCE(936);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 154:
      if (lookahead == '\r') ADVANCE(998);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(997);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(995);
      END_STATE();
    case 155:
      ADVANCE_MAP(
        '\r', 812,
        ':', 911,
        '=', 808,
        'A', 352,
        'B', 304,
        'C', 589,
        'E', 770,
        'F', 305,
        'G', 306,
        'H', 295,
        'I', 211,
        'L', 402,
        'M', 396,
        'N', 403,
        'O', 250,
        'P', 307,
        'R', 315,
        'S', 393,
        'T', 397,
        'U', 274,
        'V', 311,
        '}', 783,
        0, 810,
        '\n', 810,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(785);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      END_STATE();
    case 156:
      if (lookahead == '\r') ADVANCE(918);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(918);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(807);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(806);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(995);
      END_STATE();
    case 157:
      if (lookahead == '\r') ADVANCE(957);
      if (lookahead == '@') ADVANCE(802);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(957);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == '\r') ADVANCE(957);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 160:
      if (lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 161:
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 162:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 163:
      if (lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 164:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 165:
      if (lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 166:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 167:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 168:
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 169:
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 170:
      if (lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 171:
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 172:
      if (lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 173:
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 174:
      if (lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 175:
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 176:
      if (lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 177:
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 178:
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 179:
      if (lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 180:
      if (lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 181:
      if (lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 182:
      if (lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 183:
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 184:
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 185:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 186:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 187:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 188:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 189:
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 190:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 191:
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 192:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 193:
      if (lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 194:
      if (lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 195:
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 196:
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 197:
      if (lookahead == ' ') ADVANCE(730);
      END_STATE();
    case 198:
      if (lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 199:
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 200:
      if (lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 201:
      if (lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 202:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 203:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 204:
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 205:
      if (lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 207:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 208:
      if (lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 209:
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 210:
      if (lookahead == '#') ADVANCE(815);
      END_STATE();
    case 211:
      if (lookahead == '\'') ADVANCE(548);
      if (lookahead == 'M') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(217);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 214:
      if (lookahead == 'A') ADVANCE(268);
      END_STATE();
    case 215:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 216:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 217:
      if (lookahead == 'A') ADVANCE(757);
      END_STATE();
    case 218:
      if (lookahead == 'A') ADVANCE(369);
      if (lookahead == 'E') ADVANCE(772);
      if (lookahead == 'F') ADVANCE(592);
      if (lookahead == 'I') ADVANCE(550);
      if (lookahead == 'M') ADVANCE(616);
      END_STATE();
    case 219:
      if (lookahead == 'A') ADVANCE(755);
      END_STATE();
    case 220:
      if (lookahead == 'A') ADVANCE(531);
      END_STATE();
    case 221:
      if (lookahead == 'A') ADVANCE(534);
      END_STATE();
    case 222:
      if (lookahead == 'B') ADVANCE(283);
      END_STATE();
    case 223:
      if (lookahead == 'C') ADVANCE(289);
      END_STATE();
    case 224:
      if (lookahead == 'C') ADVANCE(251);
      END_STATE();
    case 225:
      if (lookahead == 'C') ADVANCE(244);
      END_STATE();
    case 226:
      if (lookahead == 'C') ADVANCE(233);
      END_STATE();
    case 227:
      if (lookahead == 'C') ADVANCE(596);
      END_STATE();
    case 228:
      if (lookahead == 'C') ADVANCE(481);
      END_STATE();
    case 229:
      if (lookahead == 'D') ADVANCE(817);
      END_STATE();
    case 230:
      if (lookahead == 'D') ADVANCE(452);
      END_STATE();
    case 231:
      if (lookahead == 'D') ADVANCE(440);
      END_STATE();
    case 232:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 233:
      if (lookahead == 'E') ADVANCE(817);
      END_STATE();
    case 234:
      if (lookahead == 'E') ADVANCE(223);
      END_STATE();
    case 235:
      if (lookahead == 'E') ADVANCE(293);
      END_STATE();
    case 236:
      if (lookahead == 'E') ADVANCE(667);
      END_STATE();
    case 237:
      if (lookahead == 'E') ADVANCE(570);
      END_STATE();
    case 238:
      if (lookahead == 'E') ADVANCE(319);
      if (lookahead == 'M') ADVANCE(321);
      END_STATE();
    case 239:
      if (lookahead == 'F') ADVANCE(502);
      END_STATE();
    case 240:
      if (lookahead == 'F') ADVANCE(342);
      END_STATE();
    case 241:
      if (lookahead == 'F') ADVANCE(342);
      if (lookahead == 'R') ADVANCE(442);
      END_STATE();
    case 242:
      if (lookahead == 'F') ADVANCE(622);
      END_STATE();
    case 243:
      if (lookahead == 'G') ADVANCE(343);
      if (lookahead == 'R') ADVANCE(394);
      END_STATE();
    case 244:
      if (lookahead == 'H') ADVANCE(817);
      END_STATE();
    case 245:
      if (lookahead == 'H') ADVANCE(273);
      END_STATE();
    case 246:
      if (lookahead == 'H') ADVANCE(450);
      if (lookahead == 'T') ADVANCE(508);
      END_STATE();
    case 247:
      if (lookahead == 'I') ADVANCE(265);
      END_STATE();
    case 248:
      if (lookahead == 'I') ADVANCE(193);
      END_STATE();
    case 249:
      if (lookahead == 'I') ADVANCE(560);
      END_STATE();
    case 250:
      if (lookahead == 'K') ADVANCE(910);
      END_STATE();
    case 251:
      if (lookahead == 'K') ADVANCE(232);
      END_STATE();
    case 252:
      if (lookahead == 'L') ADVANCE(235);
      END_STATE();
    case 253:
      if (lookahead == 'L') ADVANCE(817);
      END_STATE();
    case 254:
      if (lookahead == 'L') ADVANCE(415);
      END_STATE();
    case 255:
      if (lookahead == 'L') ADVANCE(325);
      END_STATE();
    case 256:
      if (lookahead == 'L') ADVANCE(605);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(451);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(234);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(282);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(625);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(412);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(626);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(627);
      END_STATE();
    case 265:
      if (lookahead == 'O') ADVANCE(260);
      END_STATE();
    case 266:
      if (lookahead == 'O') ADVANCE(224);
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(704);
      END_STATE();
    case 268:
      if (lookahead == 'P') ADVANCE(245);
      END_STATE();
    case 269:
      if (lookahead == 'P') ADVANCE(163);
      END_STATE();
    case 270:
      if (lookahead == 'P') ADVANCE(463);
      END_STATE();
    case 271:
      if (lookahead == 'P') ADVANCE(662);
      END_STATE();
    case 272:
      if (lookahead == 'P') ADVANCE(664);
      END_STATE();
    case 273:
      if (lookahead == 'Q') ADVANCE(253);
      END_STATE();
    case 274:
      if (lookahead == 'R') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(471);
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 275:
      if (lookahead == 'R') ADVANCE(394);
      END_STATE();
    case 276:
      if (lookahead == 'R') ADVANCE(462);
      END_STATE();
    case 277:
      if (lookahead == 'R') ADVANCE(442);
      END_STATE();
    case 278:
      if (lookahead == 'R') ADVANCE(430);
      END_STATE();
    case 279:
      if (lookahead == 'R') ADVANCE(458);
      END_STATE();
    case 280:
      if (lookahead == 'R') ADVANCE(461);
      END_STATE();
    case 281:
      if (lookahead == 'S') ADVANCE(289);
      END_STATE();
    case 282:
      if (lookahead == 'S') ADVANCE(817);
      END_STATE();
    case 283:
      if (lookahead == 'S') ADVANCE(266);
      END_STATE();
    case 284:
      if (lookahead == 'S') ADVANCE(739);
      END_STATE();
    case 285:
      if (lookahead == 'S') ADVANCE(425);
      END_STATE();
    case 286:
      if (lookahead == 'S') ADVANCE(713);
      END_STATE();
    case 287:
      if (lookahead == 'S') ADVANCE(338);
      END_STATE();
    case 288:
      if (lookahead == 'S') ADVANCE(760);
      END_STATE();
    case 289:
      if (lookahead == 'T') ADVANCE(817);
      END_STATE();
    case 290:
      if (lookahead == 'T') ADVANCE(247);
      END_STATE();
    case 291:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 292:
      if (lookahead == 'T') ADVANCE(269);
      END_STATE();
    case 293:
      if (lookahead == 'T') ADVANCE(233);
      END_STATE();
    case 294:
      if (lookahead == 'T') ADVANCE(777);
      END_STATE();
    case 295:
      if (lookahead == 'T') ADVANCE(292);
      END_STATE();
    case 296:
      if (lookahead == 'T') ADVANCE(614);
      END_STATE();
    case 297:
      if (lookahead == 'T') ADVANCE(508);
      END_STATE();
    case 298:
      if (lookahead == 'T') ADVANCE(621);
      END_STATE();
    case 299:
      if (lookahead == 'U') ADVANCE(687);
      END_STATE();
    case 300:
      if (lookahead == 'U') ADVANCE(567);
      END_STATE();
    case 301:
      if (lookahead == 'V') ADVANCE(418);
      END_STATE();
    case 302:
      if (lookahead == '\\') ADVANCE(908);
      if (lookahead == '{') ADVANCE(905);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(880);
      END_STATE();
    case 303:
      if (lookahead == '\\') ADVANCE(908);
      if (lookahead == '{') ADVANCE(901);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 484, lookahead))) ADVANCE(880);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(705);
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(749);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(538);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(711);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(712);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(728);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 347:
      if (lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 348:
      if (lookahead == 'b') ADVANCE(489);
      END_STATE();
    case 349:
      if (lookahead == 'b') ADVANCE(529);
      END_STATE();
    case 350:
      if (lookahead == 'b') ADVANCE(544);
      END_STATE();
    case 351:
      if (lookahead == 'b') ADVANCE(545);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(654);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(773);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead == 'x') ADVANCE(774);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(598);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(711);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(597);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(741);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 370:
      if (lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(505);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(696);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(776);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(521);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'w') ADVANCE(492);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 'i') ADVANCE(684);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 464:
      if (lookahead == 'f') ADVANCE(466);
      END_STATE();
    case 465:
      if (lookahead == 'f') ADVANCE(532);
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 466:
      if (lookahead == 'f') ADVANCE(490);
      END_STATE();
    case 467:
      if (lookahead == 'f') ADVANCE(498);
      END_STATE();
    case 468:
      if (lookahead == 'f') ADVANCE(629);
      END_STATE();
    case 469:
      if (lookahead == 'f') ADVANCE(499);
      END_STATE();
    case 470:
      if (lookahead == 'g') ADVANCE(910);
      END_STATE();
    case 471:
      if (lookahead == 'g') ADVANCE(675);
      END_STATE();
    case 472:
      if (lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 473:
      if (lookahead == 'g') ADVANCE(701);
      END_STATE();
    case 474:
      if (lookahead == 'g') ADVANCE(624);
      END_STATE();
    case 475:
      if (lookahead == 'g') ADVANCE(424);
      END_STATE();
    case 476:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 477:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 478:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 479:
      if (lookahead == 'h') ADVANCE(623);
      END_STATE();
    case 480:
      if (lookahead == 'h') ADVANCE(617);
      END_STATE();
    case 481:
      if (lookahead == 'h') ADVANCE(630);
      END_STATE();
    case 482:
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 483:
      if (lookahead == 'h') ADVANCE(421);
      END_STATE();
    case 484:
      if (lookahead == 'h') ADVANCE(431);
      END_STATE();
    case 485:
      if (lookahead == 'h') ADVANCE(603);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(691);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(702);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(764);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(674);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(742);
      END_STATE();
    case 523:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 524:
      if (lookahead == 'k') ADVANCE(401);
      END_STATE();
    case 525:
      if (lookahead == 'k') ADVANCE(200);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(773);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(706);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(416);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(539);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(591);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 546:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 547:
      if (lookahead == 'm') ADVANCE(638);
      END_STATE();
    case 548:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(637);
      END_STATE();
    case 551:
      if (lookahead == 'm') ADVANCE(456);
      END_STATE();
    case 552:
      if (lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 553:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 554:
      if (lookahead == 'm') ADVANCE(347);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(910);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(682);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(698);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(711);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(716);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(727);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(771);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(752);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 631:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 632:
      if (lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 633:
      if (lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 634:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 635:
      if (lookahead == 'p') ADVANCE(600);
      END_STATE();
    case 636:
      if (lookahead == 'p') ADVANCE(711);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(541);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(595);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(599);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(714);
      END_STATE();
    case 641:
      if (lookahead == 'p') ADVANCE(639);
      END_STATE();
    case 642:
      if (lookahead == 'p') ADVANCE(457);
      END_STATE();
    case 643:
      if (lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 644:
      if (lookahead == 'p') ADVANCE(643);
      END_STATE();
    case 645:
      if (lookahead == 'q') ADVANCE(753);
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 646:
      if (lookahead == 'q') ADVANCE(759);
      END_STATE();
    case 647:
      if (lookahead == 'q') ADVANCE(756);
      END_STATE();
    case 648:
      if (lookahead == 'q') ADVANCE(758);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(558);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead == 'y') ADVANCE(528);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(590);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(604);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(711);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(763);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(910);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(747);
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(401);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(709);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(719);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(516);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(910);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 747:
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 748:
      if (lookahead == 'u') ADVANCE(558);
      END_STATE();
    case 749:
      if (lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 750:
      if (lookahead == 'u') ADVANCE(392);
      END_STATE();
    case 751:
      if (lookahead == 'u') ADVANCE(682);
      END_STATE();
    case 752:
      if (lookahead == 'u') ADVANCE(698);
      END_STATE();
    case 753:
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 754:
      if (lookahead == 'u') ADVANCE(731);
      if (lookahead == 'v') ADVANCE(327);
      END_STATE();
    case 755:
      if (lookahead == 'u') ADVANCE(733);
      END_STATE();
    case 756:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 757:
      if (lookahead == 'u') ADVANCE(736);
      END_STATE();
    case 758:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 759:
      if (lookahead == 'u') ADVANCE(510);
      END_STATE();
    case 760:
      if (lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 761:
      if (lookahead == 'v') ADVANCE(503);
      END_STATE();
    case 762:
      if (lookahead == 'v') ADVANCE(439);
      END_STATE();
    case 763:
      if (lookahead == 'v') ADVANCE(447);
      END_STATE();
    case 764:
      if (lookahead == 'v') ADVANCE(437);
      END_STATE();
    case 765:
      if (lookahead == 'v') ADVANCE(333);
      END_STATE();
    case 766:
      if (lookahead == 'w') ADVANCE(594);
      END_STATE();
    case 767:
      if (lookahead == 'w') ADVANCE(334);
      END_STATE();
    case 768:
      if (lookahead == 'w') ADVANCE(401);
      END_STATE();
    case 769:
      if (lookahead == 'w') ADVANCE(310);
      END_STATE();
    case 770:
      if (lookahead == 'x') ADVANCE(632);
      END_STATE();
    case 771:
      if (lookahead == 'x') ADVANCE(773);
      END_STATE();
    case 772:
      if (lookahead == 'x') ADVANCE(725);
      END_STATE();
    case 773:
      if (lookahead == 'y') ADVANCE(910);
      END_STATE();
    case 774:
      if (lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 775:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 776:
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 777:
      if (lookahead == 'y') ADVANCE(633);
      END_STATE();
    case 778:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 779:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 780:
      if (lookahead == 'z') ADVANCE(401);
      END_STATE();
    case 781:
      if (lookahead == '{') ADVANCE(905);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 782:
      if (lookahead == '{') ADVANCE(905);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 783:
      if (lookahead == '}') ADVANCE(916);
      END_STATE();
    case 784:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(909);
      END_STATE();
    case 785:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 786:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      END_STATE();
    case 787:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 948,
        '\n', 948,
        '\r', 949,
        '#', 797,
        '-', 890,
        '/', 891,
        '<', 940,
        '>', 919,
        '@', 926,
        'C', 842,
        'D', 838,
        'G', 839,
        'H', 840,
        'L', 841,
        'O', 843,
        'P', 836,
        'T', 844,
        'W', 837,
        '[', 889,
        'm', 846,
        'q', 845,
        '{', 888,
        0x2028, 96,
        0x2029, 96,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(804);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(847);
      if (lookahead != 0) ADVANCE(892);
      END_STATE();
    case 788:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 880,
        '\n', 997,
        '\r', 998,
        '#', 800,
        '/', 904,
        '<', 917,
        '@', 924,
        'C', 873,
        'D', 862,
        'G', 863,
        'H', 868,
        'L', 871,
        'O', 876,
        'P', 861,
        'T', 877,
        'W', 864,
        '{', 905,
        '-', 907,
        '_', 907,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 789:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 880,
        '\n', 997,
        '\r', 998,
        '#', 800,
        '/', 904,
        '<', 917,
        '@', 924,
        'C', 873,
        'D', 862,
        'G', 863,
        'H', 869,
        'L', 871,
        'O', 876,
        'P', 861,
        'T', 877,
        'W', 864,
        '{', 905,
        '-', 907,
        '_', 907,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 790:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 880,
        '\n', 997,
        '\r', 998,
        '#', 800,
        '/', 904,
        '<', 917,
        '@', 924,
        'C', 874,
        'D', 865,
        'G', 866,
        'H', 870,
        'L', 872,
        'O', 875,
        'P', 860,
        'T', 878,
        'W', 867,
        '{', 905,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(880);
      END_STATE();
    case 791:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 811,
        '\n', 810,
        '\r', 811,
        '#', 796,
        '-', 883,
        '/', 884,
        '<', 940,
        '>', 919,
        '@', 925,
        'C', 830,
        'D', 825,
        'G', 826,
        'H', 828,
        'L', 829,
        'O', 831,
        'P', 824,
        'T', 832,
        'W', 827,
        '[', 887,
        'm', 833,
        'q', 834,
        '{', 886,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(803);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(835);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 792:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 811,
        '\n', 810,
        '\r', 811,
        '#', 796,
        '-', 883,
        '/', 884,
        '<', 940,
        '>', 919,
        '@', 925,
        'C', 830,
        'D', 825,
        'G', 826,
        'H', 828,
        'L', 829,
        'O', 831,
        'P', 824,
        'T', 832,
        'W', 827,
        '[', 882,
        'm', 833,
        'q', 834,
        '{', 881,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(803);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(835);
      if (lookahead != 0) ADVANCE(885);
      END_STATE();
    case 793:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 954,
        '\n', 953,
        '\r', 954,
        '#', 798,
        '-', 895,
        '/', 896,
        '<', 941,
        '>', 919,
        '@', 927,
        'C', 854,
        'D', 850,
        'G', 852,
        'H', 851,
        'L', 853,
        'O', 855,
        'P', 848,
        'T', 856,
        'W', 849,
        '[', 894,
        'm', 858,
        'q', 857,
        '{', 893,
        0x2028, 145,
        0x2029, 145,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(805);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(859);
      if (lookahead != 0) ADVANCE(897);
      END_STATE();
    case 794:
      if (eof) ADVANCE(795);
      ADVANCE_MAP(
        0, 954,
        '\n', 953,
        '\r', 954,
        '#', 798,
        '-', 895,
        '/', 896,
        '<', 941,
        '>', 919,
        '@', 927,
        'C', 854,
        'D', 850,
        'G', 852,
        'H', 851,
        'L', 853,
        'O', 855,
        'P', 848,
        'T', 856,
        'W', 849,
        '[', 899,
        'm', 858,
        'q', 857,
        '{', 898,
        0x2028, 145,
        0x2029, 145,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(805);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 475, lookahead)) ADVANCE(859);
      if (lookahead != 0) ADVANCE(897);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(799);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '#') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(799);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(799);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(799);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(799);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(801);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(803);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(804);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(805);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(807);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(806);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(995);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_comment_token4);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_comment_token4);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_comment_token4);
      if (lookahead == '\n') ADVANCE(810);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_comment_token5);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_comment_token5);
      if ((!eof && lookahead == 00)) ADVANCE(814);
      if (lookahead == '\n') ADVANCE(813);
      if (lookahead == '\r') ADVANCE(814);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(5);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'E') ADVANCE(6);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'R') ADVANCE(7);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'P') ADVANCE(83);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(131);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'P') ADVANCE(132);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(291);
      if (lookahead == 'O') ADVANCE(281);
      if (lookahead == 'U') ADVANCE(289);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(991);
      if (lookahead == 'O') ADVANCE(986);
      if (lookahead == 'U') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(989);
      if (lookahead == 'R') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(960);
      if (lookahead == 'T') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(215);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(258);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(290);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(216);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(939);
      if (lookahead == '\r') ADVANCE(938);
      if (lookahead == '{') ADVANCE(913);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(938);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(939);
      if (lookahead == '\r') ADVANCE(938);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(938);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == '-') ADVANCE(943);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == '/') ADVANCE(799);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(932);
      if (lookahead == '\r') ADVANCE(931);
      if (lookahead == '{') ADVANCE(913);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(932);
      if (lookahead == '\r') ADVANCE(931);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(932);
      if (lookahead == '\r') ADVANCE(931);
      if (lookahead == '{') ADVANCE(914);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(932);
      if (lookahead == '\r') ADVANCE(931);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '-') ADVANCE(943);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '/') ADVANCE(799);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(939);
      if (lookahead == '\r') ADVANCE(938);
      if (lookahead == '{') ADVANCE(915);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(938);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(939);
      if (lookahead == '\r') ADVANCE(938);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(938);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == '-') ADVANCE(944);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead == '/') ADVANCE(799);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(955);
      if (lookahead == '{') ADVANCE(915);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(930);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(955);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(930);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '\r') ADVANCE(918);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(918);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '%') ADVANCE(920);
      if (lookahead == '{') ADVANCE(912);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '%') ADVANCE(920);
      if (lookahead == '{') ADVANCE(912);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(939);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '-') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '/') ADVANCE(801);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '{') ADVANCE(912);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(939);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(996);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_pre_request_script_token1);
      if (lookahead == '\r') ADVANCE(918);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(918);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(923);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_res_redirect_token1);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_res_redirect_token1);
      if (lookahead == '!') ADVANCE(922);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(955);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(930);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(932);
      if (lookahead == '\r') ADVANCE(931);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(931);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(932);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(952);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead == '\r') ADVANCE(952);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(952);
      if (lookahead == '\r') ADVANCE(952);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (lookahead == '\n') ADVANCE(939);
      if (lookahead == '\r') ADVANCE(938);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(938);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(939);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(928);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(928);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '@') ADVANCE(145);
      if (lookahead != 0) ADVANCE(929);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(928);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      if (lookahead == '\n') ADVANCE(948);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(952);
      if (lookahead == '\n') ADVANCE(950);
      if (lookahead == '\r') ADVANCE(952);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(954);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(954);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(955);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(930);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(956);
      if (lookahead == '\n') ADVANCE(953);
      if (lookahead == '\r') ADVANCE(956);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(957);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(158);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(994);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(995);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(997);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 790},
  [2] = {.lex_state = 791},
  [3] = {.lex_state = 791},
  [4] = {.lex_state = 791},
  [5] = {.lex_state = 791},
  [6] = {.lex_state = 791},
  [7] = {.lex_state = 791},
  [8] = {.lex_state = 791},
  [9] = {.lex_state = 791},
  [10] = {.lex_state = 791},
  [11] = {.lex_state = 791},
  [12] = {.lex_state = 791},
  [13] = {.lex_state = 791},
  [14] = {.lex_state = 791},
  [15] = {.lex_state = 791},
  [16] = {.lex_state = 791},
  [17] = {.lex_state = 791},
  [18] = {.lex_state = 791},
  [19] = {.lex_state = 791},
  [20] = {.lex_state = 791},
  [21] = {.lex_state = 791},
  [22] = {.lex_state = 791},
  [23] = {.lex_state = 791},
  [24] = {.lex_state = 791},
  [25] = {.lex_state = 791},
  [26] = {.lex_state = 791},
  [27] = {.lex_state = 791},
  [28] = {.lex_state = 791},
  [29] = {.lex_state = 791},
  [30] = {.lex_state = 791},
  [31] = {.lex_state = 791},
  [32] = {.lex_state = 791},
  [33] = {.lex_state = 791},
  [34] = {.lex_state = 791},
  [35] = {.lex_state = 791},
  [36] = {.lex_state = 791},
  [37] = {.lex_state = 791},
  [38] = {.lex_state = 791},
  [39] = {.lex_state = 791},
  [40] = {.lex_state = 791},
  [41] = {.lex_state = 791},
  [42] = {.lex_state = 791},
  [43] = {.lex_state = 791},
  [44] = {.lex_state = 791},
  [45] = {.lex_state = 791},
  [46] = {.lex_state = 791},
  [47] = {.lex_state = 791},
  [48] = {.lex_state = 791},
  [49] = {.lex_state = 791},
  [50] = {.lex_state = 791},
  [51] = {.lex_state = 791},
  [52] = {.lex_state = 791},
  [53] = {.lex_state = 791},
  [54] = {.lex_state = 791},
  [55] = {.lex_state = 791},
  [56] = {.lex_state = 791},
  [57] = {.lex_state = 791},
  [58] = {.lex_state = 791},
  [59] = {.lex_state = 787},
  [60] = {.lex_state = 787},
  [61] = {.lex_state = 787},
  [62] = {.lex_state = 790},
  [63] = {.lex_state = 790},
  [64] = {.lex_state = 793},
  [65] = {.lex_state = 793},
  [66] = {.lex_state = 794},
  [67] = {.lex_state = 794},
  [68] = {.lex_state = 792},
  [69] = {.lex_state = 791},
  [70] = {.lex_state = 794},
  [71] = {.lex_state = 794},
  [72] = {.lex_state = 787},
  [73] = {.lex_state = 787},
  [74] = {.lex_state = 787},
  [75] = {.lex_state = 787},
  [76] = {.lex_state = 787},
  [77] = {.lex_state = 788},
  [78] = {.lex_state = 788},
  [79] = {.lex_state = 788},
  [80] = {.lex_state = 792},
  [81] = {.lex_state = 788},
  [82] = {.lex_state = 788},
  [83] = {.lex_state = 788},
  [84] = {.lex_state = 792},
  [85] = {.lex_state = 792},
  [86] = {.lex_state = 788},
  [87] = {.lex_state = 788},
  [88] = {.lex_state = 791},
  [89] = {.lex_state = 791},
  [90] = {.lex_state = 791},
  [91] = {.lex_state = 791},
  [92] = {.lex_state = 791},
  [93] = {.lex_state = 791},
  [94] = {.lex_state = 791},
  [95] = {.lex_state = 791},
  [96] = {.lex_state = 791},
  [97] = {.lex_state = 791},
  [98] = {.lex_state = 791},
  [99] = {.lex_state = 791},
  [100] = {.lex_state = 791},
  [101] = {.lex_state = 791},
  [102] = {.lex_state = 791},
  [103] = {.lex_state = 790},
  [104] = {.lex_state = 790},
  [105] = {.lex_state = 791},
  [106] = {.lex_state = 789},
  [107] = {.lex_state = 789},
  [108] = {.lex_state = 789},
  [109] = {.lex_state = 789},
  [110] = {.lex_state = 789},
  [111] = {.lex_state = 789},
  [112] = {.lex_state = 789},
  [113] = {.lex_state = 789},
  [114] = {.lex_state = 789},
  [115] = {.lex_state = 789},
  [116] = {.lex_state = 789},
  [117] = {.lex_state = 789},
  [118] = {.lex_state = 789},
  [119] = {.lex_state = 789},
  [120] = {.lex_state = 789},
  [121] = {.lex_state = 789},
  [122] = {.lex_state = 789},
  [123] = {.lex_state = 789},
  [124] = {.lex_state = 789},
  [125] = {.lex_state = 789},
  [126] = {.lex_state = 789},
  [127] = {.lex_state = 789},
  [128] = {.lex_state = 789},
  [129] = {.lex_state = 789},
  [130] = {.lex_state = 788},
  [131] = {.lex_state = 789},
  [132] = {.lex_state = 788},
  [133] = {.lex_state = 788},
  [134] = {.lex_state = 788},
  [135] = {.lex_state = 788},
  [136] = {.lex_state = 789},
  [137] = {.lex_state = 789},
  [138] = {.lex_state = 789},
  [139] = {.lex_state = 789},
  [140] = {.lex_state = 789},
  [141] = {.lex_state = 789},
  [142] = {.lex_state = 789},
  [143] = {.lex_state = 789},
  [144] = {.lex_state = 789},
  [145] = {.lex_state = 790},
  [146] = {.lex_state = 790},
  [147] = {.lex_state = 790},
  [148] = {.lex_state = 790},
  [149] = {.lex_state = 790},
  [150] = {.lex_state = 790},
  [151] = {.lex_state = 790},
  [152] = {.lex_state = 790},
  [153] = {.lex_state = 790},
  [154] = {.lex_state = 790},
  [155] = {.lex_state = 790},
  [156] = {.lex_state = 790},
  [157] = {.lex_state = 790},
  [158] = {.lex_state = 790},
  [159] = {.lex_state = 790},
  [160] = {.lex_state = 790},
  [161] = {.lex_state = 790},
  [162] = {.lex_state = 303},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 303},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 781},
  [171] = {.lex_state = 781},
  [172] = {.lex_state = 781},
  [173] = {.lex_state = 781},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 781},
  [178] = {.lex_state = 781},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 782},
  [181] = {.lex_state = 302},
  [182] = {.lex_state = 148},
  [183] = {.lex_state = 782},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 782},
  [187] = {.lex_state = 302},
  [188] = {.lex_state = 302},
  [189] = {.lex_state = 302},
  [190] = {.lex_state = 782},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 782},
  [193] = {.lex_state = 148},
  [194] = {.lex_state = 782},
  [195] = {.lex_state = 782},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 782},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 148},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 148},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 148},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 148},
  [210] = {.lex_state = 100},
  [211] = {.lex_state = 155},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 149},
  [214] = {.lex_state = 100},
  [215] = {.lex_state = 100},
  [216] = {.lex_state = 155},
  [217] = {.lex_state = 149},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 155},
  [220] = {.lex_state = 155},
  [221] = {.lex_state = 100},
  [222] = {.lex_state = 149},
  [223] = {.lex_state = 155},
  [224] = {.lex_state = 155},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 155},
  [230] = {.lex_state = 155},
  [231] = {.lex_state = 150},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 790},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 156},
  [237] = {.lex_state = 157},
  [238] = {.lex_state = 155},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 150},
  [241] = {.lex_state = 155},
  [242] = {.lex_state = 155},
  [243] = {.lex_state = 150},
  [244] = {.lex_state = 155},
  [245] = {.lex_state = 156},
  [246] = {.lex_state = 156},
  [247] = {.lex_state = 155},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 156},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 154},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 790},
  [254] = {.lex_state = 155},
  [255] = {.lex_state = 155},
  [256] = {.lex_state = 154},
  [257] = {.lex_state = 790},
  [258] = {.lex_state = 156},
  [259] = {.lex_state = 155},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 154},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 156},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 96},
  [266] = {.lex_state = 790},
  [267] = {.lex_state = 155},
  [268] = {.lex_state = 157},
  [269] = {.lex_state = 790},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 156},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 156},
  [278] = {.lex_state = 2},
  [279] = {.lex_state = 156},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 154},
  [282] = {.lex_state = 155},
  [283] = {.lex_state = 155},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 157},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 155},
  [288] = {.lex_state = 790},
  [289] = {.lex_state = 790},
  [290] = {.lex_state = 154},
  [291] = {.lex_state = 155},
  [292] = {.lex_state = 155},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 154},
  [297] = {.lex_state = 154},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 790},
  [301] = {.lex_state = 154},
  [302] = {.lex_state = 154},
  [303] = {.lex_state = 790},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_comment_token3] = ACTIONS(1),
    [aux_sym_comment_token4] = ACTIONS(1),
    [aux_sym_request_separator_token1] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [aux_sym__target_url_line_token1] = ACTIONS(1),
    [aux_sym__target_url_line_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [aux_sym_res_redirect_token1] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_graphql_json_body_token1] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_multipart_form_data_token2] = ACTIONS(1),
    [sym_header_entity] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(304),
    [sym_comment] = STATE(103),
    [sym_request_separator] = STATE(104),
    [sym_section] = STATE(62),
    [sym__section_content] = STATE(158),
    [aux_sym__target_url_line] = STATE(175),
    [sym_target_url] = STATE(233),
    [sym_request] = STATE(157),
    [sym_variable] = STATE(175),
    [sym_pre_request_script] = STATE(103),
    [sym_variable_declaration] = STATE(103),
    [sym__blank_line] = STATE(103),
    [aux_sym_document_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [aux_sym_request_separator_token1] = ACTIONS(9),
    [sym_method] = ACTIONS(11),
    [aux_sym__target_url_line_token1] = ACTIONS(13),
    [aux_sym__target_url_line_token2] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_AT2] = ACTIONS(19),
    [aux_sym__blank_line_token1] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(29), 1,
      aux_sym_comment_token4,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(31), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(31), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [73] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(53), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(49), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(55), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [146] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(59), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(34), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(61), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [219] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(65), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(35), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(67), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [292] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(71), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(38), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(73), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [365] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(77), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(41), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(79), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [438] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(81), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(44), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(73), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [511] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(85), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(42), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(87), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [584] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(91), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(32), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(93), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [657] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(97), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(33), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(99), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [730] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(103), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(36), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(105), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [803] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(109), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(37), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(111), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [876] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(115), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(54), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(117), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [949] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(121), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(39), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(123), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1022] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(127), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(40), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(129), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1095] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(131), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(58), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(129), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1168] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(135), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(43), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(137), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1241] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(141), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(45), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(143), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1314] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(145), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(46), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(137), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1387] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(149), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(48), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(151), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1460] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(155), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(50), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(157), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1533] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(161), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(51), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(163), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1606] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(167), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(52), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(169), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1679] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(173), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(53), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(175), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1752] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(179), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(55), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(181), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1825] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(183), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(56), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(175), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1898] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(187), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(57), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(189), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1971] = 19,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(27), 1,
      aux_sym_comment_token2,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(193), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(30), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    ACTIONS(195), 6,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2044] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(199), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2109] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(205), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2174] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(209), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2239] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(213), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2304] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(217), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2369] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(221), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2434] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(225), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2499] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(229), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2564] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(233), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2629] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(237), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2694] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(241), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2759] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(245), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2824] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(249), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2889] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(253), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2954] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(233), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3019] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(257), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3084] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(253), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3149] = 16,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      aux_sym_comment_token4,
    ACTIONS(269), 1,
      anon_sym_GT,
    ACTIONS(272), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(275), 1,
      aux_sym_xml_body_token1,
    ACTIONS(278), 1,
      aux_sym_json_body_token1,
    ACTIONS(281), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(284), 1,
      anon_sym_LT2,
    ACTIONS(287), 1,
      anon_sym_DASH_DASH,
    ACTIONS(290), 1,
      aux_sym_raw_body_token1,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(264), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3214] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(295), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3279] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(299), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3344] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(303), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3409] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(307), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3474] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(311), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3539] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(315), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3604] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(319), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3669] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(323), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3734] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(315), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3799] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(327), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3864] = 16,
    ACTIONS(25), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_res_redirect_token1,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_raw_body_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token4,
    STATE(68), 1,
      sym_graphql_data,
    STATE(280), 1,
      sym_external_body,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(47), 4,
      sym_var_comment,
      sym_res_handler_script,
      sym_res_redirect,
      aux_sym_request_repeat4,
    STATE(105), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(241), 8,
      aux_sym_comment_token2,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3929] = 8,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(331), 1,
      aux_sym_comment_token1,
    ACTIONS(337), 1,
      aux_sym_multipart_form_data_token1,
    STATE(226), 1,
      sym_external_body,
    STATE(60), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(329), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_data_token1,
    ACTIONS(335), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(333), 11,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3971] = 8,
    ACTIONS(341), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      anon_sym_LT2,
    ACTIONS(352), 1,
      aux_sym_multipart_form_data_token1,
    STATE(226), 1,
      sym_external_body,
    STATE(60), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(339), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_data_token1,
    ACTIONS(346), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(344), 11,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4013] = 8,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(331), 1,
      aux_sym_comment_token1,
    ACTIONS(361), 1,
      aux_sym_multipart_form_data_token1,
    STATE(226), 1,
      sym_external_body,
    STATE(59), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(355), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_data_token1,
    ACTIONS(359), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(357), 11,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4055] = 17,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(9), 1,
      aux_sym_request_separator_token1,
    ACTIONS(11), 1,
      sym_method,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_AT2,
    ACTIONS(21), 1,
      aux_sym__blank_line_token1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym_request_separator,
    STATE(157), 1,
      sym_request,
    STATE(158), 1,
      sym__section_content,
    STATE(233), 1,
      sym_target_url,
    ACTIONS(13), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(63), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(175), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(103), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4113] = 17,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(370), 1,
      aux_sym_comment_token2,
    ACTIONS(373), 1,
      aux_sym_request_separator_token1,
    ACTIONS(376), 1,
      sym_method,
    ACTIONS(382), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(385), 1,
      anon_sym_LT,
    ACTIONS(388), 1,
      anon_sym_AT2,
    ACTIONS(391), 1,
      aux_sym__blank_line_token1,
    STATE(104), 1,
      sym_request_separator,
    STATE(157), 1,
      sym_request,
    STATE(158), 1,
      sym__section_content,
    STATE(233), 1,
      sym_target_url,
    ACTIONS(379), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(63), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(175), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(103), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4171] = 5,
    ACTIONS(396), 1,
      aux_sym_comment_token1,
    ACTIONS(401), 1,
      aux_sym__raw_body_token1,
    STATE(84), 1,
      sym__raw_body,
    ACTIONS(394), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_json_body_token1,
    ACTIONS(399), 16,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4205] = 5,
    ACTIONS(401), 1,
      aux_sym__raw_body_token1,
    ACTIONS(405), 1,
      aux_sym_comment_token1,
    STATE(85), 1,
      sym__raw_body,
    ACTIONS(403), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_graphql_json_body_token1,
    ACTIONS(408), 16,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4239] = 5,
    ACTIONS(410), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      aux_sym__raw_body_token1,
    STATE(102), 1,
      sym__raw_body,
    ACTIONS(403), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(408), 16,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4272] = 5,
    ACTIONS(413), 1,
      aux_sym__raw_body_token1,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym__raw_body,
    ACTIONS(415), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(420), 16,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4305] = 4,
    ACTIONS(426), 1,
      aux_sym_graphql_json_body_token1,
    STATE(88), 1,
      sym_graphql_json_body,
    ACTIONS(422), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(424), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4336] = 5,
    ACTIONS(432), 1,
      aux_sym_comment_token2,
    ACTIONS(435), 1,
      aux_sym__blank_line_token1,
    STATE(69), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(428), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(430), 11,
      aux_sym_comment_token1,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
  [4369] = 5,
    ACTIONS(413), 1,
      aux_sym__raw_body_token1,
    ACTIONS(440), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      sym__raw_body,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(443), 16,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4402] = 5,
    ACTIONS(413), 1,
      aux_sym__raw_body_token1,
    ACTIONS(445), 1,
      aux_sym_comment_token1,
    STATE(91), 1,
      sym__raw_body,
    ACTIONS(394), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
    ACTIONS(399), 16,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4435] = 2,
    ACTIONS(339), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(344), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4462] = 2,
    ACTIONS(448), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(450), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4489] = 2,
    ACTIONS(452), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(454), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4516] = 2,
    ACTIONS(456), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(458), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4543] = 2,
    ACTIONS(460), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(462), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4570] = 13,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(476), 1,
      aux_sym__blank_line_token1,
    STATE(112), 1,
      sym_response,
    STATE(114), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(288), 1,
      sym_http_version,
    STATE(5), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(86), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(470), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(464), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4618] = 13,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(482), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_response,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(288), 1,
      sym_http_version,
    STATE(14), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(83), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(480), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(478), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4666] = 13,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(484), 1,
      aux_sym__blank_line_token1,
    STATE(118), 1,
      aux_sym_request_repeat2,
    STATE(129), 1,
      sym_response,
    STATE(144), 1,
      sym_header,
    STATE(288), 1,
      sym_http_version,
    STATE(21), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(130), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(123), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4714] = 2,
    ACTIONS(486), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(488), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4740] = 13,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(494), 1,
      aux_sym__blank_line_token1,
    STATE(106), 1,
      aux_sym_request_repeat2,
    STATE(107), 1,
      sym_response,
    STATE(144), 1,
      sym_header,
    STATE(288), 1,
      sym_http_version,
    STATE(15), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(79), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(492), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(490), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4788] = 13,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(500), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      sym_response,
    STATE(110), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(288), 1,
      sym_http_version,
    STATE(2), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(87), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(498), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(496), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4836] = 13,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(502), 1,
      aux_sym__blank_line_token1,
    STATE(115), 1,
      sym_response,
    STATE(117), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(288), 1,
      sym_http_version,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(130), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(117), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4884] = 2,
    ACTIONS(403), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(408), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4910] = 2,
    ACTIONS(504), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(506), 14,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4936] = 13,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(508), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      sym_response,
    STATE(127), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(288), 1,
      sym_http_version,
    STATE(11), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(130), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(67), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4984] = 13,
    ACTIONS(466), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(510), 1,
      aux_sym__blank_line_token1,
    STATE(122), 1,
      sym_response,
    STATE(124), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(288), 1,
      sym_http_version,
    STATE(9), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(130), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(31), 3,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5032] = 2,
    ACTIONS(512), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(514), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5057] = 2,
    ACTIONS(438), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(443), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5082] = 2,
    ACTIONS(516), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(518), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5107] = 2,
    ACTIONS(403), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(408), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5132] = 2,
    ACTIONS(520), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(522), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5157] = 2,
    ACTIONS(524), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(526), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5182] = 2,
    ACTIONS(528), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(530), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5207] = 2,
    ACTIONS(532), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(534), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5232] = 2,
    ACTIONS(536), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(538), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5257] = 2,
    ACTIONS(540), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(542), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5282] = 2,
    ACTIONS(544), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(546), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5307] = 2,
    ACTIONS(548), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(550), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5332] = 2,
    ACTIONS(552), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(554), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5357] = 2,
    ACTIONS(556), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(558), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5382] = 2,
    ACTIONS(504), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(506), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5407] = 14,
    ACTIONS(562), 1,
      aux_sym_comment_token1,
    ACTIONS(565), 1,
      aux_sym_comment_token2,
    ACTIONS(568), 1,
      sym_method,
    ACTIONS(574), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(577), 1,
      anon_sym_LT,
    ACTIONS(580), 1,
      anon_sym_AT2,
    ACTIONS(583), 1,
      aux_sym__blank_line_token1,
    STATE(145), 1,
      sym__section_content,
    STATE(157), 1,
      sym_request,
    STATE(233), 1,
      sym_target_url,
    ACTIONS(560), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(571), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(175), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(103), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [5456] = 14,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym_method,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_AT2,
    ACTIONS(21), 1,
      aux_sym__blank_line_token1,
    STATE(150), 1,
      sym__section_content,
    STATE(157), 1,
      sym_request,
    STATE(233), 1,
      sym_target_url,
    ACTIONS(13), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(586), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(175), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(103), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [5505] = 2,
    ACTIONS(588), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      aux_sym_res_redirect_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(590), 13,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5530] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(596), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(22), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(594), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(592), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5563] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(484), 1,
      aux_sym__blank_line_token1,
    STATE(116), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(21), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(123), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5596] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(510), 1,
      aux_sym__blank_line_token1,
    STATE(121), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(9), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(31), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5629] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(602), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(23), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(600), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(598), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5662] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(608), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(10), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(606), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(604), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5695] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(614), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(24), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(612), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(610), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5728] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(508), 1,
      aux_sym__blank_line_token1,
    STATE(125), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(11), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(67), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5761] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(620), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(618), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(616), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5794] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(626), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(12), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(624), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(622), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5827] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(628), 1,
      aux_sym__blank_line_token1,
    STATE(128), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(7), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(55), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5860] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(634), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(25), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(632), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(630), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5893] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(636), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(618), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(616), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5926] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(638), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(27), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(632), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(630), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5959] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(644), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(28), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(642), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(640), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5992] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(502), 1,
      aux_sym__blank_line_token1,
    STATE(113), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(117), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6025] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(650), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(16), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(648), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(646), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6058] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(652), 1,
      aux_sym__blank_line_token1,
    STATE(109), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(29), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(87), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6091] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(658), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(4), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(656), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(654), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6124] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(660), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(17), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(648), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(646), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6157] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(666), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(18), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(664), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(662), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6190] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(668), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(19), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(99), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6223] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(670), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(20), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(664), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(662), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6256] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(676), 1,
      aux_sym__blank_line_token1,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(13), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(674), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(672), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6289] = 8,
    ACTIONS(468), 1,
      aux_sym_comment_token2,
    ACTIONS(474), 1,
      sym_header_entity,
    ACTIONS(678), 1,
      aux_sym__blank_line_token1,
    STATE(119), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    STATE(26), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(151), 4,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6322] = 4,
    ACTIONS(682), 1,
      aux_sym_comment_token1,
    STATE(130), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(685), 5,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(680), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6346] = 5,
    ACTIONS(691), 1,
      sym_header_entity,
    STATE(131), 1,
      aux_sym_request_repeat2,
    STATE(144), 1,
      sym_header,
    ACTIONS(689), 5,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(687), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6371] = 2,
    ACTIONS(454), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(452), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6389] = 2,
    ACTIONS(462), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(460), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6407] = 2,
    ACTIONS(458), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(456), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6425] = 2,
    ACTIONS(450), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(448), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      aux_sym_http_version_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6443] = 2,
    ACTIONS(694), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(696), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6460] = 2,
    ACTIONS(698), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(700), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6477] = 2,
    ACTIONS(702), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(704), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6494] = 2,
    ACTIONS(706), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(708), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6511] = 2,
    ACTIONS(710), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(712), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6528] = 2,
    ACTIONS(714), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(716), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6545] = 2,
    ACTIONS(718), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(720), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6562] = 2,
    ACTIONS(722), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(724), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6579] = 2,
    ACTIONS(726), 6,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(728), 6,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6596] = 2,
    ACTIONS(732), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(730), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6612] = 2,
    ACTIONS(458), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(456), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6628] = 2,
    ACTIONS(462), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(460), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6644] = 2,
    ACTIONS(736), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(734), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6660] = 2,
    ACTIONS(450), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(448), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6676] = 2,
    ACTIONS(740), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(738), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6692] = 2,
    ACTIONS(554), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(552), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6708] = 2,
    ACTIONS(744), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(742), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6724] = 2,
    ACTIONS(748), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(746), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6740] = 2,
    ACTIONS(454), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(452), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6756] = 2,
    ACTIONS(752), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(750), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6772] = 2,
    ACTIONS(756), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(754), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6788] = 2,
    ACTIONS(760), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(758), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6804] = 2,
    ACTIONS(764), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(762), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6820] = 2,
    ACTIONS(768), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(766), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6836] = 2,
    ACTIONS(772), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(770), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6852] = 2,
    ACTIONS(776), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(774), 7,
      ts_builtin_sym_end,
      aux_sym_comment_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6868] = 6,
    ACTIONS(780), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(778), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(193), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(277), 2,
      sym_script,
      sym_path,
  [6890] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(788), 1,
      aux_sym_comment_token3,
    ACTIONS(790), 1,
      aux_sym_comment_token4,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    STATE(305), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6914] = 6,
    ACTIONS(780), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(778), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(193), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(273), 2,
      sym_script,
      sym_path,
  [6936] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(794), 1,
      aux_sym_comment_token3,
    ACTIONS(796), 1,
      aux_sym_comment_token4,
    STATE(299), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6960] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(798), 1,
      aux_sym_comment_token3,
    ACTIONS(800), 1,
      aux_sym_comment_token4,
    STATE(271), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6984] = 5,
    ACTIONS(807), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(810), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(802), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
    ACTIONS(804), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(167), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7003] = 5,
    ACTIONS(817), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(813), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
    ACTIONS(815), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(167), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7022] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(821), 1,
      aux_sym_comment_token4,
    STATE(264), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7043] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(823), 1,
      aux_sym_comment_token3,
    STATE(272), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7064] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(825), 1,
      aux_sym_comment_token3,
    STATE(262), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7085] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(827), 1,
      aux_sym_comment_token3,
    STATE(275), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7106] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(829), 1,
      aux_sym_comment_token3,
    STATE(252), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7127] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(831), 1,
      aux_sym_comment_token4,
    STATE(250), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7148] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(833), 1,
      aux_sym_comment_token2,
    ACTIONS(836), 1,
      aux_sym_comment_token4,
    ACTIONS(839), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(841), 1,
      aux_sym__target_url_line_token2,
    STATE(218), 1,
      aux_sym_target_url_repeat1,
    STATE(184), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7171] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(790), 1,
      aux_sym_comment_token4,
    STATE(305), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7192] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(843), 1,
      aux_sym_comment_token3,
    STATE(293), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7213] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(792), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(845), 1,
      aux_sym_comment_token3,
    STATE(284), 1,
      sym_value,
    ACTIONS(786), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7234] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(841), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(847), 1,
      aux_sym_comment_token2,
    ACTIONS(850), 1,
      aux_sym_comment_token4,
    STATE(184), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7254] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    STATE(298), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7272] = 5,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(854), 1,
      aux_sym__target_url_line_token2,
    STATE(225), 1,
      sym_path,
    ACTIONS(852), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(168), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7290] = 5,
    ACTIONS(859), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(856), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(182), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7308] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    STATE(260), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7326] = 5,
    ACTIONS(870), 1,
      aux_sym_comment_token4,
    ACTIONS(872), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(875), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(867), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(184), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7344] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(880), 1,
      aux_sym_comment_token4,
    ACTIONS(882), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(878), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(191), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7362] = 5,
    ACTIONS(13), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      sym_target_url,
    ACTIONS(884), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(175), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7380] = 5,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(854), 1,
      aux_sym__target_url_line_token2,
    STATE(239), 1,
      sym_path,
    ACTIONS(852), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(168), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7398] = 5,
    ACTIONS(780), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(279), 1,
      sym_path,
    ACTIONS(778), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(193), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7416] = 5,
    ACTIONS(819), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(854), 1,
      aux_sym__target_url_line_token2,
    STATE(227), 1,
      sym_path,
    ACTIONS(852), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(168), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7434] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    STATE(272), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7452] = 5,
    ACTIONS(889), 1,
      aux_sym_comment_token4,
    ACTIONS(891), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(894), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(886), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(191), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7470] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    STATE(294), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7488] = 5,
    ACTIONS(782), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(899), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(901), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(897), 2,
      aux_sym__target_url_line_token1,
      aux_sym_path_token1,
    STATE(182), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7506] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    STATE(295), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7524] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      aux_sym__target_url_line_token2,
    STATE(286), 1,
      sym_value,
    ACTIONS(792), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7542] = 3,
    ACTIONS(905), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(907), 1,
      aux_sym__blank_line_token1,
    ACTIONS(903), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [7555] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(911), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(909), 2,
      aux_sym_comment_token2,
      aux_sym__target_url_line_token1,
    STATE(179), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7570] = 2,
    ACTIONS(915), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(913), 5,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7581] = 2,
    ACTIONS(919), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(917), 5,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7592] = 2,
    ACTIONS(923), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(921), 5,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7603] = 2,
    ACTIONS(927), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(925), 5,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7614] = 2,
    ACTIONS(915), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(913), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7624] = 2,
    ACTIONS(923), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(921), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [7634] = 2,
    ACTIONS(927), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(925), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7644] = 2,
    ACTIONS(927), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(925), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [7654] = 2,
    ACTIONS(919), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(917), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7664] = 2,
    ACTIONS(919), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(917), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [7674] = 2,
    ACTIONS(915), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(913), 4,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
  [7684] = 2,
    ACTIONS(923), 2,
      aux_sym__target_url_line_token2,
      aux_sym_pre_request_script_token1,
    ACTIONS(921), 3,
      aux_sym__target_url_line_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7694] = 3,
    ACTIONS(413), 1,
      aux_sym__raw_body_token1,
    ACTIONS(929), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym__raw_body,
  [7704] = 2,
    ACTIONS(933), 1,
      aux_sym_comment_token4,
    ACTIONS(931), 2,
      aux_sym_comment_token2,
      anon_sym_EQ,
  [7712] = 3,
    ACTIONS(935), 1,
      aux_sym_comment_token2,
    ACTIONS(937), 1,
      aux_sym_comment_token4,
    STATE(212), 1,
      aux_sym_target_url_repeat1,
  [7722] = 3,
    ACTIONS(940), 1,
      aux_sym_comment_token5,
    ACTIONS(942), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(217), 1,
      aux_sym_script_repeat1,
  [7732] = 3,
    ACTIONS(413), 1,
      aux_sym__raw_body_token1,
    ACTIONS(929), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym__raw_body,
  [7742] = 3,
    ACTIONS(413), 1,
      aux_sym__raw_body_token1,
    ACTIONS(929), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym__raw_body,
  [7752] = 2,
    ACTIONS(946), 1,
      aux_sym_comment_token4,
    ACTIONS(944), 2,
      aux_sym_comment_token2,
      anon_sym_EQ,
  [7760] = 3,
    ACTIONS(948), 1,
      aux_sym_comment_token5,
    ACTIONS(951), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(217), 1,
      aux_sym_script_repeat1,
  [7770] = 3,
    ACTIONS(953), 1,
      aux_sym_comment_token2,
    ACTIONS(955), 1,
      aux_sym_comment_token4,
    STATE(212), 1,
      aux_sym_target_url_repeat1,
  [7780] = 2,
    ACTIONS(960), 1,
      aux_sym_comment_token4,
    ACTIONS(958), 2,
      aux_sym_comment_token2,
      anon_sym_EQ,
  [7788] = 2,
    ACTIONS(964), 1,
      aux_sym_comment_token4,
    ACTIONS(962), 2,
      aux_sym_comment_token2,
      anon_sym_EQ,
  [7796] = 3,
    ACTIONS(401), 1,
      aux_sym__raw_body_token1,
    ACTIONS(966), 1,
      aux_sym_comment_token1,
    STATE(80), 1,
      sym__raw_body,
  [7806] = 3,
    ACTIONS(968), 1,
      aux_sym_comment_token5,
    ACTIONS(970), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(213), 1,
      aux_sym_script_repeat1,
  [7816] = 2,
    ACTIONS(972), 1,
      aux_sym_comment_token2,
    ACTIONS(974), 1,
      anon_sym_RBRACE_RBRACE,
  [7823] = 2,
    ACTIONS(976), 1,
      aux_sym_comment_token2,
    ACTIONS(978), 1,
      anon_sym_RBRACE_RBRACE,
  [7830] = 1,
    ACTIONS(980), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
  [7835] = 1,
    ACTIONS(982), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
  [7840] = 1,
    ACTIONS(984), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
  [7845] = 1,
    ACTIONS(986), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
  [7850] = 2,
    ACTIONS(988), 1,
      aux_sym_comment_token2,
    ACTIONS(990), 1,
      anon_sym_EQ,
  [7857] = 2,
    ACTIONS(992), 1,
      aux_sym_comment_token2,
    ACTIONS(994), 1,
      anon_sym_COLON,
  [7864] = 2,
    ACTIONS(996), 1,
      anon_sym_AT,
    ACTIONS(998), 1,
      aux_sym_comment_token5,
  [7871] = 2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    STATE(278), 1,
      sym_http_version,
  [7878] = 2,
    ACTIONS(1000), 1,
      aux_sym_comment_token2,
    ACTIONS(1002), 1,
      aux_sym_comment_token4,
  [7885] = 2,
    ACTIONS(1004), 1,
      aux_sym_comment_token2,
    ACTIONS(1006), 1,
      anon_sym_AT2,
  [7892] = 2,
    ACTIONS(472), 1,
      aux_sym_http_version_token1,
    STATE(274), 1,
      sym_http_version,
  [7899] = 2,
    ACTIONS(1008), 1,
      aux_sym_comment_token2,
    ACTIONS(1010), 1,
      sym_identifier,
  [7906] = 2,
    ACTIONS(1012), 1,
      anon_sym_AT,
    ACTIONS(1014), 1,
      sym__not_comment,
  [7913] = 2,
    ACTIONS(1016), 1,
      aux_sym_comment_token4,
    ACTIONS(1018), 1,
      sym_status_text,
  [7920] = 1,
    ACTIONS(1020), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token4,
  [7925] = 2,
    ACTIONS(1022), 1,
      anon_sym_AT,
    ACTIONS(1024), 1,
      aux_sym_comment_token5,
  [7932] = 2,
    ACTIONS(1026), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      anon_sym_RBRACE_RBRACE,
  [7939] = 2,
    ACTIONS(1030), 1,
      aux_sym_comment_token2,
    ACTIONS(1032), 1,
      anon_sym_RBRACE_RBRACE,
  [7946] = 2,
    ACTIONS(1034), 1,
      anon_sym_AT,
    ACTIONS(1036), 1,
      aux_sym_comment_token5,
  [7953] = 2,
    ACTIONS(1038), 1,
      aux_sym_comment_token2,
    ACTIONS(1040), 1,
      anon_sym_RBRACE_RBRACE,
  [7960] = 2,
    ACTIONS(1042), 1,
      aux_sym_comment_token2,
    ACTIONS(1044), 1,
      sym_identifier,
  [7967] = 2,
    ACTIONS(1046), 1,
      aux_sym_comment_token2,
    ACTIONS(1048), 1,
      sym_identifier,
  [7974] = 2,
    ACTIONS(1050), 1,
      aux_sym_comment_token2,
    ACTIONS(1052), 1,
      anon_sym_RBRACE_RBRACE,
  [7981] = 2,
    ACTIONS(1054), 1,
      aux_sym_comment_token2,
    ACTIONS(1056), 1,
      aux_sym_comment_token4,
  [7988] = 2,
    ACTIONS(1058), 1,
      aux_sym_comment_token2,
    ACTIONS(1060), 1,
      sym_identifier,
  [7995] = 1,
    ACTIONS(1062), 1,
      aux_sym_comment_token4,
  [7999] = 1,
    ACTIONS(1064), 1,
      sym_identifier,
  [8003] = 1,
    ACTIONS(1066), 1,
      aux_sym_comment_token4,
  [8007] = 1,
    ACTIONS(1068), 1,
      aux_sym_comment_token2,
  [8011] = 1,
    ACTIONS(1070), 1,
      sym_status_code,
  [8015] = 1,
    ACTIONS(1072), 1,
      anon_sym_COLON,
  [8019] = 1,
    ACTIONS(1074), 1,
      sym_identifier,
  [8023] = 1,
    ACTIONS(1076), 1,
      aux_sym_comment_token2,
  [8027] = 1,
    ACTIONS(1078), 1,
      aux_sym_pre_request_script_token1,
  [8031] = 1,
    ACTIONS(1080), 1,
      anon_sym_RBRACE_RBRACE,
  [8035] = 1,
    ACTIONS(1082), 1,
      aux_sym_comment_token4,
  [8039] = 1,
    ACTIONS(1084), 1,
      sym_identifier,
  [8043] = 1,
    ACTIONS(1086), 1,
      aux_sym_comment_token4,
  [8047] = 1,
    ACTIONS(1088), 1,
      aux_sym_pre_request_script_token1,
  [8051] = 1,
    ACTIONS(1090), 1,
      aux_sym_comment_token4,
  [8055] = 1,
    ACTIONS(1092), 1,
      aux_sym_multipart_form_data_token1,
  [8059] = 1,
    ACTIONS(1094), 1,
      aux_sym_comment_token2,
  [8063] = 1,
    ACTIONS(1096), 1,
      anon_sym_RBRACE_RBRACE,
  [8067] = 1,
    ACTIONS(1098), 1,
      sym__not_comment,
  [8071] = 1,
    ACTIONS(1100), 1,
      aux_sym_comment_token2,
  [8075] = 1,
    ACTIONS(1102), 1,
      aux_sym_comment_token4,
  [8079] = 1,
    ACTIONS(1104), 1,
      aux_sym_comment_token4,
  [8083] = 1,
    ACTIONS(1106), 1,
      aux_sym_comment_token4,
  [8087] = 1,
    ACTIONS(1108), 1,
      aux_sym_pre_request_script_token1,
  [8091] = 1,
    ACTIONS(1110), 1,
      aux_sym_comment_token4,
  [8095] = 1,
    ACTIONS(1112), 1,
      aux_sym_comment_token4,
  [8099] = 1,
    ACTIONS(1114), 1,
      aux_sym_comment_token4,
  [8103] = 1,
    ACTIONS(1116), 1,
      aux_sym_pre_request_script_token1,
  [8107] = 1,
    ACTIONS(1118), 1,
      aux_sym_comment_token4,
  [8111] = 1,
    ACTIONS(1120), 1,
      aux_sym_pre_request_script_token1,
  [8115] = 1,
    ACTIONS(1122), 1,
      aux_sym_comment_token4,
  [8119] = 1,
    ACTIONS(1124), 1,
      aux_sym__blank_line_token1,
  [8123] = 1,
    ACTIONS(1126), 1,
      anon_sym_RBRACE_RBRACE,
  [8127] = 1,
    ACTIONS(1128), 1,
      anon_sym_RBRACE_RBRACE,
  [8131] = 1,
    ACTIONS(1130), 1,
      aux_sym_comment_token4,
  [8135] = 1,
    ACTIONS(1132), 1,
      sym__not_comment,
  [8139] = 1,
    ACTIONS(1134), 1,
      aux_sym_comment_token4,
  [8143] = 1,
    ACTIONS(1136), 1,
      anon_sym_EQ,
  [8147] = 1,
    ACTIONS(1138), 1,
      aux_sym_comment_token2,
  [8151] = 1,
    ACTIONS(1140), 1,
      aux_sym_comment_token2,
  [8155] = 1,
    ACTIONS(1142), 1,
      sym_identifier,
  [8159] = 1,
    ACTIONS(1144), 1,
      anon_sym_RBRACE_RBRACE,
  [8163] = 1,
    ACTIONS(1146), 1,
      anon_sym_RBRACE_RBRACE,
  [8167] = 1,
    ACTIONS(1148), 1,
      aux_sym_comment_token4,
  [8171] = 1,
    ACTIONS(1150), 1,
      aux_sym_comment_token4,
  [8175] = 1,
    ACTIONS(1152), 1,
      aux_sym_comment_token4,
  [8179] = 1,
    ACTIONS(1154), 1,
      sym_identifier,
  [8183] = 1,
    ACTIONS(1156), 1,
      sym_identifier,
  [8187] = 1,
    ACTIONS(1158), 1,
      aux_sym_comment_token4,
  [8191] = 1,
    ACTIONS(1160), 1,
      aux_sym_comment_token4,
  [8195] = 1,
    ACTIONS(1162), 1,
      aux_sym_comment_token2,
  [8199] = 1,
    ACTIONS(1164), 1,
      sym_identifier,
  [8203] = 1,
    ACTIONS(1166), 1,
      sym_identifier,
  [8207] = 1,
    ACTIONS(1168), 1,
      aux_sym_comment_token2,
  [8211] = 1,
    ACTIONS(1170), 1,
      ts_builtin_sym_end,
  [8215] = 1,
    ACTIONS(1172), 1,
      aux_sym_comment_token4,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 511,
  [SMALL_STATE(10)] = 584,
  [SMALL_STATE(11)] = 657,
  [SMALL_STATE(12)] = 730,
  [SMALL_STATE(13)] = 803,
  [SMALL_STATE(14)] = 876,
  [SMALL_STATE(15)] = 949,
  [SMALL_STATE(16)] = 1022,
  [SMALL_STATE(17)] = 1095,
  [SMALL_STATE(18)] = 1168,
  [SMALL_STATE(19)] = 1241,
  [SMALL_STATE(20)] = 1314,
  [SMALL_STATE(21)] = 1387,
  [SMALL_STATE(22)] = 1460,
  [SMALL_STATE(23)] = 1533,
  [SMALL_STATE(24)] = 1606,
  [SMALL_STATE(25)] = 1679,
  [SMALL_STATE(26)] = 1752,
  [SMALL_STATE(27)] = 1825,
  [SMALL_STATE(28)] = 1898,
  [SMALL_STATE(29)] = 1971,
  [SMALL_STATE(30)] = 2044,
  [SMALL_STATE(31)] = 2109,
  [SMALL_STATE(32)] = 2174,
  [SMALL_STATE(33)] = 2239,
  [SMALL_STATE(34)] = 2304,
  [SMALL_STATE(35)] = 2369,
  [SMALL_STATE(36)] = 2434,
  [SMALL_STATE(37)] = 2499,
  [SMALL_STATE(38)] = 2564,
  [SMALL_STATE(39)] = 2629,
  [SMALL_STATE(40)] = 2694,
  [SMALL_STATE(41)] = 2759,
  [SMALL_STATE(42)] = 2824,
  [SMALL_STATE(43)] = 2889,
  [SMALL_STATE(44)] = 2954,
  [SMALL_STATE(45)] = 3019,
  [SMALL_STATE(46)] = 3084,
  [SMALL_STATE(47)] = 3149,
  [SMALL_STATE(48)] = 3214,
  [SMALL_STATE(49)] = 3279,
  [SMALL_STATE(50)] = 3344,
  [SMALL_STATE(51)] = 3409,
  [SMALL_STATE(52)] = 3474,
  [SMALL_STATE(53)] = 3539,
  [SMALL_STATE(54)] = 3604,
  [SMALL_STATE(55)] = 3669,
  [SMALL_STATE(56)] = 3734,
  [SMALL_STATE(57)] = 3799,
  [SMALL_STATE(58)] = 3864,
  [SMALL_STATE(59)] = 3929,
  [SMALL_STATE(60)] = 3971,
  [SMALL_STATE(61)] = 4013,
  [SMALL_STATE(62)] = 4055,
  [SMALL_STATE(63)] = 4113,
  [SMALL_STATE(64)] = 4171,
  [SMALL_STATE(65)] = 4205,
  [SMALL_STATE(66)] = 4239,
  [SMALL_STATE(67)] = 4272,
  [SMALL_STATE(68)] = 4305,
  [SMALL_STATE(69)] = 4336,
  [SMALL_STATE(70)] = 4369,
  [SMALL_STATE(71)] = 4402,
  [SMALL_STATE(72)] = 4435,
  [SMALL_STATE(73)] = 4462,
  [SMALL_STATE(74)] = 4489,
  [SMALL_STATE(75)] = 4516,
  [SMALL_STATE(76)] = 4543,
  [SMALL_STATE(77)] = 4570,
  [SMALL_STATE(78)] = 4618,
  [SMALL_STATE(79)] = 4666,
  [SMALL_STATE(80)] = 4714,
  [SMALL_STATE(81)] = 4740,
  [SMALL_STATE(82)] = 4788,
  [SMALL_STATE(83)] = 4836,
  [SMALL_STATE(84)] = 4884,
  [SMALL_STATE(85)] = 4910,
  [SMALL_STATE(86)] = 4936,
  [SMALL_STATE(87)] = 4984,
  [SMALL_STATE(88)] = 5032,
  [SMALL_STATE(89)] = 5057,
  [SMALL_STATE(90)] = 5082,
  [SMALL_STATE(91)] = 5107,
  [SMALL_STATE(92)] = 5132,
  [SMALL_STATE(93)] = 5157,
  [SMALL_STATE(94)] = 5182,
  [SMALL_STATE(95)] = 5207,
  [SMALL_STATE(96)] = 5232,
  [SMALL_STATE(97)] = 5257,
  [SMALL_STATE(98)] = 5282,
  [SMALL_STATE(99)] = 5307,
  [SMALL_STATE(100)] = 5332,
  [SMALL_STATE(101)] = 5357,
  [SMALL_STATE(102)] = 5382,
  [SMALL_STATE(103)] = 5407,
  [SMALL_STATE(104)] = 5456,
  [SMALL_STATE(105)] = 5505,
  [SMALL_STATE(106)] = 5530,
  [SMALL_STATE(107)] = 5563,
  [SMALL_STATE(108)] = 5596,
  [SMALL_STATE(109)] = 5629,
  [SMALL_STATE(110)] = 5662,
  [SMALL_STATE(111)] = 5695,
  [SMALL_STATE(112)] = 5728,
  [SMALL_STATE(113)] = 5761,
  [SMALL_STATE(114)] = 5794,
  [SMALL_STATE(115)] = 5827,
  [SMALL_STATE(116)] = 5860,
  [SMALL_STATE(117)] = 5893,
  [SMALL_STATE(118)] = 5926,
  [SMALL_STATE(119)] = 5959,
  [SMALL_STATE(120)] = 5992,
  [SMALL_STATE(121)] = 6025,
  [SMALL_STATE(122)] = 6058,
  [SMALL_STATE(123)] = 6091,
  [SMALL_STATE(124)] = 6124,
  [SMALL_STATE(125)] = 6157,
  [SMALL_STATE(126)] = 6190,
  [SMALL_STATE(127)] = 6223,
  [SMALL_STATE(128)] = 6256,
  [SMALL_STATE(129)] = 6289,
  [SMALL_STATE(130)] = 6322,
  [SMALL_STATE(131)] = 6346,
  [SMALL_STATE(132)] = 6371,
  [SMALL_STATE(133)] = 6389,
  [SMALL_STATE(134)] = 6407,
  [SMALL_STATE(135)] = 6425,
  [SMALL_STATE(136)] = 6443,
  [SMALL_STATE(137)] = 6460,
  [SMALL_STATE(138)] = 6477,
  [SMALL_STATE(139)] = 6494,
  [SMALL_STATE(140)] = 6511,
  [SMALL_STATE(141)] = 6528,
  [SMALL_STATE(142)] = 6545,
  [SMALL_STATE(143)] = 6562,
  [SMALL_STATE(144)] = 6579,
  [SMALL_STATE(145)] = 6596,
  [SMALL_STATE(146)] = 6612,
  [SMALL_STATE(147)] = 6628,
  [SMALL_STATE(148)] = 6644,
  [SMALL_STATE(149)] = 6660,
  [SMALL_STATE(150)] = 6676,
  [SMALL_STATE(151)] = 6692,
  [SMALL_STATE(152)] = 6708,
  [SMALL_STATE(153)] = 6724,
  [SMALL_STATE(154)] = 6740,
  [SMALL_STATE(155)] = 6756,
  [SMALL_STATE(156)] = 6772,
  [SMALL_STATE(157)] = 6788,
  [SMALL_STATE(158)] = 6804,
  [SMALL_STATE(159)] = 6820,
  [SMALL_STATE(160)] = 6836,
  [SMALL_STATE(161)] = 6852,
  [SMALL_STATE(162)] = 6868,
  [SMALL_STATE(163)] = 6890,
  [SMALL_STATE(164)] = 6914,
  [SMALL_STATE(165)] = 6936,
  [SMALL_STATE(166)] = 6960,
  [SMALL_STATE(167)] = 6984,
  [SMALL_STATE(168)] = 7003,
  [SMALL_STATE(169)] = 7022,
  [SMALL_STATE(170)] = 7043,
  [SMALL_STATE(171)] = 7064,
  [SMALL_STATE(172)] = 7085,
  [SMALL_STATE(173)] = 7106,
  [SMALL_STATE(174)] = 7127,
  [SMALL_STATE(175)] = 7148,
  [SMALL_STATE(176)] = 7171,
  [SMALL_STATE(177)] = 7192,
  [SMALL_STATE(178)] = 7213,
  [SMALL_STATE(179)] = 7234,
  [SMALL_STATE(180)] = 7254,
  [SMALL_STATE(181)] = 7272,
  [SMALL_STATE(182)] = 7290,
  [SMALL_STATE(183)] = 7308,
  [SMALL_STATE(184)] = 7326,
  [SMALL_STATE(185)] = 7344,
  [SMALL_STATE(186)] = 7362,
  [SMALL_STATE(187)] = 7380,
  [SMALL_STATE(188)] = 7398,
  [SMALL_STATE(189)] = 7416,
  [SMALL_STATE(190)] = 7434,
  [SMALL_STATE(191)] = 7452,
  [SMALL_STATE(192)] = 7470,
  [SMALL_STATE(193)] = 7488,
  [SMALL_STATE(194)] = 7506,
  [SMALL_STATE(195)] = 7524,
  [SMALL_STATE(196)] = 7542,
  [SMALL_STATE(197)] = 7555,
  [SMALL_STATE(198)] = 7570,
  [SMALL_STATE(199)] = 7581,
  [SMALL_STATE(200)] = 7592,
  [SMALL_STATE(201)] = 7603,
  [SMALL_STATE(202)] = 7614,
  [SMALL_STATE(203)] = 7624,
  [SMALL_STATE(204)] = 7634,
  [SMALL_STATE(205)] = 7644,
  [SMALL_STATE(206)] = 7654,
  [SMALL_STATE(207)] = 7664,
  [SMALL_STATE(208)] = 7674,
  [SMALL_STATE(209)] = 7684,
  [SMALL_STATE(210)] = 7694,
  [SMALL_STATE(211)] = 7704,
  [SMALL_STATE(212)] = 7712,
  [SMALL_STATE(213)] = 7722,
  [SMALL_STATE(214)] = 7732,
  [SMALL_STATE(215)] = 7742,
  [SMALL_STATE(216)] = 7752,
  [SMALL_STATE(217)] = 7760,
  [SMALL_STATE(218)] = 7770,
  [SMALL_STATE(219)] = 7780,
  [SMALL_STATE(220)] = 7788,
  [SMALL_STATE(221)] = 7796,
  [SMALL_STATE(222)] = 7806,
  [SMALL_STATE(223)] = 7816,
  [SMALL_STATE(224)] = 7823,
  [SMALL_STATE(225)] = 7830,
  [SMALL_STATE(226)] = 7835,
  [SMALL_STATE(227)] = 7840,
  [SMALL_STATE(228)] = 7845,
  [SMALL_STATE(229)] = 7850,
  [SMALL_STATE(230)] = 7857,
  [SMALL_STATE(231)] = 7864,
  [SMALL_STATE(232)] = 7871,
  [SMALL_STATE(233)] = 7878,
  [SMALL_STATE(234)] = 7885,
  [SMALL_STATE(235)] = 7892,
  [SMALL_STATE(236)] = 7899,
  [SMALL_STATE(237)] = 7906,
  [SMALL_STATE(238)] = 7913,
  [SMALL_STATE(239)] = 7920,
  [SMALL_STATE(240)] = 7925,
  [SMALL_STATE(241)] = 7932,
  [SMALL_STATE(242)] = 7939,
  [SMALL_STATE(243)] = 7946,
  [SMALL_STATE(244)] = 7953,
  [SMALL_STATE(245)] = 7960,
  [SMALL_STATE(246)] = 7967,
  [SMALL_STATE(247)] = 7974,
  [SMALL_STATE(248)] = 7981,
  [SMALL_STATE(249)] = 7988,
  [SMALL_STATE(250)] = 7995,
  [SMALL_STATE(251)] = 7999,
  [SMALL_STATE(252)] = 8003,
  [SMALL_STATE(253)] = 8007,
  [SMALL_STATE(254)] = 8011,
  [SMALL_STATE(255)] = 8015,
  [SMALL_STATE(256)] = 8019,
  [SMALL_STATE(257)] = 8023,
  [SMALL_STATE(258)] = 8027,
  [SMALL_STATE(259)] = 8031,
  [SMALL_STATE(260)] = 8035,
  [SMALL_STATE(261)] = 8039,
  [SMALL_STATE(262)] = 8043,
  [SMALL_STATE(263)] = 8047,
  [SMALL_STATE(264)] = 8051,
  [SMALL_STATE(265)] = 8055,
  [SMALL_STATE(266)] = 8059,
  [SMALL_STATE(267)] = 8063,
  [SMALL_STATE(268)] = 8067,
  [SMALL_STATE(269)] = 8071,
  [SMALL_STATE(270)] = 8075,
  [SMALL_STATE(271)] = 8079,
  [SMALL_STATE(272)] = 8083,
  [SMALL_STATE(273)] = 8087,
  [SMALL_STATE(274)] = 8091,
  [SMALL_STATE(275)] = 8095,
  [SMALL_STATE(276)] = 8099,
  [SMALL_STATE(277)] = 8103,
  [SMALL_STATE(278)] = 8107,
  [SMALL_STATE(279)] = 8111,
  [SMALL_STATE(280)] = 8115,
  [SMALL_STATE(281)] = 8119,
  [SMALL_STATE(282)] = 8123,
  [SMALL_STATE(283)] = 8127,
  [SMALL_STATE(284)] = 8131,
  [SMALL_STATE(285)] = 8135,
  [SMALL_STATE(286)] = 8139,
  [SMALL_STATE(287)] = 8143,
  [SMALL_STATE(288)] = 8147,
  [SMALL_STATE(289)] = 8151,
  [SMALL_STATE(290)] = 8155,
  [SMALL_STATE(291)] = 8159,
  [SMALL_STATE(292)] = 8163,
  [SMALL_STATE(293)] = 8167,
  [SMALL_STATE(294)] = 8171,
  [SMALL_STATE(295)] = 8175,
  [SMALL_STATE(296)] = 8179,
  [SMALL_STATE(297)] = 8183,
  [SMALL_STATE(298)] = 8187,
  [SMALL_STATE(299)] = 8191,
  [SMALL_STATE(300)] = 8195,
  [SMALL_STATE(301)] = 8199,
  [SMALL_STATE(302)] = 8203,
  [SMALL_STATE(303)] = 8207,
  [SMALL_STATE(304)] = 8211,
  [SMALL_STATE(305)] = 8215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 8),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 12),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 12),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 13),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 13),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 11),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 11),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 17),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 12),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 12),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 19),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 19),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 22),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 22),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 26),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 26),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 27),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 27),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 30),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 30),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 12),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 12),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 26),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 26),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 37),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 37),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 39),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 39),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 43),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 43),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 48),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 48),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 26),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 26),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 57),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 57),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 11),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 11),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 51),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 51),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 28),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 28),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 40),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 40),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 42),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 42),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 23),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 23),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 31),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 31),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 44),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 44),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 46),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 46),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 33),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 33),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 49),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 49),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 50),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 50),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 34),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 34),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 38),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 38),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 52),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 52),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 53),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 53),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(237),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(47),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(303),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(257),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(214),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(210),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(221),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(234),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(265),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(67),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 56),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 56),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 58),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 58),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 59),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 59),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 60),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 60),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 61),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 61),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 16),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 16),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 62),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 62),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 63),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 63),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(285),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(285),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(268),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0), SHIFT(268),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(281),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(69),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 2, 0, 0),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0), SHIFT(268),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(268),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 9),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 9),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 25),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 25),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7, 0, 36),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 7, 0, 36),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 12),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 12),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 26),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 26),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 11),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 11),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 3, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 3, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_json_body, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_json_body, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 4, 0, 9),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 4, 0, 9),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 6, 0, 25),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 6, 0, 25),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_redirect, 4, 0, 35),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_redirect, 4, 0, 35),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 7, 0, 36),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 7, 0, 36),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(231),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(196),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(269),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(175),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(236),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(289),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(256),
  [583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(103),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 1, 0, 15),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 1, 0, 15),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 37),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 37),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 39),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 39),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 17),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 17),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 43),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 43),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 19),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 19),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 48),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 48),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 57),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 57),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 27),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 27),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 8),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 8),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 30),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 30),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 22),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 22),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14), SHIFT_REPEAT(230),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 20),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 20),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 54),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 54),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 20),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 20),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 45),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 45),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 20),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 20),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 32),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 32),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 3),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 41),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 41),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 29),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 29),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 10),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 10),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 2),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 5),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [807] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(184),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(253),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0), SHIFT(184),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [859] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(184),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [872] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(184),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(236),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [891] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 1, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 1, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 9),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 9),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 6),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 6),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 9),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 9),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 6),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 6),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(253),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 35),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 55),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1, 1, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, 0, 47),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_http(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
