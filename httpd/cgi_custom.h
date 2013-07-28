#ifndef __CGI_CUSTOM_H__
#define __CGI_CUSTOM_H__

#include "eserv/cgi.h"

extern int cgi_page_login(ExHttp *pHttp);

/* customized page handler declare here */
cgi_page cgi_pages[] = {
	{
		.name = "login.cgi",
		.callback = cgi_page_login,
	},
};

void register_cgi(){
	size_t i;
	for (i = 0; i < sizeof(cgi_pages) / sizeof(cgi_page); i++)
		cgi_page_add(cgi_pages[i].name,
			cgi_pages[i].callback);

}

#endif

