#include <stdio.h>
#include <winsock2.h>

int main() {
    WSADATA wsa;
    WSAStartup(MAKEWORD(2,2), &wsa);

    int s, c;
    struct sockaddr_in addr;
    char msg[100];

    s = socket(AF_INET, SOCK_STREAM, 0);

    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    addr.sin_addr.s_addr = INADDR_ANY;

    bind(s, (struct sockaddr*)&addr, sizeof(addr));
    listen(s, 5);

    c = accept(s, NULL, NULL);

    recv(c, msg, sizeof(msg), 0);
    printf("Client: %s\n", msg);

    send(c, "Hello", 5, 0);

    closesocket(c);
    closesocket(s);
    WSACleanup();
}