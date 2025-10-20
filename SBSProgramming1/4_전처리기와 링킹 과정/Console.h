#pragma once

// 키보드의 입력을 구현하는 기능 - 구현하기 위해 필요한 헤더들
// 헤더를 나누는 이유는 무엇일까?
// 특정 코드 기능들이 구현된 내용을 가져오는 것

// 스코어 기능
// 스코어 기능에 필요한 기능을 작성
// -개발자 입장에서 헤더를 나눠야하는 이유-
// 버그가 발생했다. 스코어 기능에서 버그가 발생 -> 스코어 코드 작성 부분을 확인 필요
// 키보드 입력과 스코어 기능이 같은 헤더에 들어있기 때문에 사용자가 디버깅하기 힘듦

// -컴퓨터 입장에서 헤더를 나눠야하는 이유-
// 소스 코드. 빌드 실행가능한 코드로 변환.
// 소스 파일마다 object를 생성해서 최종적으로 결합을 한다.
// 스코어 기능 코드 수정 시 키보드 입력 기능도 같이 빌드를 하게 돼서 빌드 시간에 낭비가 발생


#include <conio.h>   // _kbhit, _getch 사용 : 입력을 받을 때 필요한 함수
#include <stdlib.h>  // 동적할당, 메모리 관리코드
#include <windows.h> // Windows 콘솔 함수 사용 : Windows 키 입력에 필요한 함수

// 콘솔 커서 위치를 설정하는 함수
void setCursorPosition(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// 콘솔 커서를 숨기는 함수
void hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = FALSE; // 커서 숨기기
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

// 콘솔 커서를 보이게 하는 함수
void showCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = TRUE; // 커서 보이기
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

#define ESC 27 // 종료 키: ESC