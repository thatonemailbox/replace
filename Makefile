CC=@gcc # the "@" turns echo off
CFLAGS=-g
.SILENT:replacemake

replacemake: replace.c
	$(CC) -o replace.exe