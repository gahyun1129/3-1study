//-------------------------------------------------------------------------
// save.h 한 학기 강의를 저장한다.
// #pragma once >> 두 번 인클루드 하지 말아라.
//-------------------------------------------------------------------------
// #pragma once

#ifndef MY_SAVE_FILE
#define MY_SAVE_FILE

#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>

void save(const std::string& fileName);

#endif 