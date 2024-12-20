//#!/bin/bash
//if["$#" - ne 2]; then
//echo "Пожалуйста, укажите директорию и расширение файлов."
//exit 1
//fi
//
//DIR = $1
//EXT = $2
//if[!- d "$DIR"]; then
//echo "Директория не найдена."
//exit 1
//fi
//FILES = $(find "$DIR" - type f - name "*.$EXT")
//if[-z "$FILES"]; then
//echo "Файлы с расширением $EXT не найдены."
//else
//echo "Найденные файлы с расширением $EXT:"
//echo "$FILES"
//fi