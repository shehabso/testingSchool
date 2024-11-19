CPPCHECK_ROOT_NAME           = 'cppcheck'.freeze
CPPCHECK_TASK_ROOT           = CPPCHECK_ROOT_NAME + ':'
CPPCHECK_SYM                 = CPPCHECK_ROOT_NAME.to_sym
CPPCHECK_HTMLREPORT_SYM      = (CPPCHECK_ROOT_NAME + '_htmlreport').to_sym

CPPCHECK_BUILD_PATH          = File.join(PROJECT_BUILD_ROOT, CPPCHECK_ROOT_NAME)
CPPCHECK_ARTIFACTS_PATH      = File.join(PROJECT_BUILD_ARTIFACTS_ROOT, CPPCHECK_ROOT_NAME)
CPPCHECK_ARTIFACTS_HTML_PATH = File.join(CPPCHECK_ARTIFACTS_PATH, 'html')

CPPCHECK_ARTIFACTS_FILE_TEXT = 'CppcheckReport.txt'
CPPCHECK_ARTIFACTS_FILE_XML  = File.basename(CPPCHECK_ARTIFACTS_FILE_TEXT).ext('.xml')

class CppcheckReportTypes
  TEXT = 'text'.freeze
  XML = 'xml'.freeze
  HTML = 'html'.freeze
  
  def self.is_supported?(report)
    REPORTS.include?(report)
  end
  
  private
  
  REPORTS = [TEXT, XML, HTML].freeze
end
