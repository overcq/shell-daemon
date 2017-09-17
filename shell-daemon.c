/*****************************************************************************
 * OUX, Inc.                                                      2014‒10‒21 *
 * on ‟Gentoo Linux 13.0” “x86_64”                                   ©overcq *
 *****************************************************************************
 * workplace¦“sh” utility¦extension
 * uruchamia program „w tle”, ale jako “daemon”.
 *****************************************************************************
 * przydatne do anonimowych sterowników w języku “sh”.
 *****************************************************************************/
#include <alloca.h>
#include <string.h>
#include <unistd.h>
//=============================================================================
int
main( int argc
, char * argv[]
){  if( argc < 2 )
		return 1;
	daemon( 0, 0 );
	char **argv_e = alloca( sizeof( char * ) * argc );
	for( int i = 1; i < argc ; i++ )
	{	argv_e[ i - 1 ] = alloca( strlen( argv[i] ) + 1 );
	    strcpy( argv_e[ i - 1 ], argv[i] );
	}
	argv_e[ argc - 1 ] = NULL;
	return execv( argv_e[0], argv_e );
}
/*****************************************************************************/
