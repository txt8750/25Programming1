#pragma once

#include "Console.h"

int KeboardMove()
{

    int x = 10, y = 5;       // 문자 초기 위치
    int maxX = 79, maxY = 24; // 콘솔 경계 (예시 값)

    hideCursor(); // 콘솔 커서 숨김

    // 초기 문자 출력
    setCursorPosition(x, y);
    printf("□");

    char key;

    printf("\n\nWASD로 이동, ESC 키를 누르면 종료합니다.");

    while (1) {
        if (_kbhit()) { // 키 입력이 있는지 확인
            setCursorPosition(x, y); // 현재 위치의 문자를
            printf("  "); // 공백으로 지움 (□는 2바이트 문자일 수 있어 공백 2개 사용)

            key = _getch(); // 키 입력 받기

            // 대소문자 모두 처리
            if (key >= 'a' && key <= 'z') {
                key -= 32; // 소문자를 대문자로 변환
            }

            switch (key) {
            case 'W': // 위쪽 이동
                if (y > 0) y--;
                break;
            case 'S': // 아래쪽 이동
                if (y < maxY) y++;
                break;
            case 'A': // 왼쪽 이동
                if (x > 0) x -= 2; // 한글/특수문자는 보통 2칸 차지
                break;
            case 'D': // 오른쪽 이동
                if (x < maxX - 1) x += 2; // 한글/특수문자는 보통 2칸 차지
                break;
            case ESC: // ESC 키 입력 시 루프 종료
                goto end_loop;
            }

            // 새 위치에 문자 출력
            setCursorPosition(x, y);
            printf("□");
        }

        Sleep(10); // CPU 사용을 줄이기 위해 잠시 대기
    }

end_loop:
    // 프로그램 종료 전 콘솔 정리
    system("cls"); // 화면 지우기
    showCursor(); // 커서 다시 보이기

}

