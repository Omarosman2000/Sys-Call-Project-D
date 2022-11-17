char buffer[13312];
char line[80];
char dir[512];
int x;
int y;
int z;
int i;
char filename[20];
char command[4];
void main(){
	while(1){
syscall(0, "SHELL>");
syscall(1,line);
	if(line[0] == 't' && line[1] == 'y' && line[2] == 'p' && line[3] == 'e'){
            syscall(0,"TYPE COMMAND IS RUNNING");          
			syscall(3,line+5,buffer);
			if(buffer[0] == '\0'){
				syscall(0,"file not found"); // because the file does not exist
			}
			else{
				syscall(0,buffer);
				buffer[0] = '\0';
			}
		}
    else if(line[0] == 'e' && line[1] == 'x' && line[2] == 'e' && line[3] == 'c'){
			syscall(4,line+5);
    }
    else if(line[0]=='d' && line[1]=='i'&& line[2]=='r'){
            syscall(2,dir,2);
            for (y=0; y<512; y+=32){
                if (dir[y]=='\0'){
                    return;
                }
                else {
                    for (i=0; i<6; i++){
                        if (filename[i]=! '\0'){
                            filename[i]=dir[y+i];
                        }
                    
                        else{
                            break;
                    }
}
                    syscall(0,filename);
                    syscall(0, "\r\n");
}}}}}
    
