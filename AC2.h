// AC2.h

#ifndef _AC2_h
#define _AC2_h

#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#ifdef ARDUINO_ARCH_ESP32
    #include <WebServer.h>
    #include <WiFi.h>
#else
    #include <ESP8266WiFi.h>
    #include <ESP8266WebServer.h>
#endif
#include <time.h>
#include <FS.h>
//#include <SPIFFSLogger.h>
#define ACTerminalBufferSize   64
#define BufferSize   16


class AC2Class
{
protected:
    String buffer[BufferSize];
    int bufferCount;
    WiFiUDP Udp;
    bool ignoreDestinationAddress;
    void ReadUDPMessages();
    void ReadSocketMessages();
    void HandleMessageBuffer();
    void SendMessages();
    //void HandleWhoIs();
    //void HandleIAm();
    void HandleWriteCommand(String command);
    void HandleReadCommand(String command);
    void HandleConfigureCommand(String command);
    void HandleReplyCommand(String command);
    void SetupOTA();

public:
    enum IOType
    {
        DigitalInput,
        DigitalOutput,
        AnalogInput,
        AnalogOutput,
        Data
    };

    enum TimeScale
    {
        TimeScaleMilliseconds,
        TimeScaleSeconds,
        TimeScaleMinutes,
        TimeScaleHours
    };

    struct IO
    {
        String Name;
        int Pin;
        long Timeout;
        long DataTimer;
        IOType Type;
        int DefaultValue;
        int Value;
        boolean Invert;
    };
    struct Device
    {
        String Name;
        IPAddress IP;
        IPAddress BroadcastIP;
        int Port;
        IO Data[16];
    };
    bool init(String name, IPAddress ip, IPAddress broadcastIP, int port, int TaskRateMS);
    bool init(String name, IPAddress ip, IPAddress broadcastIP, int port, int TaskRateMS, bool treatAllMessagesAsBroadcast);
    void task();
    void WriteIO(String DeviceName, IO io);
    void LocalWriteIO(IO io);
    int  LocalReadIO(String Name);
    void ReadIO(String DeviceName, IO io);
    void HandleIO();
    void AddExternalMessage(String message);
    void print(String message);
    void println(String message);
    Device device;
    unsigned long lastTime;
    unsigned long timeNow;
    bool EnableOTA;
    String terminalBuffer[ACTerminalBufferSize];
    int terminalBufferCount;
    #ifdef ARDUINO_ARCH_ESP32
        WebServer webserver;
    #else
        ESP8266WebServer webserver;
    #endif
};

extern AC2Class AC2;

#endif

