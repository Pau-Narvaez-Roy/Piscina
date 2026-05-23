#ls -R | grep .sh | sed 's/\.sh$//'
find . -type f -name "*.sh" -exec basename {} .sh \;
