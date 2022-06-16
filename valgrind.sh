#!/bin/bash
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./monty 00.m
