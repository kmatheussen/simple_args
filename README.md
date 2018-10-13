
simple_args has been used in at least 3 software projects. The two most prominant ones are
jack_capture and s7webserver.

Example from the s7webserver:


```c

static const char *g_usage_string = ""
  "Usage: s7webserver [--verbose] [--very-verbose] [--search-for-first-free-portnum false-or-true] [portnumber]\n" 
  "\n"                                                                  
  "Default values:\n"                                                  
  "  verbose: false\n"                                                 
  "  very-verbose: false\n"                                            
  "  search-for-first-free-portnum: true\n"
  "  portnumber: 6080\n"                                               
  "\n"                                                                 
  "If \'search-for-first-portnum\' is set, s7webserver will search for the next free port number starting at \'portnumber\'.\n" 
  "\n";

int main(int argc, char **argv){

  int portnumber = 6080;
  bool verbose = false;
  bool very_verbose = false;
  bool find_first_free_portnum = true;

  OPTARGS_BEGIN(g_usage_string)
  {
    OPTARG("--verbose","-v") verbose = true;
    OPTARG("--very-verbose","-vv") very_verbose = true;
    OPTARG("--search-for-first-free-portnum", "-s") find_first_free_portnum=OPTARG_GETBOOL();
    OPTARG_LAST() portnumber=OPTARG_GETINT();
  }OPTARGS_END;
```

The example from jack_capture is much larger and can be viewed here:
https://github.com/kmatheussen/jack_capture/blob/master/jack_capture.c#L2348

