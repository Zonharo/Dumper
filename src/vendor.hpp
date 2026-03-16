#pragma once

#define APP_NAME \
    "  ___  _   _ __  __ ___  ___ ___ \n" \
    " |   \\| | | |  \\/  | _ \\| __| _ \\\n" \
    " | |) | |_| | |\\/| |  _/| _||   /\n" \
    " |___/ \\___/|_|  |_|_|  |___|_|_\\\n" \
    "\n"

extern bool g_verbose;

#define success(MSG, ...) printf("[+] "               MSG "\n", ##__VA_ARGS__)
#define info(MSG, ...) printf("[*] "               MSG "\n", ##__VA_ARGS__)
#define debug(MSG, ...) if (g_verbose) { printf("[debug] "               MSG "\n", ##__VA_ARGS__); }
#define error(MSG, ...) fprintf(stderr, "[!] "      MSG "\n", ##__VA_ARGS__)

#include <rpc.h>
#include <Windows.h>
#include <TlHelp32.h>
#include <cstdio>
#include <filesystem>
#include <fstream>

#include "./helper/singleton.hpp"
#include "./helper/memory.hpp"
#include "./core/dumper.hpp"