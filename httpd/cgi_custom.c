#include "bbs.h"

#include "eserv/cgi.h"


int cgi_page_login(ExHttp *pHttp)
{
	char *uid , *passwd;
	printf("\n--login.cgi--\n");

	uid = get_param_info(pHttp, "uid");
	passwd = get_param_info(pHttp, "passwd");


	//char fpath[64];
	ACCT cuser;
	if(acct_load(&cuser, uid) < 0){
		if(chkpasswd(cuser.passwd, passwd))
			ex_send_msg(pHttp, NULL, "GOOD", strlen("GOOD"));
		else
			ex_send_msg(pHttp, NULL, "something back", 14);
	}

	return 0;
}


