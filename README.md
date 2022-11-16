# AC2
Functional Flow of Device Startup
  Device wakes and joins network
  Device begins to broadcast a UDP message containing its contact information
  Device listens for UDP messages in hopes of finding another device
  A UDP message is received 
  A websocket is opened based on the contact information
  Networked device data is received
  A websocket is opened to each networked device
  Normal Communication Begins
