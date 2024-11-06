# Test Driven Development


# How to start 
* to create a new project 
```bash 
ceedling help 
```
The output :
Welcome to Ceedling! \
Commands:
 ceedling example PROJ_NAME [DEST]  # new specified example project (in DEST...\
 ceedling examples                  # list available example projects\
 ceedling help [COMMAND]            # Describe available commands or one spe...\
 ceedling new PROJECT_NAME          # create a new ceedling project\
 ceedling upgrade PROJECT_NAME      # upgrade ceedling for a project (not re...\
 ceedling version                   # returns the version of the tools installed

# OR
* clone   the repo 
```bash 
git clone https://github.com/shehabso/testingSchool
```
* change your dir to  cd unit/test_project/
* Open your terminal and use this command line 
```bash 
ceedling test: all 
```
* to open the help make sure you are inside the project\
    * make sure you enable the coverage option in yaml file 
```bash 
ceedling utils:gcov
```
You will see your output in the artifact. 

