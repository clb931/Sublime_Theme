// comment.block.c
{
	x = 100; /* x = 100; // x = 100
		syntax test file
		THis is a multi line comment
		// hello world
		static
		if
		unsigned
		-3243242.0232f
		"Hello, World!\n";
		'Hello, World!\n';
		"
		'
	// x = 100; */ x = 100;

	st/*a*/tic;
	x = /*100*/100;
	/**/ x;
}

// comment.line.double-slash.c
{
	// one line comment
	x = 100;
	// it works
}

// keyword.control.c
{
	break
	case
	continue
	default
	do
	else
	for
	goto
	if
	return
	switch
	while
}

//keyword.operator.sizeof.c
{
	sizeof;
	int size = sizeof(int);
}

// keyword.control.c++
{
	catch
	delete
	namespace
	new
	operator
	throw
	try
	using
}

//keyword.operator.c++
{
	and
	and_eq
	bitand
	bitor
	compl
	not
	not_eq
	or
	or_eq
	this
	typeid
	xor
	xor_eq
}

//keyword.operator.cast.c++
{
	const_cast
	dynamic_cast
	reinterpret_cast
	static_cast
}

//keyword.other.cast.c++
{
	alignas
	alignof
	char16_t
	char32_t
	concept
	constexpr
	decltype
	final
	noexcept
	override
	requires
	static_assert
	thread_local
}

// storage.type.c
{
	asm
	auto
	bool
	char
	double
	enum
	float
	int
	long
	short
	signed
	struct
	typedef
	union
	unsigned
	void
}

// storage.modifier.c
{
	const
	extern
	inline
	register
	static
	volatile
}

// storage.type.c++
{
	class
	export
	friend
	typename
	wchar_t
}

// storage.type.template.c++
{
	template<typename T>
	void f(T s)
	{
	    std::cout << s << '\n';
	}

	template void f<double>(double);
	template void f<>(char);
	template void f(int);
}

// storage.modifier.c++
{
	explicit
	mutable
	private
	protected
	public
	virtual
}

// constant.language.c
{
	NULL
	true
	false
}

// constant.numeric.c
{
	123455678.0f;
	-83904782347.03243242f;
	4732473284;
	-132f;
	-23434+12213=2312038;
	++873247f;
	--1;
}

// constant.language.c++
{
	nullptr
	char *c = nullptr;
}

// string.quoted.double.c
{
	// punctuation.definition.string.begin.c
	"Hello, World!\n";
	"Hello, World!\n//";
	"Multi line						//----;
	String							//----;
	unsigned";						//----;
	"String with \"Quotes\" in it!";
	"a";
	" ";
	"\"";
	"'";
	"";
	// punctuation.definition.string.end.c
}

// string.quoted.single.c
{
	// punctuation.definition.string.begin.c
	'Hello, World!\n';
	'Hello, World!\n//';
	'Multi line						//----;
	String							//----;
	static';						//----;
	'String with \'Quotes\' in it!';
	'a';
	' ';
	'\'';
	'"';
	'';
	// punctuation.definition.string.end.c
}

// constant.character.escape.c
{
	"Escape Character Double Quote Test!;
	\' \" \? \\ \a \b \f \n \r \t \v \c \x \z \u;
	\\? \\\ \\a \\b \\f \\n \\r \\t \\v \U \X;
	\0 \1 \2 \3 \4 \5 \6 \7 \8 \9 \10 \19;
	\\0 \\1 \\2 \\3 \\4 \\5 \\6 \\7 \\8 \\9;
	\90de90d \0173; \08; \uAP; \ua2434FDg;
	\UAP; \U8f03425745z; \XAP; \X1323Fdsd;
	\X123434786AFDCB89690P";

	'Escape Character Double Quote Test!;
	\' \" \? \\ \a \b \f \n \r \t \v \c \x \z \u;
	\\? \\\ \\a \\b \\f \\n \\r \\t \\v \U \X;
	\0 \1 \2 \3 \4 \5 \6 \7 \8 \9 \10 \19;
	\\0 \\1 \\2 \\3 \\4 \\5 \\6 \\7 \\8 \\9;
	\90de90d \0173; \08; \uAP; \ua2434FDg;
	\UAP; \U8f03425745z; \XAP; \X1323Fdsd;
	\X123434786AFDCB89690P';
}

// constant.character.escape.c
{
	"Placeholder Double Quote Test!;
	%0.*d %i %1*u %o %*.*x %X %f %F %e %E
	%g %G %a %A %c %s %p %n %t*.* %.3j %y %%";

	'Placeholder Single Quote Test!;
	%0.*d %i %1*u %o %*.*x %X %f %F %e %E
	%g %G %a %A %c %s %p %n %t*.* %.3j %y %%';

	"%-1.3u %+1.3u %-.3u %-1u %-*.*ul %-u %1-u %u-
	%-1.*hhi %03.2u %lhs %hju %+hu %^i %%u %#*.*hhi
	% u % 1.*hhu %#i %+*ll% %zd %+09s %*.08u % *.*hhn";
}

// meta.preprocessor.c
// keyword.control.import.c
{
	#if			DEF
	#elif		DEF
	#else
	#endif
	#defined	DEF
	#ifndef		DEF
	#ifndef		DEF
	#undef		DEF
	#line		777
	#pragma		once
	#pragma		comment(lib, "library.lib")
	#pragma		comment(lib, <library.lib>)
}

// meta.preprocessor.c.include
// keyword.control.import.include.c
{
	#include "helloWord!.h"
	#include <helloWorld!.h>
	#include "helloWord!.h"
	#include <helloWorld!.h>
}

// meta.preprocessor.macro.c
// keyword.control.import.define.c
{
	#define DEF
	#define DEF(void)
}

// meta.preprocessor.diagnostic.c
// keyword.control.import.error.c
{
	#error error message
	#error error_message
}

// variable
{
	asdf;
	a;
	x;
	y;
	apple;
	Win32ArtsAndCrafts;
	_length_;
}

// Test area
int main(int argc, char **argv)
{
	printf("Hello, World!\n");

	return(0);
}
