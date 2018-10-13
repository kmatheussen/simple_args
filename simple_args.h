#ifndef SIMPLE_ARGS_H_WOEIFJOIWEFJOIWFJE
#define SIMPLE_ARGS_H_WOEIFJOIWEFJOIWFJE

/*
  Kjetil Matheussen, 2008-2018
 */

#define OPTARGS_CHECK_GET(wrong,right) (lokke==argc-1?(fprintf(stderr,"Must supply argument for '%s'\n",argv[lokke]),exit(-4),wrong):right)

#define OPTARGS_BEGIN(das_usage) {int lokke;const char *usage=das_usage;for(lokke=1;lokke<argc;lokke++){char *a=argv[lokke];if(!strcmp("--help",a)||!strcmp("-h",a)){fprintf(stderr,"%s",usage);exit(0);
#define OPTARG(name,name2) }}else if(!strcmp(name,a)||!strcmp(name2,a)){{
#define OPTARG_GETINT() OPTARGS_CHECK_GET(0,atoll(argv[++lokke]))
//int optargs_inttemp;
//#define OPTARG_GETINT() OPTARGS_CHECK_GET(0,(optargs_inttemp=strtol(argv[++lokke],(char**)NULL,10),errno!=0?(perror("strtol"),0):optargs_inttemp))
#define OPTARG_GETFLOAT() OPTARGS_CHECK_GET(0.0f,atof(argv[++lokke]))
#define OPTARG_GETSTRING() OPTARGS_CHECK_GET("",argv[++lokke])
#define OPTARG_GETBOOL() ({const char *response = OPTARG_GETSTRING(); !strcasecmp(response,"false") ? false : !strcasecmp(response,"true") ? true : (fprintf(stderr,"Argument for '%s' must be \"false\" or \"true\"\n",argv[lokke-1]), exit(-5) , false);})
#define OPTARG_LAST() }}else if(lokke==argc-1 && argv[lokke][0]!='-'){lokke--;{
#define OPTARGS_ELSE() }else if(1){
#define OPTARGS_END }else{fprintf(stderr,"%s",usage);exit(-1);}}}


#endif
