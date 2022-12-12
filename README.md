# AC2
## Device Startup
- Device wakes and joins network
- Device begins to broadcast a UDP message containing its contact information
- Device listens for UDP messages in hopes of finding another device
- A UDP message with contact information is received 
- A websocket is opened based on the contact information
- A list of networked devices and their contact information is received
- A websocket is opened to each networked device
- Normal Communication Begins

## Normal Communication
- Device Transmits a list of availible data organized by keyword
