cat /etc/passwd | sed -n '/#/!p' | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | tr "\n" "," | sed 's/,/, /g' | sed 's/\(.*\), /\1./' | tr -d "\n"
