git pull origin master
now=$(date +"%T")
touch now
git add .
git commit -m "auto-commit"
git push origin master
