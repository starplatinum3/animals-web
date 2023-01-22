zucc web前端限选课 大作业
html  js css 简单web页面  无框架

简介
https://blog.csdn.net/jonathan_joestar/article/details/115381920

animals.html 为入口

git add .
git commit -m "1" 
git push origin master

nginx -s quit
cp nginx_animals_miku.conf /etc/nginx/nginx_animals_miku.conf
nginx  -c /etc/nginx/nginx_animals_miku.conf

nginx -t /etc/nginx/nginx_animals_miku.conf
nginx 关闭