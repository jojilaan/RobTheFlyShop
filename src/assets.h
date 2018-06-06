#ifndef __H_KORE_ASSETS_H
#define __H_KORE_ASSETS_H
extern const u_int8_t asset_admin_html[];
extern const u_int32_t asset_len_admin_html;
extern const time_t asset_mtime_admin_html;
extern const char *asset_sha256_admin_html;
int asset_serve_admin_html(struct http_request *);
extern const u_int8_t asset_adminoptions_html[];
extern const u_int32_t asset_len_adminoptions_html;
extern const time_t asset_mtime_adminoptions_html;
extern const char *asset_sha256_adminoptions_html;
int asset_serve_adminoptions_html(struct http_request *);
extern const u_int8_t asset_DefaultFooter_html[];
extern const u_int32_t asset_len_DefaultFooter_html;
extern const time_t asset_mtime_DefaultFooter_html;
extern const char *asset_sha256_DefaultFooter_html;
int asset_serve_DefaultFooter_html(struct http_request *);
extern const u_int8_t asset_DefaultHeader_html[];
extern const u_int32_t asset_len_DefaultHeader_html;
extern const time_t asset_mtime_DefaultHeader_html;
extern const char *asset_sha256_DefaultHeader_html;
int asset_serve_DefaultHeader_html(struct http_request *);
extern const u_int8_t asset_index_html[];
extern const u_int32_t asset_len_index_html;
extern const time_t asset_mtime_index_html;
extern const char *asset_sha256_index_html;
int asset_serve_index_html(struct http_request *);
extern const u_int8_t asset_loginwarning_html[];
extern const u_int32_t asset_len_loginwarning_html;
extern const time_t asset_mtime_loginwarning_html;
extern const char *asset_sha256_loginwarning_html;
int asset_serve_loginwarning_html(struct http_request *);
extern const u_int8_t asset_login_html[];
extern const u_int32_t asset_len_login_html;
extern const time_t asset_mtime_login_html;
extern const char *asset_sha256_login_html;
int asset_serve_login_html(struct http_request *);
extern const u_int8_t asset_milesFailed_html[];
extern const u_int32_t asset_len_milesFailed_html;
extern const time_t asset_mtime_milesFailed_html;
extern const char *asset_sha256_milesFailed_html;
int asset_serve_milesFailed_html(struct http_request *);
extern const u_int8_t asset_addMiles_html[];
extern const u_int32_t asset_len_addMiles_html;
extern const time_t asset_mtime_addMiles_html;
extern const char *asset_sha256_addMiles_html;
int asset_serve_addMiles_html(struct http_request *);
extern const u_int8_t asset_logedin_html[];
extern const u_int32_t asset_len_logedin_html;
extern const time_t asset_mtime_logedin_html;
extern const char *asset_sha256_logedin_html;
int asset_serve_logedin_html(struct http_request *);
extern const u_int8_t asset_milesSucces_html[];
extern const u_int32_t asset_len_milesSucces_html;
extern const time_t asset_mtime_milesSucces_html;
extern const char *asset_sha256_milesSucces_html;
int asset_serve_milesSucces_html(struct http_request *);

#endif
