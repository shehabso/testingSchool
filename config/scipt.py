# import subprocess

# def run_cppcheck_with_misra(input_file, output_file):
#     cppcheck_command = [
#         'cppcheck',
#          directory,
#         '--enable=all',
#         '--addon=misra.py',
#         '--rule=misra_2012_text.txt',
#         '--platform=win64',
#         input_file
#     ]
#     try:
#         output = subprocess.check_output(cppcheck_command, stderr=subprocess.STDOUT, universal_newlines=True)
#         with open(output_file, 'w') as f:
#             f.write(output)
#         print("CPPCheck analysis completed successfully. Results saved to", output_file)
#     except subprocess.CalledProcessError as e:
#         print("Error running CPPCheck:", e.output)
#     except OSError as e:
#         print("Error executing command:", e)
# # Input file path
# #current directory 
# directory ='.'
# input_file = 'ledDriver.c'
# # Output file path
# output_file = 'static.txt'

# # Run CPPCheck with the MISRA addon on the input file and save the output to static.txt
# run_cppcheck_with_misra(input_file, output_file)

# import os
# import subprocess

# def run_cppcheck_with_misra(input_files, output_file):
#     cppcheck_command = [
#         'cppcheck',
#          directory,
#          '--enable=all',
#         '--addon=misra.py',
#         '--rule=misra_2012_text.txt',
#         '--platform=win64'
#     ]
    
#     with open(output_file, 'w') as f:
#         for input_file in input_files:
#             command = cppcheck_command + [input_file]
#             try:
#                 output = subprocess.check_output(command, stderr=subprocess.STDOUT, universal_newlines=True)
#                 f.write(output)
#             except subprocess.CalledProcessError as e:
#                 print("Error running CPPCheck:", e.output)
#             except OSError as e:
#                 print("Error executing command:", e)

#     print("CPPCheck analysis completed successfully. Results saved to", output_file)

# # Directory containing the .c files
# directory = '.'  # Current directory

# # Get a list of all .c files in the directory
# input_files = [os.path.join(directory, filename) for filename in os.listdir(directory) if filename.endswith('.c')]

# # Output file path
# output_file = 'static.txt'

# # Run CPPCheck with the MISRA addon on all .c files and save the output to static.txt
# run_cppcheck_with_misra(input_files, output_file)




import os
import subprocess

def run_cppcheck_with_misra(input_files):
    cppcheck_command = [
        'cppcheck',
        '--enable=all',
        '--addon=misra.py',
        '--rule=misra_2012_text.txt',
        '--platform=win64'
    ]
    
    for input_file in input_files:
        output_file = f"misra_{os.path.splitext(os.path.basename(input_file))[0]}.txt"
        command = cppcheck_command + [input_file]
        try:
            output = subprocess.check_output(command, stderr=subprocess.STDOUT, universal_newlines=True)
            with open(output_file, 'w') as f:
                f.write(output)
            print(f"CPPCheck analysis completed successfully for {input_file}. Results saved to {output_file}")
        except subprocess.CalledProcessError as e:
            print(f"Error running CPPCheck for {input_file}:", e.output)
        except OSError as e:
            print("Error executing command:", e)

# Directory containing the .c files
directory = '.'  # Current directory

# Get a list of all .c files in the directory
input_files = [os.path.join(directory, filename) for filename in os.listdir(directory) if filename.endswith('.c')]

# Run CPPCheck with the MISRA addon on all .c files and save the output to misra_<filename>.txt
run_cppcheck_with_misra(input_files)
