import re

file_format_pattern = r"POSDATA_FINAL_mav((?!\.dat).)*$"
name_variable = "/user/bldadmin/megha_test/cdc/source/input_files/POSDATA_FINAL_maverik_20230531.dat"

if re.search(file_format_pattern, name_variable):
    print("String 'POSDATA_FINAL_mav' is present in the name variable.")
else:
    print("String 'POSDATA_FINAL_mav' is not present in the name variable.")
