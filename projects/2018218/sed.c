# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <regex.h>

extern char ** environ;


int main(void)

{
int status;
int fileDES;
int pipeDES[2];
pid_t pid;
char * sed_args[] = {
		"sed",
		"-i",
		"s/ddiatsigk/ddiatsig/g",
		"mycv.md",
		NULL
	};

char * sed_args_print[] = {
		"sed",
		"-e",
		"s/ddiatsigk/ddiatsig/g",
		"mycv.md",
		NULL
	};
	fileDES = open( "mycv.md", O_RDONLY );
	dup2( fileDES, fileno( stdin) );

	close( fileDES ) ;

	pipe( pipeDES );

	pid = fork();
	if( pid < 0 )
	{  
	perror("fork");  
	exit(1);  
	}
	else if( pid == 0 ) // child process 
	{  
	close( pipeDES[0] );  
	dup2( pipeDES[1], fileno(stdout) );  
	execve ("/bin/sed", sed_args, environ);
	fprintf (stderr, "Error\n");
	return 0;  
	}
	else if( pid > 0 ) // parent process
	{  
	close( pipeDES[1] );  
	dup2( pipeDES[0], fileno(stdin) );   
	close( pipeDES[0]);  
	execve ("/bin/sed", sed_args_print, environ);
	fprintf (stderr, "Error\n"); 
	}
}




























