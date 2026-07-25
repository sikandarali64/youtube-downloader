# YouTube Downloader C++ Prototype

This project contains a simple C++ program that asks for a YouTube URL and runs `yt-dlp` to download the video.

## How it works

1. Compile the C++ file.
2. Run the executable.
3. Enter a valid YouTube URL.
4. The program calls `yt-dlp` to download the media.

## Build

On Windows, compile with:

```powershell
g++ d.cpp -o yt_downloader.exe
```

## Notes

- Make sure `yt-dlp` is installed and available in your PATH.
- Alternatively, set the `YTDLP_PATH` environment variable to the full path of `yt-dlp.exe`.

## Important

Only download content that you are authorized to access. Respect copyright and platform terms of service.
