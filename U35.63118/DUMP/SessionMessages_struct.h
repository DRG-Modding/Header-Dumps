// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogUnsubscribe {
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x01 (Inherited: 0x00)
struct FSessionServiceLogSubscribe {
};

// ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x38 (Inherited: 0x00)
struct FSessionServiceLog {
	FName Category; // 0x00(0x08)
	FString Data; // 0x08(0x10)
	FGuid InstanceId; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x08)
	char Verbosity; // 0x30(0x01)
};

// ScriptStruct SessionMessages.SessionServicePong
// Size: 0x90 (Inherited: 0x00)
struct FSessionServicePong {
	bool Authorized; // 0x00(0x01)
	FString BuildDate; // 0x08(0x10)
	FString DeviceName; // 0x18(0x10)
	FGuid InstanceId; // 0x28(0x10)
	FString InstanceName; // 0x38(0x10)
	FString PlatformName; // 0x48(0x10)
	FGuid sessionId; // 0x58(0x10)
	FString SessionName; // 0x68(0x10)
	FString SessionOwner; // 0x78(0x10)
	bool Standalone; // 0x88(0x01)
};

// ScriptStruct SessionMessages.SessionServicePing
// Size: 0x10 (Inherited: 0x00)
struct FSessionServicePing {
	FString Username; // 0x00(0x10)
};

