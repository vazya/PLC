#include <cstdio>

void bar()
{
	int b = 777;
	for( int offset = -100; offset < 100; ++offset ) {
		if( *(&b + offset) == 666 ) {
			printf( "offset = %d \n", offset );
		}
	}
}

void baz( int )
{
	int b = 777;
	for( int offset = -100; offset < 100; ++offset ) {
		if( *(&b + offset) == 666 ) {
			printf( "offset = %d \n", offset );
		}
	}
}

void foo()
{
	int a = 666;
	bar();
	baz( a );
	//printf( "&a = %d \n", &a );
	//printf( "a = %d \n", *(&a) );
	//8060164 - 8060360
}

int main()
{
	foo();
	return 0;
}