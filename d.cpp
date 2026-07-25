#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    std::string url;
    std::cout << "Enter YouTube URL: ";
    std::getline(std::cin, url);

    if (url.empty()) {
        std::cerr << "No URL provided.\n";
        return 1;
    }

    std::string command = "yt-dlp.exe";
    const char* envPath = std::getenv("YTDLP_PATH");
    if (envPath && *envPath) {
        command = std::string("\"") + envPath + "\"";
    }

    std::string fullCommand = command + " \"" + url + "\"";

    std::cout << "Downloading...\n";
    int result = std::system(fullCommand.c_str());

    if (result == 0) {
        std::cout << "Download successful!\n";
    } else {
        std::cout << "Download failed!\n";
    }

    return result == 0 ? 0 : 1;
}