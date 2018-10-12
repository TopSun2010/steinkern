#if 0
	shc Version 3.8.9, Generic Script Compiler
	Copyright (c) 1994-2012 Francisco Rosales <frosal@fi.upm.es>

	shc -v -r -f 1.sh 
#endif

static  char data [] = 
#define      lsto_z	1
#define      lsto	((&data[0]))
	"\174"
#define      chk2_z	19
#define      chk2	((&data[2]))
	"\074\035\254\340\134\325\163\073\213\332\364\232\005\045\255\101"
	"\313\361\163\062\324\342"
#define      date_z	1
#define      date	((&data[23]))
	"\351"
#define      xecc_z	15
#define      xecc	((&data[27]))
	"\247\056\270\063\103\332\374\327\244\331\277\132\356\241\026\036"
	"\376\105\021\044\167"
#define      tst1_z	22
#define      tst1	((&data[45]))
	"\351\314\016\223\057\351\222\315\246\123\227\131\247\004\167\017"
	"\062\365\230\227\165\233\173\220\211\161\061"
#define      pswd_z	256
#define      pswd	((&data[85]))
	"\143\263\245\227\032\342\154\374\014\014\134\155\346\237\151\242"
	"\062\371\140\140\316\070\231\067\076\362\135\154\206\233\343\312"
	"\204\025\203\173\232\136\252\112\224\054\173\302\313\344\144\376"
	"\336\305\137\254\376\370\344\074\352\101\251\161\335\214\074\142"
	"\241\277\335\074\035\210\207\262\264\002\164\200\347\331\176\306"
	"\237\335\162\235\326\127\332\300\230\203\062\166\020\156\330\262"
	"\056\266\357\113\076\166\375\363\171\162\163\141\114\362\047\353"
	"\320\232\210\246\361\142\147\212\346\232\000\366\010\331\251\066"
	"\217\230\202\316\017\200\301\211\363\065\352\077\047\022\052\370"
	"\254\263\236\236\026\006\051\374\240\051\363\250\003\234\337\223"
	"\065\142\141\104\342\042\315\325\130\270\025\177\312\077\167\167"
	"\362\026\025\011\034\076\005\275\150\371\146\153\226\105\376\313"
	"\250\140\020\212\203\335\140\333\225\165\133\140\265\323\327\250"
	"\351\355\261\006\054\267\304\224\260\052\000\106\160\377\022\030"
	"\137\042\243\342\000\003\275\225\170\031\366\055\354\315\325\325"
	"\273\207\334\347\076\240\174\356\312\174\065\073\174\107\123\334"
	"\151\366\276\151\371\174\377\162\225\365\240\202\303\070\024\025"
	"\360\046\071\147\241\127\133\034\350\345\215\032\361\302\302\124"
	"\166\150\354\220\112\131\215\127\145\352\304\114\042\331\141\023"
	"\377\233\173\241\363\327\276"
