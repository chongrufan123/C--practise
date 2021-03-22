#!/bin/bash

git add .
if [ $(git status | wc -l) -ge 6 ]; then
    read -p "请输入更新的名称: " name
    git commit -m "${name}"
    git push
    if [ $(echo "$?") -eq 0 ]; then
        echo "更新完成"
        exit 0
    else
        echo "更新不成功"
        exit 1
    fi
    
else
    echo "当前git已经是最新"
    exit 0
fi

