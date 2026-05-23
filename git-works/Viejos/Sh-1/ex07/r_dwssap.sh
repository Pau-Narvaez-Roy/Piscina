cat /etc/passwd | grep -v '^#' | sed -n '1-2p' | cur -d: -f1 | rev | sort -rn  "${FT_LINE1}.${FT_LINE2}" | paste -sd. - | sed 's/$/./' 
