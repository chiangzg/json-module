#ifndef JSONMODULE_H__
#define JSONMODULE_H__

/* json的数据类型 */
typedef enum {
	JSON_NULL,
	JSON_FALSE,
	JSON_TRUE,
	JSON_NUMBER,
	JSON_STRING,
	JSON_ARRAY,
	JSON_OBJECT
} json_type;

/* json数据结构 */
typedef struct {
	json_type type;
} json_value;


/* 错误码 */
enum {
	JSON_PARSE_OK = 0,
	JSON_PARSE_EXPECT_VALUE,
	JSON_PARSE_INVALID_VALUE,
	JSON_PARSE_ROOT_NOT_SINGULAR
};

/* 解析json */
int json_parse(json_value* v, const char* json);

/* 获取类型 */
json_type json_get_type(const json_value* v);
#endif

/*
 	json语法子集:

	JSON-text = ws value ws
	ws = *(%x20 / %x09 / %x0A / %x0D)
	value = null / false / true 
	null  = "null"
	false = "false"
	true  = "true"
*/
