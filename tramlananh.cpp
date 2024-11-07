#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#define MAX 13

void gotoxy(int x, int y) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD g = {(SHORT)x, (SHORT)y};  // Ep kieu `int` thanh `SHORT`
    SetConsoleCursorPosition(h, g);
}

void textcolor(int x) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}

void resizeConsole(int width, int height) {
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}

void Begin() {
    gotoxy(28, 2); 
    textcolor(12); 
    printf("CONNECTING FROM LOVE SERVER");

    gotoxy(13, 4); 
    textcolor(12); 
    printf("%c%c%c", 3, 3, 3);
    
    gotoxy(65, 4); 
    printf("%c%c%c", 3, 3, 3);

    gotoxy(16, 4); 
    textcolor(11); 
    printf(" Send to Lan Anh - Nguoi con gai toi tham thuong");

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......10%%");

    gotoxy(18, 7); 
    textcolor(14); 
    printf("__________________________________________");
}

void love(int luu) {
    int traitim[MAX][MAX] = {
        {0,0,1,1,1,0,0,0,1,1,1,0,0},
        {0,1,0,0,0,1,0,1,0,0,0,1,0},
        {1,0,0,0,0,0,1,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,1},
        {0,1,0,0,0,0,0,0,0,0,0,1,0},
        {0,0,1,0,0,0,0,0,0,0,1,0,0},
        {0,0,0,1,0,0,0,0,0,1,0,0,0},
        {0,0,0,0,1,0,0,0,1,0,0,0,0},
        {0,0,0,0,0,1,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,1,0,0,0,0,0,0}
    };

    textcolor(luu % 14 + 1);

    if (luu == 0) {
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                Sleep(10);
                if (traitim[i][j]) {
                    gotoxy(j + 20, i + 10); 
                    printf("%c", 3);
                } else {
                    gotoxy(j + 20, i + 10); 
                    printf(" ");
                }
            }
            printf("\n");
        }
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                Sleep(10);
                if (traitim[i][j]) {
                    gotoxy(j + 33, i + 10); 
                    printf("%c", 3);
                } else {
                    gotoxy(j + 33, i + 10); 
                    printf(" ");
                }
            }
            printf("\n");
        }
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                Sleep(10);
                if (traitim[i][j]) {
                    gotoxy(j + 46, i + 10); 
                    printf("%c", 3);
                } else {
                    gotoxy(j + 46, i + 10); 
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    if (luu % 2 == 0) {
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                if (traitim[i][j]) {
                    gotoxy(j + 20, i + 10); 
                    printf("%c", 3);
                } else {
                    gotoxy(j + 20, i + 10); 
                    printf(" ");
                }
            }
            printf("\n");
        }
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                if (traitim[i][j]) {
                    gotoxy(j + 33, i + 10); 
                    printf("%c", 3);
                } else {
                    gotoxy(j + 33, i + 10); 
                    printf(" ");
                }
            }
            printf("\n");
        }
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < MAX; j++) {
                if (traitim[i][j]) {
                    gotoxy(j + 46, i + 10); 
                    printf("%c", 3);
                } else {
                    gotoxy(j + 46, i + 10); 
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    textcolor(12);
    gotoxy(26, 14); 
    printf("I"); 
    gotoxy(38, 14); 
    printf("LOVE"); 
    gotoxy(51, 14); 
    printf("YOU");
}

int main() {
    resizeConsole(900, 450);
    Begin();

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Cau a!! To co dieu muon noi voi cau.....");
    Sleep(5000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......15%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Truoc khi gap cau....to co nhieu thoi gian ranh roi lam");
    Sleep(5000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......21%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Nhung tu sau khi gap cau....Nhung khoang thoi gian do khong con nua");
    gotoxy(10, 12); 
    textcolor(15); 
    printf("Ma no bi lap day boi noi nho, tuong tu, va nhung suy nghi ve cau ");
    Sleep(10000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......26%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Co le 'TO THICH CAU NHIEU LAM ROI......' ");
    gotoxy(10, 12); 
    textcolor(15); 
    printf(" ");
    Sleep(5000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......35%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("... ");
    Sleep(5000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......41%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Mac du to da lam nhieu lan cau bi ton thuong do su ich ki cua ban than, to da nhan ra loi sai lam cua minh. To cung khong mong muon roi xa tinh ban nay. ");
    gotoxy(10, 12); 
    textcolor(15); 
    printf("To mong cau bo qua nhung loi lam ma to gay ra cho cau o qua khu. Gia ma quay lai thoi gian, to se khong... nhu vay....... ");
    Sleep(10000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......47%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("To chi la mot thang con trai nhu bao nguoi khac, cung biet yeu, biet thuong, biet lo lang...... ");
    Sleep(10000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......50%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf(" ");
    gotoxy(10, 12); 
    textcolor(15); 
        printf("Tu luc ngay cau gian, to da roi vao tram cam... de moi nguoi khong biet, to van luon cuoi dua va tro chuyen...");
    Sleep(5000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......55%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Nhieu luc to muon tim cach de tro chuyen voi cau nhung het lan nay den lan khac, cau khong cho to mot co hoi de sua...");
    gotoxy(10, 12); 
    textcolor(11); 
    printf("Va muon noi that to voi cau 'TO THICH CAU' ");
    Sleep(10000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......61%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Nhung to lai khong lam duoc...");
    gotoxy(10, 12); 
    textcolor(15); 
    printf("Co le trong mat cau, to chi la mot thang at o nao do da lam ton thuong cau va lam cau cuc ky ghet to...");
    Sleep(10000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......68%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("va cau cung khong co ly do gi de co the chap nhan mot nguoi nhu to...");
    gotoxy(10, 12); 
    textcolor(15); 
    printf(" ");
    Sleep(5000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......85%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Vi vay to rat... Thich cau, to van se giu trong long, chi minh to biet...");
    gotoxy(10, 12); 
    textcolor(15); 
    printf("Co le to se chi luon ngam nhin cau o phia sau...");
    Sleep(10000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......93%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Hom nay la mot ngay dac biet, ngay ma the gioi duoc ban tang mot nguoi tuyet voi nhu cau...");
    gotoxy(10, 12); 
    textcolor(15); 
    printf("To muon gui den cau nhung loi chuc tot dep nhat va hy vong rang ngay sinh nhat cua cau se tran day niem vui, tieng cuoi va hanh phuc...");
    Sleep(10000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......99%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Trong mat to, cau la nguoi dac biet, nguoi mang lai niem vui va nhung khoanh khac dang nho. Chuc cau luon xinh dep, rang ro va luon thanh cong trong cuoc song...");
    gotoxy(10, 12); 
    textcolor(15); 
    printf("To mong rang moi dieu uoc cua cau se tro thanh hien thuc...!!!");
    Sleep(10000);

    gotoxy(32, 6); 
    textcolor(13); 
    printf("Loading......100%%");

    gotoxy(10, 10); 
    textcolor(15); 
    printf("Day la loi cuoi cung cua to...");
    gotoxy(10, 12); 
    textcolor(15); 
    printf("Va hien tai hy vong duy nhat cua to chi la...");
    gotoxy(10, 14); 
    textcolor(15); 
    printf("Mot ngay nao do cau nho rang...");
    gotoxy(10, 16); 
    textcolor(15); 
    printf("da tung co mot thang con trai tham thuong cau rat nhieu...");
    Sleep(15000);

    system("cls");
    int luu = 0;
    while (1) {
        love(luu);
        luu++;
        Sleep(300);
    }
    getch();
}
