// Class TcpMessaging.TcpMessagingSettings
// Size: 0x58 (Inherited: 0x28)
struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28(0x01)
	FString ListenEndpoint; // 0x30(0x10)
	TArray<FString> ConnectToEndpoints; // 0x40(0x10)
	int32_t ConnectionRetryDelay; // 0x50(0x04)
	bool bStopServiceWhenAppDeactivates; // 0x54(0x01)
};

