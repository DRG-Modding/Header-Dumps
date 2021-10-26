// Class UdpMessaging.UdpMessagingSettings
// Size: 0xa0 (Inherited: 0x28)
struct UUdpMessagingSettings : UObject {
	bool EnableTransport; // 0x28(0x01)
	bool bAutoRepair; // 0x29(0x01)
	bool bStopServiceWhenAppDeactivates; // 0x2a(0x01)
	FString UnicastEndpoint; // 0x30(0x10)
	FString MulticastEndpoint; // 0x40(0x10)
	enum class EUdpMessageFormat MessageFormat; // 0x50(0x01)
	char MulticastTimeToLive; // 0x51(0x01)
	TArray<FString> StaticEndpoints; // 0x58(0x10)
	bool EnableTunnel; // 0x68(0x01)
	FString TunnelUnicastEndpoint; // 0x70(0x10)
	FString TunnelMulticastEndpoint; // 0x80(0x10)
	TArray<FString> RemoteTunnelEndpoints; // 0x90(0x10)
};

