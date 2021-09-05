// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x30 (Inherited: 0x28)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x28(0x08)
};

// Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary {

	FFrameTime TransformTime(FFrameTime SourceTime, FFrameRate SourceRate, FFrameRate DestinationRate);
	FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32_t B);
	FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
	FFrameTime SnapFrameTimeToRate(FFrameTime SourceTime, FFrameRate SourceRate, FFrameRate SnapToRate);
	FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate FrameRate);
	FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32_t B);
	bool IsValid_MultipleOf(FFrameRate InFrameRate, FFrameRate OtherFramerate);
	bool IsValid_Framerate(FFrameRate InFrameRate);
	FFrameRate GetTimecodeFrameRate();
	FTimecode GetTimecode();
	FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32_t B);
	FString Conv_TimecodeToString(FTimecode InTimecode, bool bForceSignDisplay);
	float Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime InFrameTime);
	float Conv_FrameRateToSeconds(FFrameRate InFrameRate);
	int32_t Conv_FrameNumberToInteger(FFrameNumber InFrameNumber);
	FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32_t B);
	FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
};

// Class TimeManagement.TimeSynchronizationSource
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28(0x01)
	int32_t FrameOffset; // 0x2c(0x04)
};

