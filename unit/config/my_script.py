
import os
import shutil

def run_cppcheck():
    # Create folder path for analysis results
    folder_path = "build/artifacts/cppcheck"
    
    # Create the folder if it doesn't exist
    os.makedirs(folder_path, exist_ok=True)
    
    # Change directory to src folder
    os.chdir('src/')
    
    # Run cppcheck on the current directory
    os.system('cppcheck . --enable=all 2> static_analysis.txt')
    
    # Move the output file to ../build/artifacts/cppcheck
    target_file_path = os.path.join('..', folder_path, 'static_analysis.txt')
    
    if os.path.exists(target_file_path):
        # File exists in target folder, replace it
        shutil.move('static_analysis.txt', target_file_path)
        print("Replaced existing static analysis results.")
    else:
        # File doesn't exist in target folder, simply move it
        shutil.move('static_analysis.txt', target_file_path)
        print("Moved static analysis results to target folder.")

if __name__ == "__main__":
    run_cppcheck()

