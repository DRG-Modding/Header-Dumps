// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t {
	NonDropFrameTimecode,
	DropFrameTimecode,
	Seconds,
	Frames,
	MAX_Count,
	EFrameNumberDisplayFormats_MAX,
};

// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t {
	Connected,
	Unresponsive,
	Disconnected,
	ETimedDataInputState_MAX,
};

// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t {
	None,
	Timecode,
	PlatformTime,
	ETimedDataInputEvaluationType_MAX,
};

// ScriptStruct TimeManagement.TimedDataInputEvaluationData
// Size: 0x08 (Inherited: 0x00)
struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x00(0x04)
	float DistanceToOldestSampleSeconds; // 0x04(0x04)
};

// ScriptStruct TimeManagement.TimedDataChannelSampleTime
// Size: 0x18 (Inherited: 0x00)
struct FTimedDataChannelSampleTime {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

