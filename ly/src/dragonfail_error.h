#ifndef H_DRAGONFAIL_ERROR
#define H_DRAGONFAIL_ERROR

enum dgn_error
{
	DGN_OK, // do not remove

	DGN_NULL,
	DGN_ALLOC,
	DGN_BOUNDS,
	DGN_DOMAIN,
	DGN_MLOCK,
	DGN_XSESSIONS_DIR,
	DGN_XSESSIONS_OPEN,
	DGN_PATH,
	DGN_CHDIR,
	DGN_PWNAM,
	DGN_USER_INIT,
	DGN_USER_GID,
	DGN_USER_UID,
	DGN_PAM,
	DGN_HOSTNAME,

	DGN_SIZE, // do not remove
};

#endif
