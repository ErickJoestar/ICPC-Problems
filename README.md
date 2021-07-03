# Competitive Programming
Repository containing all the solutions for different competitive programming contests


# Macros for .zshrc

```bash
export CP_DIR="$HOME/competitive-programming"
export CP_TEMPLATE="$CP_DIR/template"
export CP_BASE="$CP_DIR/base.cpp"

# Generate the initial directory
cpg() {
    if [ -n "$1" ]
    then
        cp -r "$CP_TEMPLATE" "$1"
        cd "$1"
        echo "Template generated"
	if [ -n "$2" ]
	then
	    cpn "$2"
    else
        cpn A.cpp
	fi
    else
        echo "Specify directory"
    fi
}

# Create file with the base file
cpn() {
    if [ -n "$1" ]
    then
        cp  "$CP_BASE" "$1"
        echo "File  "$1" created"  
    else
        echo "Specify file name"
    fi
}

# Compile the file and save the output
cpc(){
    if [ -n "$1" ]
    then
	g++ "$1" && ./a.out < in.txt > out.txt
    else
	echo "Specify file"
    fi
}
```