#define      text_z	838
#define      text	((&data[537]))
	"\366\255\016\270\002\204\041\357\024\153\110\242\303\256\214\207"
	"\373\257\141\135\302\140\370\076\002\353\025\300\307\322\013\275"
	"\200\032\166\203\236\227\162\263\002\273\125\305\152\342\115\145"
	"\221\256\303\124\017\273\222\021\247\250\321\156\172\335\054\373"
	"\367\242\176\226\071\360\111\074\254\237\002\027\201\120\174\022"
	"\376\100\146\016\374\371\040\243\241\361\022\034\317\076\027\307"
	"\341\226\135\032\206\247\127\063\107\131\112\310\251\307\333\250"
	"\007\102\267\003\073\327\247\335\311\271\371\230\370\021\140\331"
	"\247\276\364\056\146\113\142\255\245\254\166\117\164\121\370\174"
	"\223\257\200\317\206\047\254\120\341\246\260\130\261\332\207\147"
	"\144\150\237\001\173\055\030\373\225\245\170\160\364\320\043\243"
	"\131\040\373\144\121\145\312\142\050\223\004\305\001\266\073\226"
	"\114\141\322\315\012\210\343\222\117\221\317\112\220\044\016\254"
	"\033\174\033\233\367\022\272\201\115\325\117\322\363\073\143\350"
	"\346\126\330\077\207\275\356\310\156\140\004\101\101\023\220\065"
	"\205\143\210\265\267\342\226\013\127\172\112\265\264\306\173\120"
	"\250\333\300\351\217\165\175\300\210\327\016\077\234\162\322\317"
	"\145\047\275\037\276\245\210\303\332\002\310\020\124\242\320\045"
	"\177\244\252\054\233\016\021\275\220\257\032\074\264\373\170\157"
	"\237\327\376\016\272\053\127\103\255\305\067\367\233\072\323\176"
	"\214\260\244\264\055\023\303\323\024\030\365\170\370\262\331\133"
	"\332\012\313\207\343\174\145\270\114\321\123\126\132\152\307\141"
	"\313\056\056\325\145\226\025\076\137\331\252\134\200\121\101\241"
	"\337\250\123\244\171\131\230\141\260\163\343\107\372\221\002\201"
	"\115\071\314\046\107\251\245\215\104\166\044\137\116\213\153\244"
	"\266\340\142\320\277\231\361\141\232\040\131\031\230\354\263\234"
	"\134\042\246\356\051\037\150\026\115\247\025\240\346\112\174\151"
	"\235\325\270\202\117\160\112\250\326\326\352\121\311\005\045\137"
	"\122\246\211\121\121\210\333\162\031\344\163\107\254\067\110\016"
	"\202\131\375\275\113\005\010\324\125\132\224\315\301\336\104\301"
	"\216\367\014\173\373\017\361\312\244\233\245\011\362\264\045\235"
	"\335\361\234\346\042\145\153\110\103\001\023\354\255\120\165\111"
	"\350\005\025\264\242\235\077\226\166\041\167\355\102\223\024\275"
	"\067\202\006\174\362\015\000\105\002\224\025\176\166\274\062\245"
	"\252\304\017\311\157\272\042\001\072\144\210\013\347\266\103\144"
	"\116\007\061\036\301\012\066\306\256\216\343\340\040\141\165\261"
	"\250\133\307\145\121\311\230\107\202\344\117\140\311\243\312\250"
	"\374\337\221\144\141\206\047\145\153\363\160\333\106\130\022\312"
	"\302\371\270\130\275\360\241\100\123\246\141\222\073\001\213\145"
	"\203\153\250\007\343\021\076\365\255\306\215\241\014\025\235\216"
	"\257\144\151\277\367\225\342\030\221\234\123\006\127\041\152\050"
	"\272\114\233\224\253\034\305\230\260\353\077\015\362\320\225\023"
	"\251\206\024\357\063\351\115\177\016\071\061\210\202\114\335\310"
	"\023\273\046\212\357\257\250\365\254\024\327\203\307\337\242\076"
	"\311\216\172\145\173\264\351\056\222\144\005\303\106\055\066\022"
	"\053\170\023\256\101\052\145\135\064\003\047\263\254\373\102\067"
	"\332\114\130\031\026\372\042\246\162\335\172\015\205\262\324\101"
	"\273\057\212\267\062\070\121\050\221\334\231\266\251\237\105\357"
	"\052\220\236\042\005\333\124\310\274\255\350\131\277\353\167\154"
	"\166\215\053\117\245\027\116\026\322\207\375\303\201\033\031\100"
	"\014\130\134\144\340\107\113\246\050\237\143\042\073\370\176\116"
	"\025\252\377\247\003\014\102\362\152\043\222\137\205\027\134\364"
	"\321\144\046\127\057\067\004\110\277\224\104\176\232\360\133\270"
	"\337\354\215\123\365\307\304\276\065\274\040\270\053\225\157\310"
	"\252\032\312\037\323\356\345\343\343\057\241\342\312\331\071\051"
	"\030\226\165\253\366\044\333\242\012\142\057\244\175\064\345\042"
	"\253\053\314\005\233\013\034\127\106\306\356\117\017\065\034\333"
	"\300\055\337\314\353\033\251\000\154\341\276\147\375\220\035\117"
	"\312\245\106\216\247\042\145\237\215\121\250\173\230\332\142\213"
	"\311\155\255\270\266\241\005\366\161\254\107\070\353\266\252\252"
	"\321\336\211\370\176\030\133\154\001\352\327\166\367\127\077\205"
	"\153\130\145\151\314\000\135\344\056\057\260\012\217\104\227\324"
	"\350\332\270\111\263\137\007\250\216\155\363\360\033\231\235\221"
	"\350\021\342\341\215\166\220\015\105\027\065\362\147\026\231\120"
	"\360\121\231\244\261\241\114\077\017\100\060\052\331\315\273\302"
	"\336\236\244\154\025\065\172\132\114\257\115\264\305\347"
#define      msg1_z	42
#define      msg1	((&data[1444]))
	"\237\132\352\100\247\052\120\310\074\005\055\020\262\304\266\332"
	"\252\002\013\065\113\263\117\277\211\212\060\053\205\076\112\132"
	"\266\153\211\112\015\376\177\144\046\167\264\263\134\055\111\016"
	"\053\347\132"
#define      chk1_z	22
#define      chk1	((&data[1492]))
	"\067\204\007\325\376\257\016\122\100\241\126\005\155\030\103\117"
	"\375\045\373\205\330\060\251\325\356\146"
#define      shll_z	8
#define      shll	((&data[1515]))
	"\135\113\124\153\075\104\071\306\032\356\105"
#define      msg2_z	19
#define      msg2	((&data[1528]))
	"\137\143\172\347\012\324\252\353\373\304\101\205\103\126\202\062"
	"\305\153\306\050\350\135\144\031"
#define      rlax_z	1
#define      rlax	((&data[1549]))
	"\340"
#define      opts_z	1
#define      opts	((&data[1550]))
	"\077"
#define      tst2_z	19
#define      tst2	((&data[1553]))
	"\043\020\207\263\152\014\242\342\133\031\064\042\062\000\336\112"
	"\231\066\324\342\176"
#define      inlo_z	3
#define      inlo	((&data[1572]))
	"\354\123\035"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = getenv("_");
	if (me == NULL) { me = argv[0]; }

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
