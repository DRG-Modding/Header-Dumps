// Class AudioCapture.AudioCapture
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioCapture : UAudioGenerator {
	char UnknownData_A8[0x8]; // 0xa8(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x790 (Inherited: 0x6d0)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6d0(0x04)
	char UnknownData_6D4[0xbc]; // 0x6d4(0xbc)
};

