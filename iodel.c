/*
hongkong �������饤����Ȥ� giveio �򥤥󥹥ȡ��뤷ľ�����ꡢ��¾����ΤǤĤ���
*/
#include "giveio.h"

int main(int c, char **v)
{
	giveio_stop(GIVEIO_REMOVE);
	giveio_start();
	giveio_stop(GIVEIO_STOP);
	return 0;
}
